typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800DE5D0;

s32 func_800920A0(s32 arg0) {
    return M2C_FIELD(*((__typeof__(D_800DE5D0) *)((char *)(__typeof__(D_800DE5D0) *)((char *)&D_800DE5D0 + (arg0 * 4)))), u8 *, 0xB1D) != 0;
}
