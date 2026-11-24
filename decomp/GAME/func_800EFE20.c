typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D6FE4;
extern s8 D_800D6FE8;
extern s32 D_800D6FF0;
extern s32 D_800D6FF4;
extern s32 D_800D6FF8;

s32 func_800EFE20(void) {
    s32 temp_a0;
    s32 var_s0;

    if (D_800D6FE4 != 0) {
        func_80027300(D_800D6FE4);
    }
    if (D_800D6FF0 != 0) {
        func_80027300(D_800D6FF0);
    }
    if (D_800D6FF4 != 0) {
        func_80027300(D_800D6FF4);
    }
    var_s0 = 0;
    if (D_800D6FF8 != 0) {
        do {
            temp_a0 = *(s32 *)((var_s0 * 4) + D_800D6FF8);
            if (temp_a0 != 0) {
                func_80027300(temp_a0);
            }
            var_s0 += 1;
        } while (var_s0 < 3);
        if (D_800D6FF8 != 0) {
            func_80027300(D_800D6FF8);
        }
    }
    D_800D6FE8 = 0;
    return 1;
}
