/* 
 * HHKB JP Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer */
    KEYMAP_JP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL,BSLS, GRV, \ 
              TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC, \
              LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,BSPC,ENT, \
              LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,UP,  FN0, \
              FN0, LALT,LGUI,HOME,END, SPC,      PGUP,PGDN,RALT,DEL,LEFT,DOWN,RGHT),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |------------------------------------------------------`    |
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|   |    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |  +|  -|End|PgD|Dow|   |   |   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
     * `-----------------------------------------------------------'
     */ 
    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, \
              TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,TRNS,PENT, \
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,TRNS, \
              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(1),
//    [1] = ACTION_MACRO(HELLO),
};

enum macro_id {
	HELLO,
};


/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
	switch (id) {
		case HELLO:
			return (record->event.pressed ?
					MACRO( I(0), T(H), T(E), T(L), T(L), W(255), T(O), END ) :
					MACRO_NONE );
	}
	return MACRO_NONE;
}
