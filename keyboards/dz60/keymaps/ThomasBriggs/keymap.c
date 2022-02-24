#include QMK_KEYBOARD_H

// Tap Dance declerations
enum {TD_CAPS_ESC,};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_CAPS_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_CAPS, KC_ESC),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_60_iso_5x1u(
		KC_GESC, 	KC_1, 	KC_2, 	KC_3, 	KC_4, 	KC_5, 	KC_6, 	KC_7, 	KC_8,	KC_9,	KC_0,	KC_MINS, 	KC_EQL, 	KC_BSPC,
		KC_TAB, 	KC_Q, 	KC_W, 	KC_E, 	KC_R, 	KC_T, 	KC_Y, 	KC_U, 	KC_I, 	KC_O, 	KC_P, 	KC_LBRC, 	KC_RBRC,
		TD(TD_CAPS_ESC), 	KC_A, 	KC_S, 	KC_D, 	KC_F, 	KC_G, 	KC_H, 	KC_J, 	KC_K, 	KC_L, 	KC_SCLN,	KC_QUOT, 	KC_NUHS, 	KC_ENT, 
		KC_LSPO, 	KC_NUBS,KC_Z, 	KC_X, 	KC_C, 	KC_V, 	KC_B, 	KC_N, 	KC_M, 	KC_COMM,KC_DOT, KC_SLSH, 	KC_RSPC, 
		KC_LCTL, 	KC_LGUI,KC_LALT,						KC_SPC, 						MO(1), 	KC_LEFT,	KC_DOWN,	KC_UP, 	 	KC_RGHT),


	[1] = LAYOUT_60_iso_5x1u(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_TRNS, RGB_TOG, RGB_RMOD, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, TERM_ON, KC_TRNS, RGB_VAD, RGB_VAI, RGB_SPD, RGB_SPI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_HOME, KC_END, TERM_OFF, KC_PSCR, KC_LSFT, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, KC_TRNS, RESET, KC_TRNS, KC_TRNS, KC_SLCK, KC_PGUP, KC_PGDN, KC_RSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_VOLU, KC_MPLY, KC_MNXT)};
