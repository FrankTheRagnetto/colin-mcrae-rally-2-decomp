typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800E2BAC;
extern M2C_UNK D_800E2BF4;
extern M2C_UNK D_800E2C00;

void func_800CDE6C(void *arg0, s32 arg1) {
    s8 temp_a0;

    if (D_800E2BAC != 0) {
        *((__typeof__(D_800E2C00) *)((char *)(__typeof__(D_800E2C00) *)((char *)&D_800E2C00 + (M2C_FIELD(arg0, s8 *, 0xABA) * 0x18)))) = arg1;
        ((union { u8 s[24]; struct { u8 p[20]; s16 f; } x; } *)&D_800E2C00)[M2C_FIELD(arg0, s8 *, 0xABA)].x.f = (s16) arg1;
        temp_a0 = M2C_FIELD(arg0, s8 *, 0xABA);
        if (temp_a0 < 2) {
            *((__typeof__(D_800E2BF4) *)((char *)(__typeof__(D_800E2BF4) *)((char *)&D_800E2BF4 + (temp_a0 * 4)))) = 0;
        }
    }
}
