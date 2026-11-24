typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern void *D_800DB1CC;

void func_8008527C(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;

    temp_a0 = M2C_FIELD(D_800DB1CC, s32 *, 0x814);
    temp_v1 = M2C_FIELD(D_800DB1CC, s32 *, 0x818);
    var_v0 = temp_a0 - temp_v1;
    if (var_v0 < 0) {
        var_v0 = -var_v0;
    }
    if (var_v0 >= 0x199A) {
        temp_v0 = func_80015140(temp_a0 + temp_v1, 0x8000);
        M2C_FIELD(D_800DB1CC, s32 *, 0x818) = temp_v0;
        M2C_FIELD(D_800DB1CC, s32 *, 0x814) = temp_v0;
    }
    temp_a0_2 = M2C_FIELD(D_800DB1CC, s32 *, 0x81C);
    temp_v1_2 = M2C_FIELD(D_800DB1CC, s32 *, 0x820);
    var_v0_2 = temp_a0_2 - temp_v1_2;
    if (var_v0_2 < 0) {
        var_v0_2 = -var_v0_2;
    }
    if (var_v0_2 >= 0x199A) {
        temp_v0_2 = func_80015140(temp_a0_2 + temp_v1_2, 0x8000);
        M2C_FIELD(D_800DB1CC, s32 *, 0x820) = temp_v0_2;
        M2C_FIELD(D_800DB1CC, s32 *, 0x81C) = temp_v0_2;
    }
}
