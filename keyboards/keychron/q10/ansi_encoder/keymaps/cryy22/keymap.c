/* Copyright 2022 @ cryy22
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

#include QMK_KEYBOARD_H

// clang-format off

enum layers{
    MAIN,
    EMTY,
    CLMK,
    SYMS
};

enum custom_keycodes {
    ARROW = SAFE_RANGE,
    ROCKET,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAIN] = LAYOUT_ansi_89(
        KC_MPLY,  KC_ESC,       KC_F1,      KC_F2,      KC_F3,      KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,            KC_DEL,
        _______,  KC_GRV,       KC_1,       KC_2,       KC_3,       KC_4,     KC_5,      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        _______,  CTL_T(KC_TAB),KC_Q,       KC_W,       KC_E,       KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        _______,  GUI_T(KC_ESC),KC_A,       KC_S,       KC_D,       KC_F,     KC_G,      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        _______,  KC_LSFT,      CTL_T(KC_Z),ALT_T(KC_X),GUI_T(KC_C),KC_V,     KC_B,      KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
        _______,  KC_LCTL,      KC_LALT,                KC_LGUI, LT(SYMS,KC_SPC), KC_TAB,                LT(SYMS,KC_BSPC),            LT(SYMS,KC_ENT),         KC_LEFT,  KC_DOWN,  KC_RGHT
    ),

    [EMTY] = LAYOUT_ansi_89(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,             _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,
        _______,  _______,  _______,            _______,  _______,  _______,                       _______,            _______,                       _______,  _______,  _______
    ),

    [CLMK] = LAYOUT_ansi_89(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,  _______,  _______,  _______,  KC_F,     KC_P,     KC_G,      KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  _______,   _______,  _______,            _______,
        _______,  _______,  _______,  KC_R,     KC_S,     KC_T,     KC_D,      _______,  KC_N,     KC_E,     KC_I,     KC_O,     _______,             _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   KC_K,     _______,  _______,  _______,  _______,  _______,             _______,  _______,
        _______,  _______,  _______,            _______,  _______,  _______,                       _______,            _______,                       _______,  _______,  _______
    ),

    [SYMS] = LAYOUT_ansi_89(
        KC_MUTE,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,  _______,  KC_PIPE,  KC_AMPR,  KC_LBRC,  KC_RBRC,  KC_GRV,    _______,  KC_LT,    KC_GT,    ROCKET,   ARROW,    _______,   _______,  _______,            _______,
        _______,  _______,  KC_PLUS,  KC_EQL,   KC_LPRN,  KC_RPRN,  KC_DQUO,   KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  _______,             _______,            _______,
        RGB_TOG,  _______,  KC_PERC,  KC_EXLM,  KC_LCBR,  KC_RCBR,  KC_QUOT,   _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,             _______,  _______,
        RGB_MOD,  _______,  _______,            _______,  KC_MINS,  KC_UNDS,                       _______,            _______,                       _______,  _______,  _______
    ),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [MAIN] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [EMTY] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [CLMK] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [SYMS] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif // ENCODER_MAP_ENABLE
