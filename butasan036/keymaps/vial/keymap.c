#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
       KC_Q,          KC_W,      KC_E,        KC_R,           KC_T,          KC_Y,            KC_U,            KC_I,      KC_O,    KC_P,
       KC_A,          KC_S,      KC_D,        KC_F,           KC_G,          KC_H,            KC_J,            KC_K,      KC_L,    LCTL_T(KC_SCLN),
       LSFT_T(KC_Z),  KC_X,      KC_C,         KC_V,           KC_B,          KC_N,            KC_M,            KC_COMM,   KC_DOT,  LSFT_T(KC_SLSH),
                                 KC_ESC,      LALT_T(KC_ESC), LT(1,KC_SPC),  LT(2,KC_ENT),    LCTL_T(KC_TAB),  KC_LGUI,   KC_MUTE
    ),

    [1] = LAYOUT(
       KC_1,          KC_2,      KC_3,        KC_4,           KC_5,          KC_6,            KC_7,            KC_8,      KC_9,     KC_0,
       KC_CIRC,       KC_AMPR,   KC_ASTR,     KC_LPRN,        KC_RPRN,       KC_LEFT,         KC_DOWN,         KC_UP,     KC_RGHT,  KC_BSPC,
       KC_EXLM,       KC_AT,     KC_HASH,     KC_DLR,         KC_PERC,       KC_BSLS,         KC_GRV,          KC_QUOT,   KC_PGDN,  KC_PGUP,
                                 KC_ESC,      LALT_T(KC_ESC), LT(1,KC_SPC),  KC_MINS,         LCTL_T(KC_TAB),  KC_LGUI,   KC_MUTE
    ),

    [2] = LAYOUT(
       KC_F1,         KC_F2,     KC_F3,       KC_F4,          KC_F5,         KC_F6,           KC_F7,           KC_F8,     KC_F9,    KC_F10,
       KC_EXLM,       KC_AT,     KC_HASH,     KC_DLR,         KC_PERC,       KC_MINS,         KC_EQL,          KC_ASTR,   KC_SLSH,  KC_F11,
       KC_CIRC,       KC_AMPR,   KC_ASTR,     KC_LPRN,        KC_RPRN,       KC_BSLS,         KC_GRV,          KC_QUOT,   KC_LBRC,  KC_RBRC,
                                 KC_DEL,      LALT_T(KC_ESC), KC_MINS,       LT(2,KC_ENT),    LCTL_T(KC_TAB),  KC_LGUI,   KC_MUTE
    ),

    [3] = LAYOUT(
       KC_Q,          KC_W,    KC_E,           KC_R,           KC_T,          KC_Y,            KC_U,       KC_I,      KC_O,    KC_P,
       KC_A,          KC_S,    KC_D,           KC_F,           KC_G,          KC_H,            KC_J,      KC_K,      KC_L,    LCTL_T(KC_SCLN),
       LSFT_T(KC_Z),   KC_X,    KC_C,           KC_V,           KC_B,          KC_N,            KC_M,      KC_COMM,   KC_DOT,  LSFT_T(KC_SLSH),
                      KC_ESC,  LALT_T(KC_ESC), LT(1,KC_SPC),   LT(2,KC_ENT),  LCTL_T(KC_TAB),  KC_LGUI,   KC_MUTE
    )
    };

#if defined(ENCODER_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [2] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [3] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}
};
#endif
