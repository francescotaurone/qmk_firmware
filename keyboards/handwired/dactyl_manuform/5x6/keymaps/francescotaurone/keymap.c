#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif
#define MASTER_LEFT
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_5x6(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, 
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS, 
    KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, 
    KC_BSLS, KC_LBRC, KC_RBRC, KC_PLUS, KC_EQL, 
    MO(2), KC_SPC, KC_ENT, MO(1), 
    KC_TAB, KC_HOME, KC_END, KC_DEL, 
    KC_BSPC, KC_GRV, KC_LGUI, KC_LALT
    ),
    [1] = LAYOUT_5x6(KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_PLUS, KC_TRNS, KC_TRNS, KC_PGUP, KC_PGDN, KC_END, KC_LPRN, KC_RPRN, KC_P4, KC_P5, KC_P6, KC_MINS, KC_PIPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_EQL, KC_UNDS, KC_TRNS, KC_PSCR, KC_TRNS, KC_P0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [2] = LAYOUT_5x6(
    KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, 
    KC_TRNS, KC_TRNS, KC_UP, KC_NUBS, KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_NUM, KC_INS, KC_SCRL, KC_MUTE, 
    KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_LPRN, KC_RPRN, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_TRNS, KC_TRNS, KC_EQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




