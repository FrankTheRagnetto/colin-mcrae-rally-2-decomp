typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern u32 D_80058598;

s32 func_80034280(void) {
    u32 temp_v0;

    temp_v0 = (D_80058598 * 0x41C64E6D) + 0x3039;
    D_80058598 = temp_v0;
    return (temp_v0 >> 0x10) & 0x7FFF;
}
