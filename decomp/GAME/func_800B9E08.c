typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
s32 func_800B9E08(void *arg0) {
    if ((arg0 != NULL) && (M2C_FIELD(arg0, u8 *, 1) != 0)) {
        M2C_FIELD(arg0, u8 *, 1) = 0U;
        M2C_FIELD(arg0, s8 *, 2) = 0;
        M2C_FIELD(arg0, s8 *, 5) = 0;
        return 1;
    }
    return 0;
}
