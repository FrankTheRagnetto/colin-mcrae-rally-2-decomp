typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800DA2A0;
extern u8 D_800DA2A4;
extern s32 D_800DA2AC;

void func_8006DFE4(void) {
    D_800DA2AC = 1;
    func_80028120();
    if (D_800DA2A4 == 0) {
        func_80034124(D_800DA2A0);
        D_800DA2A4 = 1;
    }
}
