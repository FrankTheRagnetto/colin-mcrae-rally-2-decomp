typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800DB634;

void func_80099958(void *arg0) {
    s32 temp_a1;
    s32 temp_s1;
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    temp_s1 = *((__typeof__(D_800DB634) *)((char *)(__typeof__(D_800DB634) *)((char *)&D_800DB634 + (M2C_FIELD(arg0, s8 *, 0xABA) * 4))));
    do {
        temp_v0 = temp_s1 + var_s0;
        temp_a1 = var_s0;
        var_s0 += 1;
        func_8006FA4C(arg0, temp_a1, M2C_FIELD(temp_v0, u8 *, 0x47B));
    } while (var_s0 < 4);
}
