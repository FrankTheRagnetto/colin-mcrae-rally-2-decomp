typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

void func_8007D28C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_v0) {
    case 4:
    case 5:
    case 6:
        func_80078240();
        return;
    case 3:
        func_8007A874();
        return;
    case 1:
    case 2:
    case 10:
        func_800772C4();
        return;
    case 7:
        func_8007E0D0();
        /* fallthrough */
    default:
        return;
    }
}
