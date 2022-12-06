/*
Copyright 2021 Salicylic_Acid

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_rotary_layer(
  //,--------------------------------------------------------------|             |--------------------------------------------------------------.
       KC_ESC,LT(1,KC_GRV),KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                  KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, \
  //|--------+--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
                KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, \
  //         |--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      KC_VOLU,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,  KC_ENT, \
  //         |--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_MUTE,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   KC_UP, KC_RSFT, \
  //         |--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
              KC_LCTRL, KC_LGUI,          KC_LALT,  KC_SPC,  KC_SPC,      KC_VOLD,  KC_SPC,  KC_SPC, KC_RALT,           KC_LEFT,KC_DOWN,KC_RIGHT  \
          //`-----------------------------------------------------------------------------------------------------------------------------------'
  ),
  [1] = LAYOUT_rotary_layer(
  //,--------------------------------------------------------------|             |--------------------------------------------------------------.
      _______,   MO(1),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                 KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, \
  //|--------+--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               _______, _______, _______, _______, _______, _______,               _______, _______, _______, _______, _______, _______, _______, \
  //         |--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______, _______, \
  //         |--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______, _______, \
  //         |--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               _______, _______,          _______, _______, _______,      _______, _______, _______, _______,          _______, _______, _______  \
          //`-----------------------------------------------------------------------------------------------------------------------------------'
  ),
  [2] = LAYOUT_rotary_layer(
  //,--------------------------------------------------------------|             |--------------------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //|--------+--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //         |--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //         |--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //         |--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX  \
          //`-----------------------------------------------------------------------------------------------------------------------------------'
  ),
  [3] = LAYOUT_rotary_layer(
  //,--------------------------------------------------------------|             |--------------------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //|--------+--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //         |--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //         |--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  //         |--------+--------+--------+--------+--------+--------|             |--------+--------+--------+--------+--------+--------+--------|
               XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX  \
          //`-----------------------------------------------------------------------------------------------------------------------------------'
  )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    keypos_t key;
    if (clockwise) {
        key.row = 1;
        key.col = 7;
    } else {
        key.row = 0;
        key.col = 7;
    }
    action_exec((keyevent_t){.key = key, .pressed = true, .time = (timer_read() | 1)});
    action_exec((keyevent_t){.key = key, .pressed = false, .time = (timer_read() | 1)});
    return true;
}
