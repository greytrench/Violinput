/* Violinput

   Code for setting up a Teensy board with audio shield
   to listen to an electric violin or viola, and produce
   computer keystrokes and mouse commands as a result.

   Copyright (c) 2020, James Porter

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice, development funding notice, and this permission
   notice shall be included in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.
*/

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include "NoteToKeyWin.h"
//#include "NoteToKeyMac.h"


AudioInputI2S            i2s1;
AudioOutputI2S            i2s2;
AudioAnalyzeNoteFrequency notefreq;
// The connections may need to be redone if you have stereo
AudioConnection          patchCord1(i2s1, 0, notefreq, 0);
AudioConnection          patchCord2(i2s1, 0, i2s2, 0);
AudioConnection          patchCord3(i2s1, 0, i2s2, 1);
AudioControlSGTL5000     audioShield;

// Set your input system
const int myInput = AUDIO_INPUT_LINEIN;
// const int myInput = AUDIO_INPUT_MIC;

int led = 13;

//Set up some tolerance for how out of tune you can be:

//float noteToleranceLow = 0.95;  //This creates overlap between notes.
//float noteToleranceHigh = 1.05; //This creates overlap between notes.
float noteToleranceLow = 0.98;
float noteToleranceHigh = 1.02;
//float noteToleranceLow = 0.99;
//float noteToleranceHigh = 1.01;

// Use two-dimensional thinking by making the low string(s) choose between maps
int inputMap = 3; // The G (and C, if available) string determines what the other notes do
float notesBuffer[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int notesBufferIndex = 0;
int notesBufferSize = sizeof(notesBuffer) / sizeof(int);
float notesTotal = 0.0;
float note;

void setup() {
  notefreq.begin(.15);
  AudioMemory(30);
  audioShield.enable();
  audioShield.inputSelect(myInput);
  audioShield.volume(0.5);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // read back fundamental frequency
  if (notefreq.available()) {
    int noteSample = notefreq.read();
    float prob = notefreq.probability();

    if (noteSample > 75) {
      // Get a good sample to smooth out the actual note being played
      if (notesBuffer[0] == 0) {
        notesBuffer[0] = noteSample;
        notesTotal += noteSample;
        notesBufferIndex++;
      } else if ((notesBufferIndex < notesBufferSize) && ((notesBuffer[notesBufferIndex - 1] * 0.8) < noteSample) && (noteSample < (notesBuffer[notesBufferIndex - 1] * 1.2))) {
        notesBuffer[notesBufferIndex] = noteSample;
        notesTotal += noteSample;
        notesBufferIndex++;
      } else if (notesBufferIndex == notesBufferSize) {
        note = notesTotal / notesBufferSize;
        inputMap = note_to_key(note, noteToleranceLow, noteToleranceHigh, inputMap);
        notesTotal = 0.0;
        notesBufferIndex = 0;
        for (int i = 0; i < 5; i++) {
          notesBuffer[i] = 0;
        }
      } else {
        digitalWrite(led, HIGH);
        delay(500);
        digitalWrite(led, LOW);
        delay(500);
        notesTotal = 0.0;
        notesBufferIndex = 0;
        for (int i = 0; i < 5; i++) {
          notesBuffer[i] = 0;
        }
      }

      delay(50);

      /*
            // Blinks gratia blinkis
            digitalWrite(led, HIGH);
            delay(50);
            digitalWrite(led, LOW);
            delay(50);
            digitalWrite(led, HIGH);
            delay(50);
            digitalWrite(led, LOW);
            delay(50);
            digitalWrite(led, HIGH);
            delay(50);
            digitalWrite(led, LOW);
            delay(50);
      */
    }

  }

}
