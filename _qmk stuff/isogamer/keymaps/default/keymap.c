#include QMK_KEYBOARD_H

enum layers{
  _BASE,
  _NUM, 
  _FN
};

#define NUM MO(_NUM)
#define FN MO(_FN)
#define xxxx KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_default(
    KC_GESC,        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,         KC_BSPC,
    LSFT_T(KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN,      RSFT_T(KC_ENT),
                    KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, 
    KC_LCTL, FN, KC_LALT,           LT(_NUM, KC_SPC),            KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_NUM] = LAYOUT_default(
    KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     xxxx,
    xxxx,     KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_EQUAL, KC_QUOT,
              KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_HOME, KC_END,  xxxx,    KC_PIPE, KC_BSLS, KC_SLSH,
    xxxx, xxxx, xxxx,                           xxxx,                                 xxxx,    xxxx,     xxxx
  ),

  [_FN] = LAYOUT_default(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
    xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx,
    xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx,
    xxxx, xxxx, xxxx, xxxx, xxxx, xxxx, xxxx
   ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}
