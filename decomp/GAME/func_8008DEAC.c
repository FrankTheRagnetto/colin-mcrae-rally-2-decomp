typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D6EC0;
extern s32 D_800D6EC4;

void func_8008DEAC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_80015140(0xA3D, arg0);
    D_800D6EC4 = temp_v0;
    if (temp_v0 <= 0x9998) {
        D_800D6EC4 = 0x9999;
    }
    D_800D6EC0 = func_80015190(D_800D6EC4);
}
