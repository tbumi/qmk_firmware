// Copyright 2022 Trapsilo Bumi (@tbumi)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MPRV, KC_MNXT, KC_DEL,                            KC_MPLY,
      KC_GRV,  KC_1,    KC_2,    KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,       KC_BSPC,  KC_HOME,  KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
      KC_TAB,  KC_Q,    KC_W,    KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,      KC_ENT,   KC_PGUP,  KC_P7,  KC_P8,   KC_P9,   KC_PPLS,
      KC_CAPS, KC_A,    KC_S,    KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,                KC_PGDN,  KC_P4,  KC_P5,   KC_P6,     
      KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH,               KC_RSFT,  KC_UP,   KC_END,   KC_P1,  KC_P2,   KC_P3,   KC_PENT,
      KC_LCTL, KC_LOPT, KC_LCMD,               KC_SPC,                            KC_RALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN,  KC_RGHT,  KC_P0,           KC_PDOT
  ),
    [_FN] = LAYOUT(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO,     
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO,        KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        KC_NO      
  )
};

// void st7565_task_user(void) {
//     // Host Keyboard Layer Status
//     st7565_write_P(PSTR("Layer: "), false);

//     switch (get_highest_layer(layer_state)) {
//         case _BASE:
//             st7565_write_P(PSTR("Default\n"), false);
//             break;
//         case _FN:
//             st7565_write_P(PSTR("FN\n"), false);
//             break;
//         default:
//             st7565_write_ln_P(PSTR("Undefined"), false);
//     }

//     // Host Keyboard LED Status
//     led_t led_state = host_keyboard_led_state();
//     st7565_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
//     st7565_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
//     st7565_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
// }

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (clockwise) {
    tap_code_delay(KC_VOLU, 10);
  } else {
    tap_code_delay(KC_VOLD, 10);
  }
  return false;
}

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   // If console is enabled, it will print the matrix position and status of each key pressed
// #ifdef CONSOLE_ENABLE
//     uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
// #endif 
//   return true;
// }
