#pragma once

#include "quantum.h"

#define LAYOUT( \
       K00, K03, K07, K11, K15, K19, K23,      K27, K31, K35, K39, K43, K47, K51, \
            K04, K08, K12, K16, K20, K24,      K28, K32, K36, K40, K44, K48, K52, \
            K05, K09, K13, K17, K21, K25,      K29, K33, K37, K41, K45, K49, K53, \
            K06, K10, K14, K18, K22, K26,      K30, K34, K38, K42, K46, K50, K54, \
            K01, K02,      K58, K59, K60, K61, K62, K63, K64,      K55, K56, K57  \
  ) \
  { \
    {  K00,  K03,  K07,  K11,  K15,  K19,  K23,KC_NO,  K58},  \
    {  K01,  K04,  K08,  K12,  K16,  K20,  K24,KC_NO,  K59},  \
    {  K27,  K31,  K35,  K39,  K43,  K47,  K51,  K55,  K62},  \
    {  K28,  K32,  K36,  K40,  K44,  K48,  K52,  K56,  K63},  \
    {  K02,  K05,  K09,  K13,  K17,  K21,  K25,KC_NO,  K60},  \
    {KC_NO,  K06,  K10,  K14,  K18,  K22,  K26,KC_NO,  K61},  \
    {  K29,  K33,  K37,  K41,  K45,  K49,  K53,  K57,  K64},  \
    {  K30,  K34,  K38,  K42,  K46,  K50,  K54,KC_NO,KC_NO}   \
  }

#define LAYOUT_rotary_layer( \
       K00, K03, K07, K11, K15, K19, K23,      K27, K31, K35, K39, K43, K47, K51, \
            K04, K08, K12, K16, K20, K24,      K28, K32, K36, K40, K44, K48, K52, \
            K05, K09, K13, K17, K21, K25, K65, K29, K33, K37, K41, K45, K49, K53, \
            K06, K10, K14, K18, K22, K26, K61, K30, K34, K38, K42, K46, K50, K54, \
            K01, K02,      K58, K59, K60, K66, K62, K63, K64,      K55, K56, K57  \
  ) \
  { \
    {  K00,  K03,  K07,  K11,  K15,  K19,  K23,  K65,  K58},  \
    {  K01,  K04,  K08,  K12,  K16,  K20,  K24,  K66,  K59},  \
    {  K27,  K31,  K35,  K39,  K43,  K47,  K51,  K55,  K62},  \
    {  K28,  K32,  K36,  K40,  K44,  K48,  K52,  K56,  K63},  \
    {  K02,  K05,  K09,  K13,  K17,  K21,  K25,KC_NO,  K60},  \
    {KC_NO,  K06,  K10,  K14,  K18,  K22,  K26,KC_NO,  K61},  \
    {  K29,  K33,  K37,  K41,  K45,  K49,  K53,  K57,  K64},  \
    {  K30,  K34,  K38,  K42,  K46,  K50,  K54,KC_NO,KC_NO}   \
  }
