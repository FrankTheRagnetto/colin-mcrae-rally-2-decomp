typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_80034678;
extern s32 D_80049A84;
extern s32 D_80049A88;
extern s32 func_80034674;

void func_80027408(s32 arg0, s32 arg1) {
    if (D_80049A84 == 0) {
        func_80034674 = arg0;
        D_80034678 = arg1;
        D_80049A88 = 0;
    }
}
