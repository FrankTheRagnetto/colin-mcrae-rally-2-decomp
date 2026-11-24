typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_80049E30;

s32 func_80030D38(void) {
    s32 temp_s0;

    temp_s0 = D_80049E30;
    func_8003E398(&D_80049E30, temp_s0);
    return temp_s0;
}
