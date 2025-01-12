// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    _default = 0,
    _lower,
    _raise,
    _upper,
    _df_m,
    _lower_m,
    _raise_m,
    _upper_m  
	    
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
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
        KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
        KC_ESC,   OSL(1),   KC_MUTE,            TG(7),
        KC_NO,    KC_NO,    KC_NO
    ),
    [_lower] = LAYOUT(
        KC_1,         KC_2,     KC_3,     KC_4,     KC_5,
        KC_6,         KC_7,     KC_8,     KC_9,     KC_0,
        S(KC_TAB),    KC_TAB,   KC_ESC,             TG(7),
        KC_NO,        KC_NO,    KC_NO
   ),
    [_raise] = LAYOUT(
        KC_LCTL,  KC_SPC,   KC_LALT,   KC_ENT,      KC_BSPC,
        KC_LSFT,  KC_F11,   KC_F12,    S(KC_TAB),   KC_TAB,
        KC_BTN3,  KC_BTN3,  KC_ESC,                 TG(7),
        KC_NO,    KC_NO,    KC_NO
   ),
    [_upper] = LAYOUT(
	KC_LCTL,    KC_SPC,   KC_LALT,   KC_ENT,      KC_BSPC,
        KC_LSFT,    KC_F11,   KC_F12,    S(KC_TAB),   KC_TAB,
        LSG(KC_4),  KC_DEL,   KC_ESC,                 TG(7),
        KC_NO,      KC_NO,    KC_NO

     ),

    [_df_m] = LAYOUT(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,              KC_NO,
        KC_NO,    KC_NO,    KC_NO
    ),
    
    [_lower_m] = LAYOUT(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,              KC_NO,
        KC_NO,    KC_NO,    KC_NO
    ),

    [_raise_m] = LAYOUT(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,              KC_NO,
        KC_NO,    KC_NO,    KC_NO
    ),

    [_upper_m] = LAYOUT(
        KC_ESC,          KC_2,       KC_BTN1,  KC_BTN2,  KC_BTN3,
        G(KC_LEFT),   KC_BTN1,    KC_BTN2,  KC_BTN3,  G(KC_RIGHT),
        KC_PGUP,         KC_PGDN,    C(KC_0),            KC_TRNS,
        KC_NO,           KC_NO,      KC_NO
    )


};


#if defined(ENCODER_MAP_ENABLE)

 const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
     [0] = {ENCODER_CCW_CW(RCS(KC_TAB), LCTL(KC_TAB)),  ENCODER_CCW_CW(KC_WH_U, KC_WH_D),                      ENCODER_CCW_CW(KC_VOLD, KC_VOLU),				ENCODER_CCW_CW(TO(3), TO(1))},
     [1] = {ENCODER_CCW_CW(KC_LEFT, KC_RGHT),           ENCODER_CCW_CW(KC_UP, KC_DOWN),                        ENCODER_CCW_CW(KC_WH_U, KC_WH_D),   	        		ENCODER_CCW_CW(TO(0), TO(2))},
     [2] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D),	        		ENCODER_CCW_CW(TO(1), TO(3))},
     [3] = {ENCODER_CCW_CW(RCS(KC_TAB), LCTL(KC_TAB)),  ENCODER_CCW_CW(KC_WH_U, KC_WH_D),                      ENCODER_CCW_CW(KC_VOLD, KC_VOLU),	        		ENCODER_CCW_CW(TO(2), TO(0))},
     [4] = {ENCODER_CCW_CW(RCS(KC_TAB), LCTL(KC_TAB)),  ENCODER_CCW_CW(KC_UP, KC_DOWN),                        ENCODER_CCW_CW(KC_WH_U, KC_WH_D),	        		ENCODER_CCW_CW(TO(3), TO(5))},
     [5] = {ENCODER_CCW_CW(KC_LEFT, KC_RGHT),           ENCODER_CCW_CW(SGUI(KC_3), SGUI(KC_4)),                ENCODER_CCW_CW(KC_WH_U, KC_WH_D),	        		ENCODER_CCW_CW(TO(4), TO(6))},
     [6] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D),	                        ENCODER_CCW_CW(TO(5), TO(0))},
     [7] = {ENCODER_CCW_CW(KC_WH_L, KC_WH_R),           ENCODER_CCW_CW(KC_WH_U, KC_WH_D),                      ENCODER_CCW_CW(LCTL(KC_KP_MINUS), LCTL(KC_KP_EQUAL)),	        ENCODER_CCW_CW(TO(7), TO(7))}



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
	    for (int i = 12; i <= 14; i++) {
		    rgb_matrix_set_color(i,RGB_GREEN);
	    }
            /* rgb_matrix_set_color(8,RGB_GREEN); */
            /* rgb_matrix_set_color(9,RGB_GREEN); */
            break;

       case _raise:
            /* rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR); */
            for (int i = 12; i <= 14; i++) {
		    rgb_matrix_set_color(i,RGB_BLUE);
	    }
	    /* rgb_matrix_set_color(8,RGB_BLUE); */
	    /* rgb_matrix_set_color(9,RGB_BLUE); */
            break;

       case _upper:
            /* rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING); */
	    /* rgb_matrix_set_color_all(RGB_YELLOW); */
	    for (int i = 12; i <= 14; i++) {
		    rgb_matrix_set_color(i,RGB_YELLOW);
	    }

	    /* rgb_matrix_set_color(8,RGB_YELLOW); */
	    /* rgb_matrix_set_color(9,RGB_YELLOW); */
            break;

       case _df_m:
            /* rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING); */
	    /* rgb_matrix_set_color_all(RGB_YELLOW); */
	    for (int i = 12; i <= 14; i++) {
		    rgb_matrix_set_color(i,RGB_PURPLE);
	    }

	    /* rgb_matrix_set_color(8,RGB_YELLOW); */
	    /* rgb_matrix_set_color(9,RGB_YELLOW); */
            break;

 
       case _lower_m:
            /* rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING); */
	    /* rgb_matrix_set_color_all(RGB_YELLOW); */
	    for (int i = 12; i <= 14; i++) {
		    rgb_matrix_set_color(i,RGB_ORANGE);
	    }

	    /* rgb_matrix_set_color(8,RGB_YELLOW); */
	    /* rgb_matrix_set_color(9,RGB_YELLOW); */
            break;

 
       case _raise_m:
            /* rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING); */
	    /* rgb_matrix_set_color_all(RGB_YELLOW); */
	    for (int i = 12; i <= 14; i++) {
		    rgb_matrix_set_color(i,RGB_AZURE);
	    }

	    /* rgb_matrix_set_color(8,RGB_YELLOW); */
	    /* rgb_matrix_set_color(9,RGB_YELLOW); */
            break;
 
       case _upper_m:
            /* rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING); */
	    /* rgb_matrix_set_color_all(RGB_YELLOW); */
	    for (int i = 12; i <= 14; i++) {
		    rgb_matrix_set_color(i,RGB_CORAL);
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
		case _upper_m:
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






