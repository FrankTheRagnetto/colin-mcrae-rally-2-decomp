typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern void *D_800DB1CC;

void func_8008DEFC(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x768);
    M2C_FIELD(arg0, s8 *, 0xABE) = 1;
    if (temp_v1 == 0) {
        temp_v0 = func_80015140(M2C_FIELD(arg0, s32 *, 0x758), M2C_FIELD(arg0, s32 *, 0x794));
        M2C_FIELD(arg0, s32 *, 0x820) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x81C) = temp_v0;
    } else {
        if (temp_v1 == 0x10000) {
            var_v0 = func_80015140(M2C_FIELD(arg0, s32 *, 0x758), M2C_FIELD(arg0, s32 *, 0x794));
            M2C_FIELD(arg0, s32 *, 0x818) = var_v0;
        } else {
            var_v0 = func_80015140(M2C_FIELD(arg0, s32 *, 0x758), M2C_FIELD(arg0, s32 *, 0x794));
            M2C_FIELD(arg0, s32 *, 0x820) = var_v0;
            M2C_FIELD(arg0, s32 *, 0x81C) = var_v0;
            M2C_FIELD(arg0, s32 *, 0x818) = var_v0;
        }
        M2C_FIELD(arg0, s32 *, 0x814) = var_v0;
    }
    M2C_FIELD(arg0, s8 *, 0xABF) = 0xA;
    M2C_FIELD(D_800DB1CC, s32 *, 0x760) = (s32) M2C_FIELD(D_800DB1CC, s32 *, 0x758);
}
