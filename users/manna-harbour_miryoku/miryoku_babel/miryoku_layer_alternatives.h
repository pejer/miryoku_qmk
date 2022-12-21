// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: qmk

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once


#define MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP \
SE_A,              SE_Z,              SE_E,              SE_R,              SE_T,              SE_Y,              SE_U,              SE_I,              SE_O,              SE_P,              \
LGUI_T(KC_SE_Q),   LALT_T(KC_SE_S),   LCTL_T(KC_SE_D),   LSFT_T(KC_SE_F),   SE_G,              SE_H,              LSFT_T(KC_SE_J),   LCTL_T(KC_SE_K),   LALT_T(KC_SE_L),   LGUI_T(KC_SE_M),   \
LT(U_BUTTON,KC_SE_W),ALGR_T(KC_SE_X),   SE_C,              SE_V,              SE_B,              SE_N,              SE_COMM,           SE_DOT,            ALGR_T(KC_SE_SLSH),LT(U_BUTTON,KC_SE_ODIA),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15_FLIP \
SE_Q,              SE_H,              SE_O,              SE_U,              SE_X,              SE_G,              SE_C,              SE_R,              SE_F,              SE_Z,              \
LGUI_T(KC_SE_Y),   LALT_T(KC_SE_I),   LCTL_T(KC_SE_E),   LSFT_T(KC_SE_A),   SE_DOT,            SE_D,              LSFT_T(KC_SE_S),   LCTL_T(KC_SE_T),   LALT_T(KC_SE_N),   LGUI_T(KC_SE_B),   \
LT(U_BUTTON,KC_SE_J),ALGR_T(KC_SE_SLSH),SE_COMM,           SE_K,              SE_ODIA,           SE_W,              SE_M,              SE_L,              ALGR_T(KC_SE_P),   LT(U_BUTTON,KC_SE_V),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK_FLIP \
SE_Q,              SE_W,              SE_F,              SE_P,              SE_G,              SE_J,              SE_L,              SE_U,              SE_Y,              SE_ODIA,           \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_R),   LCTL_T(KC_SE_S),   LSFT_T(KC_SE_T),   SE_D,              SE_H,              LSFT_T(KC_SE_N),   LCTL_T(KC_SE_E),   LALT_T(KC_SE_I),   LGUI_T(KC_SE_O),   \
LT(U_BUTTON,KC_SE_Z),ALGR_T(KC_SE_X),   SE_C,              SE_V,              SE_B,              SE_K,              SE_M,              SE_COMM,           ALGR_T(KC_SE_DOT), LT(U_BUTTON,KC_SE_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP \
SE_Q,              SE_W,              SE_F,              SE_P,              SE_B,              SE_J,              SE_L,              SE_U,              SE_Y,              SE_ODIA,           \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_R),   LCTL_T(KC_SE_S),   LSFT_T(KC_SE_T),   SE_G,              SE_M,              LSFT_T(KC_SE_N),   LCTL_T(KC_SE_E),   LALT_T(KC_SE_I),   LGUI_T(KC_SE_O),   \
LT(U_BUTTON,KC_SE_Z),ALGR_T(KC_SE_X),   SE_C,              SE_D,              SE_V,              SE_K,              SE_H,              SE_COMM,           ALGR_T(KC_SE_DOT), LT(U_BUTTON,KC_SE_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK_FLIP \
SE_Q,              SE_W,              SE_F,              SE_P,              SE_B,              SE_J,              SE_L,              SE_U,              SE_Y,              SE_ODIA,           \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_R),   LCTL_T(KC_SE_S),   LSFT_T(KC_SE_T),   SE_G,              SE_K,              LSFT_T(KC_SE_N),   LCTL_T(KC_SE_E),   LALT_T(KC_SE_I),   LGUI_T(KC_SE_O),   \
LT(U_BUTTON,KC_SE_Z),ALGR_T(KC_SE_X),   SE_C,              SE_D,              SE_V,              SE_M,              SE_H,              SE_COMM,           ALGR_T(KC_SE_DOT), LT(U_BUTTON,KC_SE_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK_FLIP \
SE_ODIA,           SE_COMM,           SE_DOT,            SE_P,              SE_Y,              SE_F,              SE_G,              SE_C,              SE_R,              SE_L,              \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_O),   LCTL_T(KC_SE_E),   LSFT_T(KC_SE_U),   SE_I,              SE_D,              LSFT_T(KC_SE_H),   LCTL_T(KC_SE_T),   LALT_T(KC_SE_N),   LGUI_T(KC_SE_S),   \
LT(U_BUTTON,KC_SE_SLSH),ALGR_T(KC_SE_Q),   SE_J,              SE_K,              SE_X,              SE_B,              SE_M,              SE_W,              ALGR_T(KC_SE_V),   LT(U_BUTTON,KC_SE_Z),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK_FLIP \
SE_W,              SE_L,              SE_R,              SE_B,              SE_Z,              SE_ODIA,           SE_Q,              SE_U,              SE_D,              SE_J,              \
LGUI_T(KC_SE_S),   LALT_T(KC_SE_H),   LCTL_T(KC_SE_N),   LSFT_T(KC_SE_T),   SE_COMM,           SE_DOT,            LSFT_T(KC_SE_A),   LCTL_T(KC_SE_E),   LALT_T(KC_SE_O),   LGUI_T(KC_SE_I),   \
LT(U_BUTTON,KC_SE_F),ALGR_T(KC_SE_M),   SE_V,              SE_C,              SE_SLSH,           SE_G,              SE_P,              SE_X,              ALGR_T(KC_SE_K),   LT(U_BUTTON,KC_SE_Y),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN_FLIP \
SE_Q,              SE_D,              SE_R,              SE_W,              SE_B,              SE_J,              SE_F,              SE_U,              SE_P,              SE_ODIA,           \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_S),   LCTL_T(KC_SE_H),   LSFT_T(KC_SE_T),   SE_G,              SE_Y,              LSFT_T(KC_SE_N),   LCTL_T(KC_SE_E),   LALT_T(KC_SE_O),   LGUI_T(KC_SE_I),   \
LT(U_BUTTON,KC_SE_Z),ALGR_T(KC_SE_X),   SE_M,              SE_C,              SE_V,              SE_K,              SE_L,              SE_COMM,           ALGR_T(KC_SE_DOT), LT(U_BUTTON,KC_SE_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
SE_Q,              SE_W,              SE_E,              SE_R,              SE_T,              SE_Y,              SE_U,              SE_I,              SE_O,              SE_P,              \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_S),   LCTL_T(KC_SE_D),   LSFT_T(KC_SE_F),   SE_G,              SE_H,              LSFT_T(KC_SE_J),   LCTL_T(KC_SE_K),   LALT_T(KC_SE_L),   LGUI_T(KC_SE_ODIA),\
LT(U_BUTTON,KC_SE_Z),ALGR_T(KC_SE_X),   SE_C,              SE_V,              SE_B,              SE_N,              SE_M,              SE_COMM,           ALGR_T(KC_SE_DOT), LT(U_BUTTON,KC_SE_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ_FLIP \
SE_Q,              SE_W,              SE_E,              SE_R,              SE_T,              SE_Z,              SE_U,              SE_I,              SE_O,              SE_P,              \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_S),   LCTL_T(KC_SE_D),   LSFT_T(KC_SE_F),   SE_G,              SE_H,              LSFT_T(KC_SE_J),   LCTL_T(KC_SE_K),   LALT_T(KC_SE_L),   LGUI_T(KC_SE_ODIA),\
LT(U_BUTTON,KC_SE_Y),ALGR_T(KC_SE_X),   SE_C,              SE_V,              SE_B,              SE_N,              SE_M,              SE_COMM,           ALGR_T(KC_SE_DOT), LT(U_BUTTON,KC_SE_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_AZERTY \
SE_A,              SE_Z,              SE_E,              SE_R,              SE_T,              SE_Y,              SE_U,              SE_I,              SE_O,              SE_P,              \
LGUI_T(KC_SE_Q),   LALT_T(KC_SE_S),   LCTL_T(KC_SE_D),   LSFT_T(KC_SE_F),   SE_G,              SE_H,              LSFT_T(KC_SE_J),   LCTL_T(KC_SE_K),   LALT_T(KC_SE_L),   LGUI_T(KC_SE_M),   \
LT(U_BUTTON,KC_SE_W),ALGR_T(KC_SE_X),   SE_C,              SE_V,              SE_B,              SE_N,              SE_COMM,           SE_DOT,            ALGR_T(KC_SE_SLSH),LT(U_BUTTON,KC_SE_ODIA),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_BEAKL15 \
SE_Q,              SE_H,              SE_O,              SE_U,              SE_X,              SE_G,              SE_C,              SE_R,              SE_F,              SE_Z,              \
LGUI_T(KC_SE_Y),   LALT_T(KC_SE_I),   LCTL_T(KC_SE_E),   LSFT_T(KC_SE_A),   SE_DOT,            SE_D,              LSFT_T(KC_SE_S),   LCTL_T(KC_SE_T),   LALT_T(KC_SE_N),   LGUI_T(KC_SE_B),   \
LT(U_BUTTON,KC_SE_J),ALGR_T(KC_SE_SLSH),SE_COMM,           SE_K,              SE_ODIA,           SE_W,              SE_M,              SE_L,              ALGR_T(KC_SE_P),   LT(U_BUTTON,KC_SE_V),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAK \
SE_Q,              SE_W,              SE_F,              SE_P,              SE_G,              SE_J,              SE_L,              SE_U,              SE_Y,              SE_ODIA,           \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_R),   LCTL_T(KC_SE_S),   LSFT_T(KC_SE_T),   SE_D,              SE_H,              LSFT_T(KC_SE_N),   LCTL_T(KC_SE_E),   LALT_T(KC_SE_I),   LGUI_T(KC_SE_O),   \
LT(U_BUTTON,KC_SE_Z),ALGR_T(KC_SE_X),   SE_C,              SE_V,              SE_B,              SE_K,              SE_M,              SE_COMM,           ALGR_T(KC_SE_DOT), LT(U_BUTTON,KC_SE_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
SE_Q,              SE_W,              SE_F,              SE_P,              SE_B,              SE_J,              SE_L,              SE_U,              SE_Y,              SE_ODIA,           \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_R),   LCTL_T(KC_SE_S),   LSFT_T(KC_SE_T),   SE_G,              SE_M,              LSFT_T(KC_SE_N),   LCTL_T(KC_SE_E),   LALT_T(KC_SE_I),   LGUI_T(KC_SE_O),   \
LT(U_BUTTON,KC_SE_Z),ALGR_T(KC_SE_X),   SE_C,              SE_D,              SE_V,              SE_K,              SE_H,              SE_COMM,           ALGR_T(KC_SE_DOT), LT(U_BUTTON,KC_SE_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK \
SE_Q,              SE_W,              SE_F,              SE_P,              SE_B,              SE_J,              SE_L,              SE_U,              SE_Y,              SE_ODIA,           \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_R),   LCTL_T(KC_SE_S),   LSFT_T(KC_SE_T),   SE_G,              SE_K,              LSFT_T(KC_SE_N),   LCTL_T(KC_SE_E),   LALT_T(KC_SE_I),   LGUI_T(KC_SE_O),   \
LT(U_BUTTON,KC_SE_Z),ALGR_T(KC_SE_X),   SE_C,              SE_D,              SE_V,              SE_M,              SE_H,              SE_COMM,           ALGR_T(KC_SE_DOT), LT(U_BUTTON,KC_SE_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_DVORAK \
SE_ODIA,           SE_COMM,           SE_DOT,            SE_P,              SE_Y,              SE_F,              SE_G,              SE_C,              SE_R,              SE_L,              \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_O),   LCTL_T(KC_SE_E),   LSFT_T(KC_SE_U),   SE_I,              SE_D,              LSFT_T(KC_SE_H),   LCTL_T(KC_SE_T),   LALT_T(KC_SE_N),   LGUI_T(KC_SE_S),   \
LT(U_BUTTON,KC_SE_SLSH),ALGR_T(KC_SE_Q),   SE_J,              SE_K,              SE_X,              SE_B,              SE_M,              SE_W,              ALGR_T(KC_SE_V),   LT(U_BUTTON,KC_SE_Z),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK \
SE_W,              SE_L,              SE_R,              SE_B,              SE_Z,              SE_ODIA,           SE_Q,              SE_U,              SE_D,              SE_J,              \
LGUI_T(KC_SE_S),   LALT_T(KC_SE_H),   LCTL_T(KC_SE_N),   LSFT_T(KC_SE_T),   SE_COMM,           SE_DOT,            LSFT_T(KC_SE_A),   LCTL_T(KC_SE_E),   LALT_T(KC_SE_O),   LGUI_T(KC_SE_I),   \
LT(U_BUTTON,KC_SE_F),ALGR_T(KC_SE_M),   SE_V,              SE_C,              SE_SLSH,           SE_G,              SE_P,              SE_X,              ALGR_T(KC_SE_K),   LT(U_BUTTON,KC_SE_Y),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_WORKMAN \
SE_Q,              SE_D,              SE_R,              SE_W,              SE_B,              SE_J,              SE_F,              SE_U,              SE_P,              SE_ODIA,           \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_S),   LCTL_T(KC_SE_H),   LSFT_T(KC_SE_T),   SE_G,              SE_Y,              LSFT_T(KC_SE_N),   LCTL_T(KC_SE_E),   LALT_T(KC_SE_O),   LGUI_T(KC_SE_I),   \
LT(U_BUTTON,KC_SE_Z),ALGR_T(KC_SE_X),   SE_M,              SE_C,              SE_V,              SE_K,              SE_L,              SE_COMM,           ALGR_T(KC_SE_DOT), LT(U_BUTTON,KC_SE_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
SE_Q,              SE_W,              SE_E,              SE_R,              SE_T,              SE_Y,              SE_U,              SE_I,              SE_O,              SE_P,              \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_S),   LCTL_T(KC_SE_D),   LSFT_T(KC_SE_F),   SE_G,              SE_H,              LSFT_T(KC_SE_J),   LCTL_T(KC_SE_K),   LALT_T(KC_SE_L),   LGUI_T(KC_SE_ODIA),\
LT(U_BUTTON,KC_SE_Z),ALGR_T(KC_SE_X),   SE_C,              SE_V,              SE_B,              SE_N,              SE_M,              SE_COMM,           ALGR_T(KC_SE_DOT), LT(U_BUTTON,KC_SE_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTZ \
SE_Q,              SE_W,              SE_E,              SE_R,              SE_T,              SE_Z,              SE_U,              SE_I,              SE_O,              SE_P,              \
LGUI_T(KC_SE_A),   LALT_T(KC_SE_S),   LCTL_T(KC_SE_D),   LSFT_T(KC_SE_F),   SE_G,              SE_H,              LSFT_T(KC_SE_J),   LCTL_T(KC_SE_K),   LALT_T(KC_SE_L),   LGUI_T(KC_SE_ODIA),\
LT(U_BUTTON,KC_SE_Y),ALGR_T(KC_SE_X),   SE_C,              SE_V,              SE_B,              SE_N,              SE_M,              SE_COMM,           ALGR_T(KC_SE_DOT), LT(U_BUTTON,KC_SE_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_TAP_AZERTY_FLIP \
SE_A,              SE_Z,              SE_E,              SE_R,              SE_T,              SE_Y,              SE_U,              SE_I,              SE_O,              SE_P,              \
SE_Q,              SE_S,              SE_D,              SE_F,              SE_G,              SE_H,              SE_J,              SE_K,              SE_L,              SE_M,              \
SE_W,              SE_X,              SE_C,              SE_V,              SE_B,              SE_N,              SE_COMM,           SE_DOT,            SE_SLSH,           SE_ODIA,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15_FLIP \
SE_Q,              SE_H,              SE_O,              SE_U,              SE_X,              SE_G,              SE_C,              SE_R,              SE_F,              SE_Z,              \
SE_Y,              SE_I,              SE_E,              SE_A,              SE_DOT,            SE_D,              SE_S,              SE_T,              SE_N,              SE_B,              \
SE_J,              SE_SLSH,           SE_COMM,           SE_K,              SE_ODIA,           SE_W,              SE_M,              SE_L,              SE_P,              SE_V,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK_FLIP \
SE_Q,              SE_W,              SE_F,              SE_P,              SE_G,              SE_J,              SE_L,              SE_U,              SE_Y,              SE_ODIA,           \
SE_A,              SE_R,              SE_S,              SE_T,              SE_D,              SE_H,              SE_N,              SE_E,              SE_I,              SE_O,              \
SE_Z,              SE_X,              SE_C,              SE_V,              SE_B,              SE_K,              SE_M,              SE_COMM,           SE_DOT,            SE_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP \
SE_Q,              SE_W,              SE_F,              SE_P,              SE_B,              SE_J,              SE_L,              SE_U,              SE_Y,              SE_ODIA,           \
SE_A,              SE_R,              SE_S,              SE_T,              SE_G,              SE_M,              SE_N,              SE_E,              SE_I,              SE_O,              \
SE_Z,              SE_X,              SE_C,              SE_D,              SE_V,              SE_K,              SE_H,              SE_COMM,           SE_DOT,            SE_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK_FLIP \
SE_Q,              SE_W,              SE_F,              SE_P,              SE_B,              SE_J,              SE_L,              SE_U,              SE_Y,              SE_ODIA,           \
SE_A,              SE_R,              SE_S,              SE_T,              SE_G,              SE_K,              SE_N,              SE_E,              SE_I,              SE_O,              \
SE_Z,              SE_X,              SE_C,              SE_D,              SE_V,              SE_M,              SE_H,              SE_COMM,           SE_DOT,            SE_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK_FLIP \
SE_ODIA,           SE_COMM,           SE_DOT,            SE_P,              SE_Y,              SE_F,              SE_G,              SE_C,              SE_R,              SE_L,              \
SE_A,              SE_O,              SE_E,              SE_U,              SE_I,              SE_D,              SE_H,              SE_T,              SE_N,              SE_S,              \
SE_SLSH,           SE_Q,              SE_J,              SE_K,              SE_X,              SE_B,              SE_M,              SE_W,              SE_V,              SE_Z,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK_FLIP \
SE_W,              SE_L,              SE_R,              SE_B,              SE_Z,              SE_ODIA,           SE_Q,              SE_U,              SE_D,              SE_J,              \
SE_S,              SE_H,              SE_N,              SE_T,              SE_COMM,           SE_DOT,            SE_A,              SE_E,              SE_O,              SE_I,              \
SE_F,              SE_M,              SE_V,              SE_C,              SE_SLSH,           SE_G,              SE_P,              SE_X,              SE_K,              SE_Y,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN_FLIP \
SE_Q,              SE_D,              SE_R,              SE_W,              SE_B,              SE_J,              SE_F,              SE_U,              SE_P,              SE_ODIA,           \
SE_A,              SE_S,              SE_H,              SE_T,              SE_G,              SE_Y,              SE_N,              SE_E,              SE_O,              SE_I,              \
SE_Z,              SE_X,              SE_M,              SE_C,              SE_V,              SE_K,              SE_L,              SE_COMM,           SE_DOT,            SE_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_FLIP \
SE_Q,              SE_W,              SE_E,              SE_R,              SE_T,              SE_Y,              SE_U,              SE_I,              SE_O,              SE_P,              \
SE_A,              SE_S,              SE_D,              SE_F,              SE_G,              SE_H,              SE_J,              SE_K,              SE_L,              SE_ODIA,           \
SE_Z,              SE_X,              SE_C,              SE_V,              SE_B,              SE_N,              SE_M,              SE_COMM,           SE_DOT,            SE_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ_FLIP \
SE_Q,              SE_W,              SE_E,              SE_R,              SE_T,              SE_Z,              SE_U,              SE_I,              SE_O,              SE_P,              \
SE_A,              SE_S,              SE_D,              SE_F,              SE_G,              SE_H,              SE_J,              SE_K,              SE_L,              SE_ODIA,           \
SE_Y,              SE_X,              SE_C,              SE_V,              SE_B,              SE_N,              SE_M,              SE_COMM,           SE_DOT,            SE_SLSH,           \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            KC_TAB,            KC_SPC,            KC_ESC,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_AZERTY \
SE_A,              SE_Z,              SE_E,              SE_R,              SE_T,              SE_Y,              SE_U,              SE_I,              SE_O,              SE_P,              \
SE_Q,              SE_S,              SE_D,              SE_F,              SE_G,              SE_H,              SE_J,              SE_K,              SE_L,              SE_M,              \
SE_W,              SE_X,              SE_C,              SE_V,              SE_B,              SE_N,              SE_COMM,           SE_DOT,            SE_SLSH,           SE_ODIA,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_BEAKL15 \
SE_Q,              SE_H,              SE_O,              SE_U,              SE_X,              SE_G,              SE_C,              SE_R,              SE_F,              SE_Z,              \
SE_Y,              SE_I,              SE_E,              SE_A,              SE_DOT,            SE_D,              SE_S,              SE_T,              SE_N,              SE_B,              \
SE_J,              SE_SLSH,           SE_COMM,           SE_K,              SE_ODIA,           SE_W,              SE_M,              SE_L,              SE_P,              SE_V,              \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAK \
SE_Q,              SE_W,              SE_F,              SE_P,              SE_G,              SE_J,              SE_L,              SE_U,              SE_Y,              SE_ODIA,           \
SE_A,              SE_R,              SE_S,              SE_T,              SE_D,              SE_H,              SE_N,              SE_E,              SE_I,              SE_O,              \
SE_Z,              SE_X,              SE_C,              SE_V,              SE_B,              SE_K,              SE_M,              SE_COMM,           SE_DOT,            SE_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH \
SE_Q,              SE_W,              SE_F,              SE_P,              SE_B,              SE_J,              SE_L,              SE_U,              SE_Y,              SE_ODIA,           \
SE_A,              SE_R,              SE_S,              SE_T,              SE_G,              SE_M,              SE_N,              SE_E,              SE_I,              SE_O,              \
SE_Z,              SE_X,              SE_C,              SE_D,              SE_V,              SE_K,              SE_H,              SE_COMM,           SE_DOT,            SE_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK \
SE_Q,              SE_W,              SE_F,              SE_P,              SE_B,              SE_J,              SE_L,              SE_U,              SE_Y,              SE_ODIA,           \
SE_A,              SE_R,              SE_S,              SE_T,              SE_G,              SE_K,              SE_N,              SE_E,              SE_I,              SE_O,              \
SE_Z,              SE_X,              SE_C,              SE_D,              SE_V,              SE_M,              SE_H,              SE_COMM,           SE_DOT,            SE_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_DVORAK \
SE_ODIA,           SE_COMM,           SE_DOT,            SE_P,              SE_Y,              SE_F,              SE_G,              SE_C,              SE_R,              SE_L,              \
SE_A,              SE_O,              SE_E,              SE_U,              SE_I,              SE_D,              SE_H,              SE_T,              SE_N,              SE_S,              \
SE_SLSH,           SE_Q,              SE_J,              SE_K,              SE_X,              SE_B,              SE_M,              SE_W,              SE_V,              SE_Z,              \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK \
SE_W,              SE_L,              SE_R,              SE_B,              SE_Z,              SE_ODIA,           SE_Q,              SE_U,              SE_D,              SE_J,              \
SE_S,              SE_H,              SE_N,              SE_T,              SE_COMM,           SE_DOT,            SE_A,              SE_E,              SE_O,              SE_I,              \
SE_F,              SE_M,              SE_V,              SE_C,              SE_SLSH,           SE_G,              SE_P,              SE_X,              SE_K,              SE_Y,              \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_WORKMAN \
SE_Q,              SE_D,              SE_R,              SE_W,              SE_B,              SE_J,              SE_F,              SE_U,              SE_P,              SE_ODIA,           \
SE_A,              SE_S,              SE_H,              SE_T,              SE_G,              SE_Y,              SE_N,              SE_E,              SE_O,              SE_I,              \
SE_Z,              SE_X,              SE_M,              SE_C,              SE_V,              SE_K,              SE_L,              SE_COMM,           SE_DOT,            SE_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
SE_Q,              SE_W,              SE_E,              SE_R,              SE_T,              SE_Y,              SE_U,              SE_I,              SE_O,              SE_P,              \
SE_A,              SE_S,              SE_D,              SE_F,              SE_G,              SE_H,              SE_J,              SE_K,              SE_L,              SE_ODIA,           \
SE_Z,              SE_X,              SE_C,              SE_V,              SE_B,              SE_N,              SE_M,              SE_COMM,           SE_DOT,            SE_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTZ \
SE_Q,              SE_W,              SE_E,              SE_R,              SE_T,              SE_Z,              SE_U,              SE_I,              SE_O,              SE_P,              \
SE_A,              SE_S,              SE_D,              SE_F,              SE_G,              SE_H,              SE_J,              SE_K,              SE_L,              SE_ODIA,           \
SE_Y,              SE_X,              SE_C,              SE_V,              SE_B,              SE_N,              SE_M,              SE_COMM,           SE_DOT,            SE_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP \
KC_PGUP,           KC_HOME,           KC_UP,             KC_END,            KC_INS,            U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_PGDN,           KC_LEFT,           KC_DOWN,           KC_RGHT,           CAPSWRD,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              TD(U_TD_U_NAV),    TD(U_TD_U_NUM),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_FLIP \
KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,            U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           CAPSWRD,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              TD(U_TD_U_NAV),    TD(U_TD_U_NUM),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_DEL,            KC_BSPC,           KC_ENT,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              KC_INS,            KC_HOME,           KC_UP,             KC_END,            KC_PGUP,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              CAPSWRD,           KC_LEFT,           KC_DOWN,           KC_RGHT,           KC_PGDN,           \
U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_VI \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           CAPSWRD,           \
U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,              KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              CAPSWRD,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           \
U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,              KC_INS,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP \
KC_WH_U,           KC_WH_L,           KC_MS_U,           KC_WH_R,           U_NU,              U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_WH_D,           KC_MS_L,           KC_MS_D,           KC_MS_R,           U_NU,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              TD(U_TD_U_MOUSE),  TD(U_TD_U_SYM),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_FLIP \
KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           U_NU,              U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           U_NU,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              TD(U_TD_U_MOUSE),  TD(U_TD_U_SYM),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_NU,              KC_WH_L,           KC_MS_U,           KC_WH_R,           KC_WH_U,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_R,           KC_WH_D,           \
U_NA,              KC_ALGR,           TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_VI \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           U_NU,              \
U_NA,              KC_ALGR,           TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  U_NA,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           \
U_NA,              KC_ALGR,           TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  U_NA,              U_NU,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP \
RGB_HUI,           RGB_SAI,           KC_VOLU,           RGB_VAI,           RGB_TOG,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
RGB_MOD,           KC_MPRV,           KC_VOLD,           KC_MNXT,           U_NU,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_NU,              U_NU,              U_NU,              U_NU,              OUT_AUTO,          U_NA,              TD(U_TD_U_MEDIA),  TD(U_TD_U_FUN),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_MUTE,           KC_MPLY,           KC_MSTP,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_FLIP \
RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           RGB_TOG,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           U_NU,              U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_NU,              U_NU,              U_NU,              U_NU,              OUT_AUTO,          U_NA,              TD(U_TD_U_MEDIA),  TD(U_TD_U_FUN),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_MUTE,           KC_MPLY,           KC_MSTP,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              RGB_TOG,           RGB_MOD,           KC_VOLU,           RGB_HUI,           RGB_SAI,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MPRV,           KC_VOLD,           KC_MNXT,           RGB_VAI,           \
U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,              OUT_AUTO,          U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_VI \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           RGB_TOG,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           U_NU,              \
U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,              U_NU,              U_NU,              U_NU,              U_NU,              OUT_AUTO,          \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           \
U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,              OUT_AUTO,          U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_NUM_FLIP \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              SE_LBRC,           KC_7,              KC_8,              KC_9,              SE_RBRC,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              SE_EQL,            KC_4,              KC_5,              KC_6,              SE_SCLN,           \
U_NA,              KC_ALGR,           TD(U_TD_U_NAV),    TD(U_TD_U_NUM),    U_NA,              SE_BSLS,           KC_1,              KC_2,              KC_3,              SE_GRV,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              SE_MINS,           KC_0,              SE_DOT,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
SE_LBRC,           KC_7,              KC_8,              KC_9,              SE_RBRC,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
SE_SCLN,           KC_4,              KC_5,              KC_6,              SE_EQL,            U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
SE_GRV,            KC_1,              KC_2,              KC_3,              SE_BSLS,           U_NA,              TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              SE_DOT,            KC_0,              SE_MINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_SYM_FLIP \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              SE_LCBR,           SE_AMPR,           SE_ASTR,           SE_LPRN,           SE_RCBR,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              SE_PLUS,           SE_DLR,            SE_PERC,           SE_CIRC,           SE_COLN,           \
U_NA,              KC_ALGR,           TD(U_TD_U_MOUSE),  TD(U_TD_U_SYM),    U_NA,              SE_PIPE,           SE_EXLM,           SE_AT,             SE_HASH,           SE_TILD,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              SE_UNDS,           SE_LPRN,           SE_RPRN,           U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
SE_LCBR,           SE_AMPR,           SE_ASTR,           SE_LPRN,           SE_RCBR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
SE_COLN,           SE_DLR,            SE_PERC,           SE_CIRC,           SE_PLUS,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
SE_TILD,           SE_EXLM,           SE_AT,             SE_HASH,           SE_PIPE,           U_NA,              TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  KC_ALGR,           U_NA,              \
U_NP,              U_NP,              SE_LPRN,           SE_RPRN,           SE_UNDS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_FUN_FLIP \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              KC_PSCR,           KC_F7,             KC_F8,             KC_F9,             KC_F12,            \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_SLCK,           KC_F4,             KC_F5,             KC_F6,             KC_F11,            \
U_NA,              KC_ALGR,           TD(U_TD_U_MEDIA),  TD(U_TD_U_FUN),    U_NA,              KC_PAUS,           KC_F1,             KC_F2,             KC_F3,             KC_F10,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_TAB,            KC_SPC,            KC_APP,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_FUN \
KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SLCK,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,           U_NA,              TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  KC_ALGR,           U_NA,              \
U_NP,              U_NP,              KC_APP,            KC_SPC,            KC_TAB,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NU,              U_NU,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP
