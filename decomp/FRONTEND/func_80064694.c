typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8004FE04;

s32 func_80064694(s32 arg0) {
    return *((__typeof__(D_8004FE04) *)((char *)(__typeof__(D_8004FE04) *)((char *)&D_8004FE04 + (arg0 * 4))));
}
