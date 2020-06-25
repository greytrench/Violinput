#ifndef _note_to_key_win_h
#define _note_to_key_win_h

int note_to_key(float note, float noteToleranceLow, float noteToleranceHigh, int inputMap) {
      // Set up which map to use
    if ((noteToleranceLow * 130.81) < note && note < (noteToleranceHigh * 130.81)) {
      inputMap = 8;
    } else if ((noteToleranceLow * 138.59) < note && note < (noteToleranceHigh * 138.59)) {
      inputMap = 9;
    } else if ((noteToleranceLow * 146.83) < note && note < (noteToleranceHigh * 146.83)) {
      inputMap = 10;
    } else if ((noteToleranceLow * 155.56) < note && note < (noteToleranceHigh * 155.56)) {
      inputMap = 11;
    } else if ((noteToleranceLow * 164.81) < note && note < (noteToleranceHigh * 164.81)) {
      inputMap = 12;
    } else if ((noteToleranceLow * 174.61) < note && note < (noteToleranceHigh * 174.61)) {
      inputMap = 13;
    } else if ((noteToleranceLow * 185) < note && note < (noteToleranceHigh * 185)) {
      inputMap = 14;
    } else if ((noteToleranceLow * 196) < note && note < (noteToleranceHigh * 196)) {
      inputMap = 1;
    } else if ((noteToleranceLow * 207.65) < note && note < (noteToleranceHigh * 207.65)) {
      inputMap = 2;
    } else if ((noteToleranceLow * 220) < note && note < (noteToleranceHigh * 220)) {
      inputMap = 3;
    } else if ((noteToleranceLow * 233.08) < note && note < (noteToleranceHigh * 233.08)) {
      inputMap = 4;
    } else if ((noteToleranceLow * 246.94) < note && note < (noteToleranceHigh * 246.94)) {
      inputMap = 5;
    } else if ((noteToleranceLow * 261.63) < note && note < (noteToleranceHigh * 261.63)) {
      inputMap = 6;
    } else if ((noteToleranceLow * 277.18) < note && note < (noteToleranceHigh * 277.18)) {
      inputMap = 7;
      // From here, we actually take actions based on which note and map are active
    } else if ((noteToleranceLow * 293.66) < note && note < (noteToleranceHigh * 293.66)) {
      switch (inputMap) {
        case 1:
          Keyboard.press(KEY_1);
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_MINUS);
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.press(KEY_N);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.press(KEY_LEFT_BRACE);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_D);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.press(KEY_TILDE);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          Keyboard.press(KEY_LEFT);
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.print(":-) ");
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_7);
          Keyboard.release(KEYPAD_7);
          Keyboard.press(KEYPAD_3);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_2);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_0);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_3);
          Keyboard.release(KEYPAD_3);
          Keyboard.press(KEYPAD_4);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_8);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_9);
          Keyboard.release(KEYPAD_9);
          Keyboard.press(KEYPAD_2);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 311.13) < note && note < (noteToleranceHigh * 311.13)) {
      switch (inputMap) {
        case 1:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_9);
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_EQUAL);
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.press(KEY_B);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.press(KEY_RIGHT_BRACE);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_P);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_TILDE);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.print(":-( ");
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_7);
          Keyboard.release(KEYPAD_7);
          Keyboard.press(KEYPAD_4);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_3);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_5);
          Keyboard.release(KEYPAD_5);
          Keyboard.press(KEYPAD_9);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_3);
          Keyboard.release(KEYPAD_3);
          Keyboard.press(KEYPAD_8);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_1);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_0);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 329.63) < note && note < (noteToleranceHigh * 329.63)) {
      switch (inputMap) {
        case 1:
          Keyboard.press(KEY_2);
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.press(KEY_EQUAL);
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.press(KEY_O);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_LEFT_BRACE);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_E);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.press(KEY_ENTER);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          Keyboard.press(KEY_RIGHT);
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.print(":-D ");
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_7);
          Keyboard.release(KEYPAD_7);
          Keyboard.press(KEYPAD_5);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_6);
          Keyboard.release(KEYPAD_6);
          Keyboard.press(KEYPAD_1);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_8);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_4);
          Keyboard.release(KEYPAD_4);
          Keyboard.press(KEYPAD_4);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_5);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_4);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 349.23) < note && note < (noteToleranceHigh * 349.23)) {
      switch (inputMap) {
        case 1:
          Keyboard.press(KEY_3);
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.press(KEY_SLASH);
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.press(KEY_W);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_RIGHT_BRACE);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_F);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_6);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.print(":*-( ");
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_7);
          Keyboard.release(KEYPAD_7);
          Keyboard.press(KEYPAD_6);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_6);
          Keyboard.release(KEYPAD_6);
          Keyboard.press(KEYPAD_2);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_3);
          Keyboard.release(KEYPAD_3);
          Keyboard.press(KEYPAD_5);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_5);
          Keyboard.release(KEYPAD_5);
          Keyboard.press(KEYPAD_1);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_3);
          Keyboard.release(KEYPAD_3);
          Keyboard.press(KEYPAD_3);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_0);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 369.99) < note && note < (noteToleranceHigh * 369.99)) {
      switch (inputMap) {
        case 1:
          Keyboard.press(KEY_4);
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.press(KEY_BACKSLASH);
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.press(KEY_I);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_COMMA);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_A);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_7);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          Keyboard.press(KEY_UP);
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.print(">:-( ");
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_7);
          Keyboard.release(KEYPAD_7);
          Keyboard.press(KEYPAD_7);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_6);
          Keyboard.release(KEYPAD_6);
          Keyboard.press(KEYPAD_3);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_3);
          Keyboard.release(KEYPAD_3);
          Keyboard.press(KEYPAD_9);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_9);
          Keyboard.release(KEYPAD_9);
          Keyboard.press(KEYPAD_5);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_3);
          Keyboard.release(KEYPAD_3);
          Keyboard.press(KEYPAD_7);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_7);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 392) < note && note < (noteToleranceHigh * 392)) {
      switch (inputMap) {
        case 1:
          Keyboard.press(KEY_5);
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_QUOTE);
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.press(KEY_G);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_PERIOD);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_R);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.press(KEY_BACKSPACE);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          Keyboard.press(KEY_DOWN);
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.print(";-) ");
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_7);
          Keyboard.release(KEYPAD_7);
          Keyboard.press(KEYPAD_8);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_6);
          Keyboard.release(KEYPAD_6);
          Keyboard.press(KEYPAD_4);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_4);
          Keyboard.release(KEYPAD_4);
          Keyboard.press(KEYPAD_6);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_9);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_4);
          Keyboard.release(KEYPAD_4);
          Keyboard.press(KEYPAD_3);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_4);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 415.3) < note && note < (noteToleranceHigh * 415.3)) {
      switch (inputMap) {
        case 1:
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.press(KEY_QUOTE);
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.press(KEY_Z);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_BACKSLASH);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_J);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_3);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          Keyboard.println("Typed on my violin!");
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.print(":-P ");
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_7);
          Keyboard.release(KEYPAD_7);
          Keyboard.press(KEYPAD_9);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_6);
          Keyboard.release(KEYPAD_6);
          Keyboard.press(KEYPAD_5);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_5);
          Keyboard.release(KEYPAD_5);
          Keyboard.press(KEYPAD_2);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_3);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_5);
          Keyboard.release(KEYPAD_5);
          Keyboard.press(KEYPAD_0);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_3);
          Keyboard.release(KEYPAD_3);
          Keyboard.press(KEYPAD_2);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 440.0) < note && note < (noteToleranceHigh * 440.0)) {
      switch (inputMap) {
        case 1:
          Keyboard.press(KEY_6);
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.press(MODIFIERKEY_CTRL);
          break;
        case 3:
          Keyboard.press(KEY_T);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_SEMICOLON);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_S);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_2);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.print("X-D ");
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_8);
          Keyboard.release(KEYPAD_8);
          Keyboard.press(KEYPAD_0);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_6);
          Keyboard.release(KEYPAD_6);
          Keyboard.press(KEYPAD_6);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_5);
          Keyboard.release(KEYPAD_5);
          Keyboard.press(KEYPAD_5);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_7);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_5);
          Keyboard.release(KEYPAD_5);
          Keyboard.press(KEYPAD_3);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_3);
          Keyboard.release(KEYPAD_3);
          Keyboard.press(KEYPAD_6);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 466.16) < note && note < (noteToleranceHigh * 466.16)) {
      switch (inputMap) {
        case 1:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_0);
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.press(MODIFIERKEY_ALT);
          break;
        case 3:
          Keyboard.press(KEY_K);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.press(KEY_SEMICOLON);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_V);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_4);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_3);
          Keyboard.release(KEYPAD_3);
          Keyboard.press(KEYPAD_4);
          Keyboard.releaseAll();
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_8);
          Keyboard.release(KEYPAD_8);
          Keyboard.press(KEYPAD_1);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_6);
          Keyboard.release(KEYPAD_6);
          Keyboard.press(KEYPAD_7);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_6);
          Keyboard.release(KEYPAD_6);
          Keyboard.press(KEYPAD_8);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_4);
          Keyboard.release(KEYPAD_4);
          Keyboard.press(KEYPAD_1);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_9);
          Keyboard.release(KEYPAD_9);
          Keyboard.press(KEYPAD_4);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_4);
          Keyboard.release(KEYPAD_4);
          Keyboard.press(KEYPAD_2);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 493.88) < note && note < (noteToleranceHigh * 493.88)) {
      switch (inputMap) {
        case 1:
          Keyboard.press(KEY_7);
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.press(KEY_U);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.press(KEY_COMMA);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_L);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.press(KEY_TAB);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_3);
          Keyboard.release(KEYPAD_3);
          Keyboard.press(KEYPAD_5);
          Keyboard.releaseAll();
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_8);
          Keyboard.release(KEYPAD_8);
          Keyboard.press(KEYPAD_2);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_9);
          Keyboard.release(KEYPAD_9);
          Keyboard.press(KEYPAD_9);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_9);
          Keyboard.release(KEYPAD_9);
          Keyboard.press(KEYPAD_8);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_4);
          Keyboard.release(KEYPAD_4);
          Keyboard.press(KEYPAD_5);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_4);
          Keyboard.release(KEYPAD_4);
          Keyboard.press(KEYPAD_9);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 523.25) < note && note < (noteToleranceHigh * 523.25)) {
      switch (inputMap) {
        case 1:
          Keyboard.press(KEY_8);
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.press(KEY_HOME);
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.press(KEY_C);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_1);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_M);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_1);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_3);
          Keyboard.release(KEYPAD_3);
          Keyboard.press(KEYPAD_1);
          Keyboard.releaseAll();
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_8);
          Keyboard.release(KEYPAD_8);
          Keyboard.press(KEYPAD_3);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_6);
          Keyboard.release(KEYPAD_6);
          Keyboard.press(KEYPAD_9);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_9);
          Keyboard.release(KEYPAD_9);
          Keyboard.press(KEYPAD_9);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_9);
          Keyboard.release(KEYPAD_9);
          Keyboard.press(KEYPAD_6);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_6);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_9);
          Keyboard.release(KEYPAD_9);
          Keyboard.press(KEYPAD_3);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 554.37) < note && note < (noteToleranceHigh * 554.37)) {
      switch (inputMap) {
        case 1:
          Keyboard.press(KEY_9);
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.press(KEY_END);
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.press(KEY_Q);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.press(KEY_MINUS);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_X);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_5);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_3);
          Keyboard.release(KEYPAD_3);
          Keyboard.press(KEYPAD_8);
          Keyboard.releaseAll();
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_8);
          Keyboard.release(KEYPAD_8);
          Keyboard.press(KEYPAD_4);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_7);
          Keyboard.release(KEYPAD_7);
          Keyboard.press(KEYPAD_0);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_8);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_3);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_2);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 587.33) < note && note < (noteToleranceHigh * 587.33)) {
      switch (inputMap) {
        case 1:
          Keyboard.press(KEY_0);
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.press(KEY_ESC);
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.press(KEY_H);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_SLASH);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_Y);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_SLASH);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_5);
          Keyboard.release(KEYPAD_5);
          Keyboard.press(KEYPAD_4);
          Keyboard.releaseAll();
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_8);
          Keyboard.release(KEYPAD_8);
          Keyboard.press(KEYPAD_5);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_7);
          Keyboard.release(KEYPAD_7);
          Keyboard.press(KEYPAD_1);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_5);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_7);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_9);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_5);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 622.25) < note && note < (noteToleranceHigh * 622.25)) {
      switch (inputMap) {
        case 1:
          Keyboard.press(MODIFIERKEY_SHIFT);
          break;
        case 2:
          Keyboard.press(MODIFIERKEY_SHIFT);
          break;
        case 3:
          Keyboard.press(KEY_SPACE);
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.press(KEY_PERIOD);
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.press(KEY_PERIOD);
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_SHIFT);
          Keyboard.press(KEY_8);
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_4);
          Keyboard.release(KEYPAD_4);
          Keyboard.press(KEYPAD_2);
          Keyboard.releaseAll();
          break;
        case 9:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_8);
          Keyboard.release(KEYPAD_8);
          Keyboard.press(KEYPAD_6);
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_7);
          Keyboard.release(KEYPAD_7);
          Keyboard.press(KEYPAD_2);
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_6);
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_4);
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_6);
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          Keyboard.press(MODIFIERKEY_ALT);
          Keyboard.press(KEYPAD_0);
          Keyboard.release(KEYPAD_0);
          Keyboard.press(KEYPAD_2);
          Keyboard.release(KEYPAD_2);
          Keyboard.press(KEYPAD_1);
          Keyboard.release(KEYPAD_1);
          Keyboard.press(KEYPAD_1);
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 659.25) < note && note < (noteToleranceHigh * 659.25)) {
      Mouse.move(-10, 0); //All maps use the E string for the mouse
    } else if ((noteToleranceLow * 698.46) < note && note < (noteToleranceHigh * 698.46)) {
      Mouse.move(10, 0);
    } else if ((noteToleranceLow * 739.99) < note && note < (noteToleranceHigh * 739.99)) {
      Mouse.move(0, -10);
    } else if ((noteToleranceLow * 783.99) < note && note < (noteToleranceHigh * 783.99)) {
      Mouse.move(0, 10);
    } else if ((noteToleranceLow * 830.61) < note && note < (noteToleranceHigh * 830.61)) {
      Mouse.click();
    } else if ((noteToleranceLow * 880) < note && note < (noteToleranceHigh * 880)) {
      switch (inputMap) {
        case 1:
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          break;
        case 9:
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 932.33) < note && note < (noteToleranceHigh * 932.33)) {
      switch (inputMap) {
        case 1:
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          break;
        case 9:
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 987.77) < note && note < (noteToleranceHigh * 987.77)) {
      switch (inputMap) {
        case 1:
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          break;
        case 9:
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          break;
      }
    } else if ((noteToleranceLow * 1046.5) < note && note < (noteToleranceHigh * 1046.5)) {
      switch (inputMap) {
        case 1:
          Keyboard.releaseAll();
          break;
        case 2:
          Keyboard.releaseAll();
          break;
        case 3:
          Keyboard.releaseAll();
          break;
        case 4:
          Keyboard.releaseAll();
          break;
        case 5:
          Keyboard.releaseAll();
          break;
        case 6:
          Keyboard.releaseAll();
          break;
        case 7:
          Keyboard.releaseAll();
          break;
        case 8:
          Keyboard.releaseAll();
          break;
        case 9:
          Keyboard.releaseAll();
          break;
        case 10:
          Keyboard.releaseAll();
          break;
        case 11:
          Keyboard.releaseAll();
          break;
        case 12:
          Keyboard.releaseAll();
          break;
        case 13:
          Keyboard.releaseAll();
          break;
        case 14:
          Keyboard.releaseAll();
          break;
      }
    }
    return inputMap;

}

#endif
