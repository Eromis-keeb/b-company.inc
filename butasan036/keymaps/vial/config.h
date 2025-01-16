// Copyright 2024 butasan (@kumasan555)
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

/* key matrix size */
//#define MATRIX_ROWS 4
//#define MATRIX_COLS 10

#define VIAL_KEYBOARD_UID {0x55, 0xBC, 0xDB, 0x2D, 0x34, 0xDA, 0x32, 0x29}
#define VIAL_UNLOCK_COMBO_ROWS {0,0}
#define VIAL_UNLOCK_COMBO_COLS {0,1}

/* #define WS2812_DI_PIN GP13 */
/* #define WS2812_TIMING 1250 */
/* #define WS2812_T1H 650 */
/* #define WS2812_T0H 350 */
/* #define WS2812_TRST_US 100 */

#define RGB_MATRIX_LED_COUNT 36
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_TYPING_HEATMAP


#define ENCODER_RESOLUTION 2


/* #define RGBLIHT_LIMIT_VAL 200 */
/* #define RGBLIHT_EFFECT_RAINBOW_MOOD */
/* #define RGBLIHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD */


//#define MATRIX_ROW_PINS {GP26,GP11,GP10,GP9}
//#define MATRIX_COL_PINS {GP2,GP3,GP4,GP5,GP6,GP7,GP8,GP29,GP28,GP27}
//#define UNUSED_PINS

/* COL2ROW,ROW2COL */
//#define DIODE_DIRECTION COL2ROW


