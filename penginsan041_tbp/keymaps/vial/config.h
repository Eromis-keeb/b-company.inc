// Copyright 2024 eromis (@kumasan555)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* #define MATRIX_ROWS 4 */
/* #define MATRIX_COLS 12 */

#define VIAL_KEYBOARD_UID {0xE1, 0x16, 0xB8, 0xB7, 0x8A, 0x96, 0xAF, 0x16}
#define VIAL_UNLOCK_COMBO_ROWS {0,0}
#define VIAL_UNLOCK_COMBO_COLS {0,1}

#define RGB_MATRIX_LED_COUNT 10




/* RGB Light setting */
/* #define RGBLIGHT_EFFECT_BREAHING */
/* #define RGBLIGHT_EFFECT_ALTERNATING */
/* #define RGBLIGHT_EFFECT_RAINBOW_MOOD */
/* #define RGBLIGHT_EFFECT_RAINBOW_SWIRL */
/* #define RGBLIGHT_EFFECT_RGB_TEST */
/* #define RGBLIGHT_EFFECT_SNAKE */
/* #define RGBLIGHT_EFFECT_TWINKLE */

/* #define RGBLIGHT_LAYERS */

/* AZ1BALL settings */
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define AUTO_MOUSE_DEFAULT_LAYER 3
#define AUTO_MOUSE_TIME 500



#define PIMORONI_TRACBALL_SCALE 3 // default 5
				  


// #define POINTING_DEVICE_DEBUG

// #define PIMORONI_TRACKBALL_ADDRESS_0x14

#define I2C_DRIVER I2CD0
#define I2C1_SCL_PIN GP6 
#define I2C1_SDA_PIN GP5 

#define POINTING_DEVICE_ROTATION_90

