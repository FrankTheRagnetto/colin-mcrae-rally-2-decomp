typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D724C;

void func_800FBD88(void) {
    s32 var_s0;

    func_800FB6FC();
    var_s0 = 0;
    func_80047200(D_800D724C);
loop_1:
    if (var_s0 < (func_80021120() & 0xFF)) {
        func_8009A1B4(var_s0 & 0xFF, func_800D080C(var_s0), 0);
        var_s0 += 1;
        goto loop_1;
    }
    func_80024C28();
}
