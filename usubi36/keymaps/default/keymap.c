// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_BSPC,
            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_MINS,    KC_ENT, 
            KC_LSFT,    KC_LCTL,    KC_LALT,       KC_SPC,        KC_LEFT,    KC_RGHT,    MO(1)
    ),

     [1] = LAYOUT(
        KC_ESC,  KC_LNG1,   KC_LNG2, KC_NO,   KC_F5,    KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_PSCR,
        KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,     KC_5,    KC_NO,    KC_EQL,  KC_COLN,  KC_DEL,
           KC_LSFT,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,    KC_SLSH,    KC_ENT,    
                MO(2),   KC_LGUI,   KC_LALT,      KC_SPC,        KC_COMM,    KC_DOT,    MO(1)
    ),

     [2] = LAYOUT(
        RGB_TOG,    RGB_MOD,    RGB_RMOD,    RGB_HUI,    RGB_HUD,    RGB_SAI,    RGB_SAD,    RGB_VAI,    RGB_VAD,    KC_J,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,
             KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    
                  KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G  
    ),

     [3] = LAYOUT(
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,
             KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    
                  KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G
    )
};

void keyboard_post_init_user(void) {
    rgblight_enable();  // EEPROMに保存する設定を有効化
    rgblight_mode(RGBLIGHT_MODE_RAINBOW_MOOD);  // EEPROMに保存された設定が無い場合のデフォルトモードを設定
}

