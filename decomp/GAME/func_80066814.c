typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D6B54;
extern s32 D_800D6B58;
extern s32 D_800DA1F4;
extern s32 D_800DA1F8;

void func_80066814(void) {
    D_800DA1F4 = func_80036570(func_80047524(), 0);
    D_800DA1F8 = func_80036570(func_80047524(), 0);
    D_800D6B58 = func_80036570(func_80047524(), 0);
    D_800D6B54 = func_80036570(func_80047524(), 0);
}
