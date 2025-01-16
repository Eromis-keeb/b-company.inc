// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

#define SFT_0 LSFT(JP_0)
#define FN_KANA LALT(JP_KANA)
#define FN_TEN LSFT(JP_LABK)
#define FN_MARU LSFT(JP_RABK)

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
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        JP_0,         JP_O,         JP_7,      JP_J,       JP_F,      JP_U,      JP_Q,      JP_X,          JP_T,            JP_3,    FN_KANA,     JP_ZKHK,
                      JP_L,                    JP_N,       JP_V,      JP_I,      JP_A,      JP_D,          JP_G,            JP_E,
        SFT_0,        JP_RABK,      JP_8,      JP_RBRC,    JP_2,      JP_1,      JP_Z,      JP_R,          JP_H,            JP_4,     KC_ESC,
                      JP_SCLN,                 JP_SLSH,    JP_CIRC,   JP_LABK,   JP_W,      JP_P,          JP_COLN,         JP_5,                       KC_ENTER,
        JP_Y,         JP_UNDS,      JP_9,      JP_M,       JP_MINS,   JP_K,      JP_S,      JP_C,          JP_B,            JP_6,     KC_BSPC,
        KC_LSFT,                                           JP_QUES,   JP_BSLS,              FN_TEN,        FN_MARU,         KC_UP,
        JP_AT,                      JP_LBRC,               KC_F7,     KC_SPACE,             KC_LEFT,       KC_DOWN,         KC_RIGHT
    )
};
