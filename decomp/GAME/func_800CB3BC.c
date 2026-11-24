typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern u8 D_800E266C;

void func_800CB3BC(void) {
    u8 temp_v0;

    temp_v0 = D_800E266C + 1;
    D_800E266C = temp_v0;
    if ((u32) (temp_v0 & 0xFF) >= 7U) {
        D_800E266C = 7;
    }
}
