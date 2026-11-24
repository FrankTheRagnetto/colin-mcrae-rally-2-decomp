typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_8005A99C;
extern s32 D_8005A9A0;
extern s32 D_8005A9A4;
extern s32 D_8005A9A8;

s32 func_80043DF4(void) {
    return D_8005A99C + (D_8005A9A0 * 2) + (D_8005A9A4 * 4) + (D_8005A9A8 * 8);
}
