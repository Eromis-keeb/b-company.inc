// Copyright 2024 Eromis (@Eromis)
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
/* #define MATRIX_ROWS 7 */
/* #define MATRIX_COLS 12 */

#define VIAL_KEYBOARD_UID {0x4B,  0xC8,  0x69, 0x14, 0xA6, 0xF3, 0xAA, 0x0B}
#define VIAL_UNLOCK_COMBO_ROWS {0,0}
#define VIAL_UNLOCK_COMBO_COLS {0,1}

/* RGB Light setting */
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_TWINKLE

#define RGBLIGHT_LAYERS
/* #define RGBLIGHT_LAYERS_OVERRIDE */
/* #define RGBLED_NUM 4 */
/* #define LED_KANA_PIN GP1 */

/* #define LED_LAYOUT(\ */
/*         L02, L03, L04, \ */
/*         L01, \ */
/*         L00 ) \ */
/*     { \ */
/*         L02, L03, L04, \ */
/*         L01, \ */
/*         L00 \ */
/*     } */

/* #define RGBLIGHT_LED_MAP LED_LAYOUT( \ */
/*         0, 1, 2, \ */
/*         3, \ */
/*         4 ) */



