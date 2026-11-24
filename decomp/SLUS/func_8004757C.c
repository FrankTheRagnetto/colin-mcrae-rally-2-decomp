typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_8005AD7C;
extern s32 D_8005AD80;
extern s32 D_8005AD84;

s32 func_8004757C(void) {
    s32 temp_v0;

    temp_v0 = func_80025EDC();
    D_8005AD7C = temp_v0;
    D_8005AD80 = temp_v0;
    D_8005AD84 = D_8005AD7C + func_80025F64();
    return temp_v0;
}
