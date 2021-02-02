/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
#endif

#ifdef RGBLIGHT_ENABLE
  #define RGBLIGHT_ANIMATIONS
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
#endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
/* #define SPLIT_USB_DETECT */
/* #define NO_USB_STARTUP_CHECK */

#define MASTER_RIGHT

#undef TAPPING_TERM
#define TAPPING_TERM 1000
#undef IGNORE_MOD_TAP_INTERRUPT
/* #define IGNORE_MOD_TAP_INTERRUPT */
#undef PERMISSIVE_HOLD
#define PERMISSIVE_HOLD
#undef TAPPING_TOGGLE
#define TAPPING_TOGGLE 2

#define MOUSEKEY_DELAY 0
#define MOUSEKEY_MAX_SPEED 15
#define MOUSEKEY_INTERVAL 15
#define MOUSEKEY_TIME_TO_MAX 80
#define MOUSEKEY_WHEEL_DELAY 150
#define MOUSEKEY_WHEEL_INTERVAL 100
#define MOUSEKEY_WHEEL_TIME_TO_MAX 30
#define MOUSEKEY_WHEEL_MAX_SPEED 10
