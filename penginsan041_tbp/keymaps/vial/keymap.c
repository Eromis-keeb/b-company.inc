// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    _default = 0,
    _lower,
    _raise,
    _upper
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
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [_default] = LAYOUT(
        KC_ESC,    KC_Q,             KC_W,             KC_E,       KC_R,      KC_T,          KC_Y,          KC_U,     KC_I,     KC_O,     KC_P,
        KC_LCTL,   KC_A,             KC_S,             KC_D,       KC_F,      KC_G,          KC_H,          KC_J,     KC_K,     KC_L,     KC_SCLN,
        KC_LSFT,   KC_Z,             KC_X,             KC_C,       KC_V,      KC_B,          KC_N,          KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,
        KC_BSPC,   LCTL_T(KC_LBRC),  LSFT_T(KC_RBRC),  KC_DEL,     KC_LALT,   LT(1,KC_SPC),  LT(2,KC_ENT),  KC_TAB,   KC_LGUI,  KC_MUTE
    ),
    [_lower] = LAYOUT(
        KC_ESC,    KC_1,             KC_2,             KC_3,       KC_4,       KC_5,         KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
        KC_LCTL,   LSFT(KC_6),       LSFT(KC_7),       LSFT(KC_8), LSFT(KC_9), LSFT(KC_0),   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_SCLN,
        KC_LSFT,   LSFT(KC_1),       LSFT(KC_2),       LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),   KC_BSLS,  KC_GRV,   KC_QUOT,  KC_DOT,   KC_SLSH,
        KC_BSPC,   KC_LBRC,          KC_RBRC,          KC_DEL,     KC_LALT,    KC_SPC,       KC_MINS,  KC_TAB,   KC_LGUI,  KC_ESC

    ),
    [_raise] = LAYOUT(
        KC_ESC,   KC_F1,      KC_F2,       KC_F3,     KC_F4,      KC_F5,        KC_F6,    KC_F7,    KC_F8,       KC_F9,    KC_F10,
        KC_LCTL,  LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),   KC_MINS,  KC_EQL,   LSFT(KC_8),  KC_SLSH,  KC_SCLN,
        KC_LSFT,  LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0),   KC_BSLS,  KC_GRV,   KC_QUOT,     KC_LBRC,  KC_RBRC,
        KC_F11,   KC_LBRC,    KC_RBRC,    KC_DEL,     KC_LALT,    KC_MINS,       KC_MINS,  MO(3),   KC_LGUI,     KC_F12
   ),
    [_upper] = LAYOUT(
        KC_ESC,    KC_Q,     KC_W,     KC_E,       KC_R,             KC_T,          KC_Y,         KC_U,         KC_I,          KC_O,       KC_P,
        KC_LCTL,   KC_A,     KC_S,     KC_D,       KC_F,             KC_G,          KC_H,         KC_J,         KC_K,          KC_L,       KC_SCLN,
        KC_LSFT,   KC_Z,     KC_X,     KC_C,       RGB_SPI,          RGB_SPD,       KC_N,         KC_M,         KC_COMM,       KC_DOT,     KC_SLSH,
        KC_BSPC,   KC_LBRC,  KC_RBRC,  KC_DEL,     KC_MS_BTN2,       KC_MS_BTN1,    KC_MS_BTN1,   KC_MS_BTN2,   KC_MS_BTN3,    RGB_TOG

   )


};


#if defined(ENCODER_MAP_ENABLE)

 const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
     [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
     [1] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
     [2] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
     [3] = {ENCODER_CCW_CW(RGB_RMOD, RGB_MOD)}

 };

#endif



void keyboard_post_init_user(void) {
	rgb_matrix_enable();
        /* rgb_matrix_mode(RGB_MATRIX_RAINBOW_MOVING_CHEVRON); */
}






bool rgb_matrix_indicators_user(void) {
    switch (get_highest_layer(layer_state)) {


       case _lower:
            /* rgb_matrix_mode(RGB_MATRIX_JELLYBEAN_RAINDROPS); */
	    for (int i = 2; i <= 6; i++) {
		    rgb_matrix_set_color(i,RGB_GREEN);
	    }
            /* rgb_matrix_set_color(8,RGB_GREEN); */
            /* rgb_matrix_set_color(9,RGB_GREEN); */
            break;
	    
       case _raise:
            /* rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR); */
            for (int i = 2; i <= 6; i++) {
		    rgb_matrix_set_color(i,RGB_BLUE);
	    }
	    /* rgb_matrix_set_color(8,RGB_BLUE); */
	    /* rgb_matrix_set_color(9,RGB_BLUE); */
            break;

       case _upper:
            /* rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING); */
	    /* rgb_matrix_set_color_all(RGB_YELLOW); */
	    for (int i = 2; i <= 6; i++) {
		    rgb_matrix_set_color(i,RGB_YELLOW);
	    }

	    /* rgb_matrix_set_color(8,RGB_YELLOW); */
	    /* rgb_matrix_set_color(9,RGB_YELLOW); */
            break;

       /* default: */
	    /* rgb_matrix_mode(RGB_MATRIX_RAINBOW_MOVING_CHEVRON); */
	    /* break; */

    }
    /* return false; */
    return false;
}












// AZ1UBALL
void pointing_device_init_kb(void) {
	uint8_t addr=0x14;
	//uint8_t data[]={0x90,0x00};
        uint8_t data[]={0x91, 0x00};
	uint16_t timeout=100;
	i2c_status_t status;
        status = i2c_transmit (addr, data, 2, timeout);
	if (status != 0) {
	    return;
	}
}

#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
layer_state_t layer_state_set_user(layer_state_t state) {

	switch(get_highest_layer(remove_auto_mouse_layer(state,true))) {
		case _upper:
			state = remove_auto_mouse_layer(state, false);
			set_auto_mouse_enable(false);
			break;
		default:
			set_auto_mouse_enable(true);
			break;
	}
	return state;
}
#endif






