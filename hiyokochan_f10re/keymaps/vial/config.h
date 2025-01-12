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

#define VIAL_KEYBOARD_UID {0x8B, 0x9C, 0x0E, 0xBB, 0xB9, 0x42, 0xBD, 0x79}
#define VIAL_UNLOCK_COMBO_ROWS {0,0}
#define VIAL_UNLOCK_COMBO_COLS {0,1}

#define RGB_MATRIX_LED_COUNT 16
// #define MAX_LAYER 16



/* AZ1BALL settings */
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define AUTO_MOUSE_DEFAULT_LAYER 7
#define AUTO_MOUSE_TIME 650



#define PIMORONI_TRACKBALL_SCALE 3 // default 5



// #define POINTING_DEVICE_DEBUG

// #define PIMORONI_TRACKBALL_ADDRESS_0x14

#define I2C_DRIVER I2CD0
#define I2C1_SCL_PIN GP5
#define I2C1_SDA_PIN GP4

#define POINTING_DEVICE_ROTATION_90

