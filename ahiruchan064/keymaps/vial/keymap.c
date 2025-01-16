// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

#define SFT_0 LSFT(JP_0)
#define FN_KANA LALT(JP_KANA)
#define FN_TEN LSFT(JP_LABK)
#define FN_MARU LSFT(JP_RABK)
#define EN_AT LT(_en_SYB, JP_AT)
#define FN_BRC LT(_NUM_KEYPAD, JP_LBRC)
#define NUM_PAD LSFT_T(KC_INT3)
#define FN_QUES LSFT(JP_SLSH)
#define FN_IKO LSFT(KC_MINUS)
#define LN_1 MO(1)



#define FN_LTU LSFT(JP_Z)
#define FN_LYU LSFT(JP_8)
#define FN_LYO LSFT(JP_9)
#define FN_LA  LSFT(JP_3)
#define FN_LI  LSFT(JP_E)
#define FN_LU  LSFT(JP_4)
#define FN_LE  LSFT(JP_5)
#define FN_LO  LSFT(JP_6)




enum layer_number {
    _kana = 0,
    _FN,
    _en_SYB,
    _NUM_KEYPAD
};


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
    [_kana] = LAYOUT(
        JP_0,         JP_O,         JP_7,      JP_J,       JP_F,      JP_U,      JP_Q,      JP_X,          JP_T,            JP_3,    FN_KANA,     JP_ZKHK,
                      JP_L,                    JP_N,       JP_V,      JP_I,      JP_A,      JP_D,          JP_G,            JP_E,
        SFT_0,        KC_DOT,       JP_8,      JP_RBRC,    JP_2,      JP_1,      JP_Z,      JP_R,          JP_H,            JP_4,     KC_ESC,
                      JP_SCLN,                 KC_SLASH,   JP_CIRC,   KC_COMMA,  JP_W,      JP_P,          JP_COLN,         JP_5,                  KC_ENTER,
        JP_Y,         JP_UNDS,      JP_9,      JP_M,       JP_MINS,   JP_K,      JP_S,      JP_C,          JP_B,            JP_6,     KC_BSPC,
        OSL(1),                                            KC_LBRC,   KC_RBRC,              FN_TEN,        FN_MARU,         KC_UP,
        TG(2),                 TG(3),            NUM_PAD,   KC_SPACE,             KC_LEFT,       KC_DOWN,         KC_RIGHT

        ),

     [_FN] = LAYOUT(
        JP_0,         JP_O,         JP_7,      JP_J,       JP_F,      JP_U,      JP_Q,      JP_X,          JP_T,            FN_LA,   KC_CAPS_LOCK,     KC_NO,
                      JP_L,                    JP_N,       JP_V,      JP_I,      JP_A,      JP_D,          JP_G,            FN_LI,
        SFT_0,        KC_DOT,       FN_LYU,    JP_RBRC,    JP_2,      JP_1,      FN_LTU,    JP_R,          JP_H,            FN_LU,    KC_ESC,
                      JP_SCLN,                 KC_SLASH,   JP_CIRC,   KC_COMMA,  JP_W,      JP_P,          JP_COLN,         FN_LE,                     KC_ENTER,
        JP_Y,         JP_UNDS,      FN_LYO,    JP_M,       JP_MINS,   JP_K,      JP_S,      JP_C,          JP_B,            FN_LO,    KC_BSPC,
        OSL(1),                                            KC_LBRC,   KC_RBRC,             FN_TEN,        FN_MARU,         KC_UP,
        KC_NO,                     KC_NO,                  KC_NO,     KC_SPACE,            KC_LEFT,       KC_DOWN,         KC_RIGHT

        ),

     [_en_SYB] = LAYOUT(
        KC_AT,        KC_EXLM,      KC_HASH,   KC_A,       KC_B,      KC_C,      KC_D,      KC_E,          KC_F,            KC_G,    KC_NO,       KC_NO,
                      KC_AMPR,                 KC_H,       KC_I,      KC_J,      KC_K,      KC_L,          KC_M,            KC_N,
        KC_PLUS,      KC_MINS,      KC_ASTR,   KC_O,       KC_P,      KC_Q,      KC_R,      KC_S,          KC_T,            KC_U,     KC_ESC,
                      KC_SLSH,                 KC_V,       KC_W,      KC_X,      KC_Y,      KC_Z,          KC_COLN,         KC_SCLN,              KC_ENTER,
        KC_PERC,      KC_DLR,       KC_TILD,   KC_AT,      KC_EXLM,   KC_HASH,   KC_AMPR,   KC_PERC,       JP_YEN,          KC_SLASH, KC_BSPC,
        OSL(1),                                            KC_LBRC,   KC_RBRC,              KC_COMM,       KC_DOT,          KC_UP,
        TG(2),                      KC_NO,                 KC_NO,     KC_SPACE,             KC_LEFT,       KC_DOWN,         KC_RIGHT

    ),

     [_NUM_KEYPAD] = LAYOUT(
        JP_1,         JP_2,         JP_3,      KC_4,              KC_5,      KC_6,      KC_7,      KC_8,          KC_9,            KC_0,    KC_NO,       KC_NO,
                      JP_0,                    KC_KP_PLUS,        JP_V,      JP_I,      JP_A,      JP_D,          JP_G,            JP_E,
        JP_4,         JP_5,         JP_6,      KC_KP_MINUS,       JP_2,      JP_1,      JP_Z,      JP_R,          JP_H,            JP_4,     KC_ESC,
                      KC_DOT,                  KC_KP_ASTERISK,   JP_CIRC,   JP_LABK,   JP_W,      JP_P,          JP_COLN,         JP_5,                  KC_ENTER,
        JP_7,         JP_8,         JP_9,      KC_KP_SLASH,       KC_COMMA,  FN_IKO,    JP_S,      JP_C,          JP_B,            JP_6,     KC_BSPC,
        OSL(1),                                                   KC_LBRC,   KC_RBRC,             FN_TEN,        FN_MARU,         KC_UP,
        KC_NO,                      TG(3),                        KC_NO,     KC_SPACE,            KC_LEFT,       KC_DOWN,         KC_RIGHT
    )

};



