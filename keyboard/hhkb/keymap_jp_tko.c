/*
 * HHKB JP Layout - tko's Modification
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer */
    KEYMAP_JP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, GRV,BSPC, \
              TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC, \
              LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,BSLS,ENT, \
              LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,UP,  FN1, \
              FN1, LALT,LGUI,HOME,END, SPC,      PGUP,PGDN,RALT,DEL,LEFT,DOWN,RGHT),

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
    KEYMAP_JP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, \
              TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,TRNS,PENT, \
              TRNS,TRNS,TRNS,CALC,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,WBAK,PGUP,WFWD, \
              TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,   TRNS,TRNS,TRNS,TRNS,HOME,PGDN,END),

    /* Layer 2: Mousekey mode
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Bsp|
     * |-----------------------------------------------------------|
     * |Tab  |   |   |   |   |   |   |   |MwL|MwD|MwU|MwR|   |     |
     * |------------------------------------------------------`    |
     * |Contro|VoD|VoU|Mut|   |   |   |   |McL|McD|McU|McR|   |    |
     * |-----------------------------------------------------------|
     * |Shift  |   |   |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
     * `-----------------------------------------------------------'
     */
    //        ESC , 1  , 2  , 3  , 4  , 5  , 6  , 7  , 8  , 9  , 0  , -  , =  , `  , BS
    KEYMAP_JP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    //        TAB , Q  ,  W , E  , R  , T  , Y  , U  , I  , O  , P  , {  , }
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    //        CTRL, A  ,  S , D  , F  , G  , H  , J  , K  , L  , ;  , '  , \  , ENT
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    //        SHFT, Z  ,  X , C  , V  , B  , N  , M  , ,  , .  , /  ,SHFT, /\ , Fn
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MS_U,TRNS, \
    //         Fn , ALT, <> , HH ,KANA,  SPACE  , REF, UND, ALT, -\ , <- , \/ , ->
              TRNS,TRNS,ACL0,ACL1,ACL2,   BTN1  ,BTN2,BTN3,BTN4,BTN5,MS_L,MS_D,MS_R),
};

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_DEFAULT_LAYER_SET(0),                // Default layer(not used)
    [1] = ACTION_LAYER_MOMENTARY(1),
    // [1] = ACTION_LAYER_MOMENTARY(1),
    // [2] = ACTION_LAYER_TOGGLE(2),
    // [2] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC), // LControl with tap Esc*
    // [2] = ACTION_LAYER_TOGGLE(2), // 2016-11-08 - disabled
};