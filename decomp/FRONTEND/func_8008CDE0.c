typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_80098854;

void func_8008CDE0(s32 arg0) {
    if (arg0 == 1) {
        if ((func_80030B5C() >= 2U) && !(func_8001CB10() & 0xFF)) {
            if ((func_8001CAE0() & 0xFF) != 4) {
                D_80098854 = arg0;
                return;
            }
            goto block_5;
        }
        goto block_6;
    }
block_5:
block_6:
    D_80098854 = 0;
}
