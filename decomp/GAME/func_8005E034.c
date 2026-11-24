typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800D8F2C;

void func_8005E034(s32 arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    s32 temp_s0;
    void *temp_v1;

    temp_v1 = func_8009971C();
    temp_s0 = *((__typeof__(D_800D8F2C) *)((char *)(__typeof__(D_800D8F2C) *)((char *)&D_800D8F2C + (arg0 * 4))));
    if (arg1 != NULL) {
        *arg1 = (s32) (M2C_FIELD((temp_s0 + arg3), u8 *, 0x90) << 0x10) / 256;
    }
    if (arg2 != NULL) {
        *arg2 = (s32) (M2C_FIELD((temp_s0 + arg3), u8 *, 0x94) << 0x10) / 256;
    }
    if (M2C_FIELD(temp_v1, u8 *, 0x482) != 0) {
        *arg1 = func_80015140(*arg1, 0x8000);
        *arg2 = func_80015140(*arg2, 0x8000);
    }
}
