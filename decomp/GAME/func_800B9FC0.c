typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern u8 D_800D7248;
extern M2C_UNK D_800E154C;
extern M2C_UNK func_800B9E64;

s32 func_800B9FC0(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    if (D_800D7248 == 0) {
        func_8003408C(&func_800B9E64, 0);
        D_800D7248 = 1;
    }
    temp_v0 = *((__typeof__(D_800E154C) *)((char *)(__typeof__(D_800E154C) *)((char *)&D_800E154C + (arg0 * 4))));
    if (temp_v0 != 0) {
        var_s0 = temp_v0;
        func_800B9F0C(temp_v0, 1);
    }
    return var_s0;
}
