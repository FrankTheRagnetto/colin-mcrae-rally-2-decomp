typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern u8 D_80077C40;
extern s32 D_80077C44;

void func_8006F0B4(void) {
    if ((D_80077C40 != 0) && ((u32) (func_80047408() - D_80077C44) >= 0x1EU)) {
        D_80077C40 = 0;
        D_80077C44 = 0;
    }
}