// グローバル変数を宣言し、Kanaの状態を保持
bool is_kana_on = false;

// RGBライティングの状態を更新する関数
void update_kana_led(void) {
    if (is_kana_on){
        rgblight_sethsv_at(HSV_GREEN, 0); //緑色
    } else {
    rgblight_sethsv_at(HSV_RED, 0); //赤色
    }
}

// カスタムキーコードを定義
enum custom_keycodes {
    KANA = SAFE_RANGE,
    MY_OSL,
    TG_LAYER_2,
    TG_LAYER_3,
};

// プロセスキーコード関数を統合
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    if (record->event.pressed) {
        switch (keycode) {
                case FN_KANA:


                        is_kana_on = !is_kana_on;

                         register_code(KC_LALT); //\ LALTキーを押下
                         tap_code(JP_KANA); //\ JP_KANAキーをタップ
                         unregister_code(KC_LALT); //\ LALTキーをリリース

                        update_kana_led(); // LEDの色を更新
                        return false;

                case JP_ZKHK:


                        is_kana_on = !is_kana_on;

                         tap_code(JP_ZKHK); //\ JP_KANAキーをタップ

                        update_kana_led(); // LEDの色を更新
                        return false;

                case KC_CAPS_LOCK:

                        is_kana_on = !is_kana_on;

                        update_kana_led(); // LEDの色を更新
                        return false;

                case MY_OSL:
                     if (record->event.pressed) {
                        layer_on(1);
                        rgblight_sethsv_at(HSV_YELLOW, 0); //黄色
                    } else {
                        layer_off(1);
                   }
                     return false;


                case TG(2):
                case TG(3):
                    tap_code(JP_ZKHK);  // 半角全角キーを送信
                    return false;

            default:
                 return true; // 他のキーコードは通常通り処理
                }
            }
        return true;
}


/* void housekeeping_task_user(void){ */

/* if (is_kana_on = is_kana_on) { */

/* is_kana_on = !is_kana_on; */
/* update_kana_led(); */
/* } */
/* } */




const rgblight_segment_t PROGMEM rgb_default_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        /* {0, 1, HSV_RED}, */
        {1, 1, HSV_BLUE}
        );

const rgblight_segment_t PROGMEM rgb_lower_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, 1, HSV_YELLOW},
        {1, 1, HSV_YELLOW},
        {2, 3, HSV_YELLOW}
        );

const rgblight_segment_t PROGMEM rgb_raise_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, 1, HSV_PURPLE},
        {1, 1, HSV_PURPLE},
        {2, 3, HSV_PURPLE}
        );

const rgblight_segment_t PROGMEM rgb_pad_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, 1, HSV_SPRINGGREEN},
        {1, 1, HSV_SPRINGGREEN},
        {2, 3, HSV_SPRINGGREEN}
        );


const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
        rgb_default_layer,
        rgb_lower_layer,
        rgb_raise_layer,
        rgb_pad_layer
        );

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0,layer_state_cmp(state, _kana));
    rgblight_set_layer_state(1,layer_state_cmp(state, _FN));
    rgblight_set_layer_state(2,layer_state_cmp(state, _en_SYB));
    rgblight_set_layer_state(3,layer_state_cmp(state, _NUM_KEYPAD));
    return state;
}

void keyboard_post_init_user(void) {

    rgblight_layers = rgb_layers;
    rgblight_enable();
    update_kana_led();
}


