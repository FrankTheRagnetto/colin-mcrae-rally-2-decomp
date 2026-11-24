typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s8 D_800D6B48;
extern s8 D_800D6B49;
extern s32 D_800D6B4C;
extern M2C_UNK *D_800D6B50;
extern M2C_UNK D_800D91AC;
extern s8 D_800DA26E;

void func_800666DC(void) {
    D_800D6B48 = 1;
    D_800DA26E = 0;
    D_800D6B49 = 1;
    D_800D6B4C = 0;
    D_800D6B50 = &D_800D91AC;
    func_800472A0();
    func_80039DEC(0);
}
