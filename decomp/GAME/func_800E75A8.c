typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800E73AC;

void func_800E75A8(void) {
    M2C_FIELD(&D_800E73AC, s8 *, 0) = func_8007F108();
    M2C_FIELD(&D_800E73AC, s8 *, 1) = 1;
}
