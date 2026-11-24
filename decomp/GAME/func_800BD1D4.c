typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D72A4;
extern s32 D_800D72A8;

void func_800BD1D4(void) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = func_80047524();
    temp_s1 = func_80047524();
    if (temp_s0 != 0) {
        D_800D72A4 = func_80036570(temp_s0, 0);
        D_800D72A8 = func_80036570(temp_s1, 0);
        func_80036520(D_800D72A4, 2);
        func_80036520(D_800D72A8, 2);
    }
}
