typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_8005A9AC;
extern s32 D_8005A9B0;
extern s32 D_8005A9B4;
extern s32 D_8005A9B8;

s32 func_80043E30(void) {
    return D_8005A9AC + (D_8005A9B0 * 2) + (D_8005A9B4 * 4) + (D_8005A9B8 * 8);
}
