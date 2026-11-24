typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800E2580;

void func_800C9E78(s32 arg0) {
    s32 temp_s0;
    s32 var_s1;

    if (func_80021298() & 0xFF) {
        temp_s0 = arg0 & 0xFF;
        func_800C974C(D_800E2580, 0, -1, temp_s0);
        func_800C974C(1 - D_800E2580, 2, 0, temp_s0);
        return;
    }
    var_s1 = 0;
loop_3:
    if (var_s1 < (func_8007F108() & 0xFF)) {
        func_800C974C(var_s1, 0, 0, arg0 & 0xFF);
        var_s1 += 1;
        goto loop_3;
    }
}
