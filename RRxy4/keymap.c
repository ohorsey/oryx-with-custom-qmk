#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_126_255_255,
  HSV_39_255_255,
  HSV_78_255_255,
  HSV_216_255_255,
  HSV_0_255_255,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    RGB_SLD,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           LCTL(LSFT(KC_L)),                                KC_MS_BTN8,     KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           OSL(8),         
    RGB_MODE_FORWARD,KC_Q,           KC_W,           LT(1, KC_E),    LT(1, KC_R),    KC_T,           KC_RIGHT_GUI,                                   KC_RIGHT_GUI,   KC_Y,           LT(1, KC_U),    LT(1, KC_I),    KC_O,           KC_P,           KC_ENTER,       
    KC_QUOTE,       MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),ALL_T(KC_D),    MT(MOD_LSFT, KC_F),KC_G,           CW_TOGG,                                                                        KC_CAPS,        KC_H,           MT(MOD_RSFT, KC_J),MEH_T(KC_K),    MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_SCLN),KC_BSPC,        
    KC_MS_BTN8,     LT(1, KC_GRAVE),LT(2, KC_Z),    KC_X,           KC_C,           MEH_T(KC_V),                                    ALL_T(KC_B),    KC_N,           KC_M,           LT(2, KC_DOT),  LT(1, KC_SLASH),KC_COMMA,       
    KC_MS_BTN3,     KC_MS_BTN2,     KC_MS_BTN1,     KC_LEFT,        KC_RIGHT,       KC_ESCAPE,                                                                                                      LM(1,MOD_LSFT), KC_UP,          KC_DOWN,        KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN3,     
    KC_SPACE,       KC_TAB,         KC_DELETE,                      LM(1,MOD_LGUI), LM(1,MOD_LCTL), LM(1,MOD_LALT)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_PLUS,        KC_EQUAL,       KC_F12,         
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_PIPE,        
    KC_TRANSPARENT, KC_MINUS,       KC_LABK,        KC_LBRC,        KC_LCBR,        KC_LPRN,                                        KC_RPRN,        KC_RCBR,        KC_RBRC,        KC_RABK,        KC_UNDS,        KC_BSLS,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_INSERT,                                      KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN4,     KC_MS_BTN5,     KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,                                KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT, KC_NUM,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,TO(0),                                                                                                          KC_TRANSPARENT, TD(DANCE_0),    TD(DANCE_1),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_WH_UP,    KC_MS_BTN8,     KC_MS_BTN3,     KC_MS_BTN2,     KC_MS_BTN1,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN8,     KC_MS_WH_RIGHT, 
    KC_MS_WH_DOWN,  KC_NUM,         TO(0),          KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, TO(0),                                                                                                          KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_WH_DOWN,  TO(0),          KC_NUM,         KC_MS_WH_LEFT,  
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    TT(7),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TG(7),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_E,           KC_R,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_U,           KC_I,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_GRAVE,       KC_Z,           KC_TRANSPARENT, KC_TRANSPARENT, KC_B,                                           KC_N,           KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_TOG,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_MODE_FORWARD,RGB_SPI,        RGB_HUI,        RGB_VAI,        RGB_SAI,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, RGB_SLD,        HSV_126_255_255,HSV_39_255_255, HSV_78_255_255, HSV_216_255_255,HSV_0_255_255,  
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TOGGLE_LAYER_COLOR,RGB_SPD,        RGB_HUD,        RGB_VAD,        RGB_SAD,        KC_TRANSPARENT, 
    QK_BOOT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_MINUS,       
    KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_BSLS,        
    KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_BSPC,                                                                        KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_QUOTE,       
    KC_TRANSPARENT, KC_B,           KC_N,           KC_M,           KC_COMMA,       KC_DOT,                                         KC_GRAVE,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_SLASH,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_DOWN,        TO(0),                                                                                                          KC_TRANSPARENT, KC_LEFT,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN8,     KC_MS_WH_RIGHT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(4),                                                                                                          KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_BTN4,     KC_MS_BTN5,     KC_MS_WH_LEFT,  
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, TO(1),          TO(2),          TO(3),          TO(4),          TO(5),          KC_TRANSPARENT,                                 KC_TRANSPARENT, TO(6),          TO(7),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', '*', '*', 'R', 'R', 'R', 'R', 'R',
                 '*', '*', '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { MT(MOD_RSFT, KC_J), MT(MOD_LSFT, KC_F), COMBO_END};
const uint16_t PROGMEM combo1[] = { ALL_T(KC_D), MEH_T(KC_K), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
    COMBO(combo1, KC_ENTER),
};


bool capslock_active = false;

bool led_update_user(led_t led_state) {
  capslock_active = led_state.caps_lock;
  return true;
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222}, {31,223,222} },

    [2] = { {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204}, {85,218,204} },

    [3] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255} },

    [4] = { {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255}, {139,255,255} },

    [5] = { {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183}, {43,192,183} },

    [6] = { {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204}, {23,218,204} },

    [7] = { {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127}, {0,158,127} },

    [8] = { {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204}, {215,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  if (capslock_active && biton32(layer_state) == 0) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 0, 255, 255 });
    rgb_matrix_set_color( 67, rgb.r, rgb.g, rgb.b );
  } 
  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PAGE_UP);
        tap_code16(KC_PAGE_UP);
        tap_code16(KC_PAGE_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_PAGE_UP);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_PAGE_UP); break;
        case SINGLE_HOLD: register_code16(KC_PAGE_UP); break;
        case DOUBLE_TAP: register_code16(KC_PAGE_UP); break;
        case DOUBLE_HOLD: register_code16(KC_PAGE_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PAGE_UP); register_code16(KC_PAGE_UP);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_PAGE_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_PAGE_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_PAGE_UP); break;
        case DOUBLE_HOLD: unregister_code16(KC_PAGE_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PAGE_UP); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PGDN);
        tap_code16(KC_PGDN);
        tap_code16(KC_PGDN);
    }
    if(state->count > 3) {
        tap_code16(KC_PGDN);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_PGDN); break;
        case SINGLE_HOLD: register_code16(KC_PGDN); break;
        case DOUBLE_TAP: register_code16(KC_PGDN); break;
        case DOUBLE_HOLD: register_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PGDN); register_code16(KC_PGDN);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_PGDN); break;
        case SINGLE_HOLD: unregister_code16(KC_PGDN); break;
        case DOUBLE_TAP: unregister_code16(KC_PGDN); break;
        case DOUBLE_HOLD: unregister_code16(KC_PGDN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PGDN); break;
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_126_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(126,255,255);
        }
        return false;
    case HSV_39_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(39,255,255);
        }
        return false;
    case HSV_78_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(78,255,255);
        }
        return false;
    case HSV_216_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(216,255,255);
        }
        return false;
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
  }
  return true;
}

