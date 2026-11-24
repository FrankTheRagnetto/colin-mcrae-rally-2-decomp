typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

void func_8007D460(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_v0) {
    case 3:
        func_80078EF4();
        return;
    case 2:
        func_80077C44();
        return;
    case 1:
    case 10:
        func_80077CAC();
        return;
    case 7:
        func_8007EB10();
        /* fallthrough */
    default:
        return;
    }
}
