typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800DE5D0;

void func_800A9480(void *arg0) {
    s16 temp_v0;
    void *temp_a0;

    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + ((s32) M2C_FIELD(arg0, s32 *, 0x34) / 2));
    if (M2C_FIELD(arg0, s32 *, 0x34) > 0x18000) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0x18000;
    }
    temp_v0 = M2C_FIELD(arg0, s16 *, 0x44);
    if (temp_v0 <= 0) {
        temp_a0 = *((__typeof__(D_800DE5D0) *)((char *)(__typeof__(D_800DE5D0) *)((char *)&D_800DE5D0 + (temp_v0 * 4))));
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + M2C_FIELD(temp_a0, s32 *, 0x2A4));
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + M2C_FIELD(temp_a0, s32 *, 0x2A8));
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + M2C_FIELD(temp_a0, s32 *, 0x2AC));
    }
}
