// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,    KC_Q,     KC_W,     KC_E,     KC_R,      KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,
        KC_LCTL,    KC_A,     KC_S,     KC_D,     KC_F,      KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,
        KC_LSFT,   KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,
        KC_BSPC,   KC_LBRC,  KC_RBRC,  KC_DEL,   KC_LALT,   KC_SPC,   KC_ENT,   KC_TAB,   KC_LGUI,  KC_ESC
    )
};

#if defined(ENCODER_MAP_ENABLE)

 const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
     [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD),}

 };

#endif

