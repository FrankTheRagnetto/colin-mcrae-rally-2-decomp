typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

void func_800D6670(void *arg0, void *arg1) {
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v0;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_v0 = func_8001FC84(func_80020E7C() & 0xFF);
        temp_a1 = M2C_FIELD(temp_v0, s32 *, 0);
        temp_s2 = M2C_FIELD(temp_v0, s32 *, 4);
        if (temp_a1 == 0) {
            M2C_FIELD(arg0, s8 *, 0x2E) = 0;
            M2C_FIELD(arg0, s8 *, 0x2D) = 0;
            M2C_FIELD(arg0, s8 *, 0x2C) = 0;
        }
        if (temp_s2 == 0) {
            M2C_FIELD(arg1, s8 *, 0x2E) = 0;
            M2C_FIELD(arg1, s8 *, 0x2D) = 0;
            M2C_FIELD(arg1, s8 *, 0x2C) = 0;
        }
        func_800D4CE8(arg0, temp_a1);
        func_800D4CE8(arg1, temp_s2);
        if ((M2C_FIELD(arg0, s32 *, 0x14) == 0) && (M2C_FIELD(arg0, s32 *, 0x18) == 0) && ((M2C_FIELD(arg1, s32 *, 0x14) != 0) || (M2C_FIELD(arg1, s32 *, 0x18) != 0))) {
            temp_v0_2 = M2C_FIELD(arg1, s32 *, 0x18);
            M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_2;
            M2C_FIELD(arg0, s32 *, 0x14) = temp_v0_2;
            return;
        }
        if ((M2C_FIELD(arg1, s32 *, 0x14) == 0) && (M2C_FIELD(arg1, s32 *, 0x18) == 0) && ((M2C_FIELD(arg0, s32 *, 0x14) != 0) || (M2C_FIELD(arg0, s32 *, 0x18) != 0))) {
            temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x18);
            M2C_FIELD(arg1, s32 *, 0x18) = temp_v0_3;
            M2C_FIELD(arg1, s32 *, 0x14) = temp_v0_3;
        }
    }
}
