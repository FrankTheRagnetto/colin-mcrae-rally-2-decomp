typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern void *D_800DB1CC;

void func_80080DA8(void) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(D_800DB1CC, s32 *, 0x748) - func_80015140(M2C_FIELD(D_800DB1CC, s8 *, 0xABD) << 0x10, 0x3333);
    if ((M2C_FIELD(D_800DB1CC, s32 *, 0x758) - temp_a0) >= -0x28F) {
        M2C_FIELD(D_800DB1CC, s32 *, 0x758) = temp_a0;
        if (M2C_FIELD(D_800DB1CC, s8 *, 0xABD) == 0) {
            M2C_FIELD(D_800DB1CC, s8 *, 0xABD) = 3;
            goto block_3;
        }
        goto block_4;
    }
block_3:
    if (M2C_FIELD(D_800DB1CC, s8 *, 0xABD) != 0) {
block_4:
        M2C_FIELD(D_800DB1CC, s8 *, 0xABD) = (s8) ((u8) M2C_FIELD(D_800DB1CC, s8 *, 0xABD) - 1);
    }
    M2C_FIELD(D_800DB1CC, s32 *, 0x760) = (s32) M2C_FIELD(D_800DB1CC, s32 *, 0x758);
}
