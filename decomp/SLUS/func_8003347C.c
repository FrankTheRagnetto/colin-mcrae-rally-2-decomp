typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s8 D_80049E94;
extern s32 D_80049E98;
extern s32 D_80049E9C;
extern s32 D_80049EA0;
extern s32 D_80049EA4;
extern s8 D_80049EA8;
extern s32 D_80058378;
extern s32 D_8005837C;
extern M2C_UNK D_800583C0;
extern s32 D_800584D0;
extern s32 D_800584D4;
extern s32 D_800584DC;

s32 func_8003347C(void) {
    D_80049E94 = 0;
    D_80049E98 = 0;
    D_80049E9C = 0;
    D_80049EA0 = 0;
    D_80049EA4 = 0;
    D_80049EA8 = 0;
    M2C_FIELD(&D_800583C0, s32 *, 0) = 0;
    M2C_FIELD(&D_800583C0, s32 *, 4) = 0;
    D_80058378 = 0;
    D_800584D0 = 0;
    D_800584DC = 0;
    D_800584D4 = 0;
    D_8005837C = 0;
    return 1;
}
