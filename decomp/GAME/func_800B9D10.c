typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
s32 func_800B9D10(void *arg0) {
    u16 *temp_v1;

    if ((arg0 != NULL) && (M2C_FIELD(arg0, u8 *, 3) != 0)) {
        M2C_FIELD(arg0, u8 *, 3) = 0U;
        if (M2C_FIELD(arg0, u8 *, 4) != 0) {
            temp_v1 = (M2C_FIELD(arg0, s16 *, 0x2C) * 2) + M2C_FIELD(arg0, s32 *, 0x30);
            *temp_v1 += 1;
            M2C_FIELD(arg0, s16 *, 0x2C) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x2C) + 1);
        }
        M2C_FIELD(arg0, u8 *, 4) = 0U;
        M2C_FIELD(arg0, s8 *, 6) = 0;
        return 1;
    }
    return 0;
}
