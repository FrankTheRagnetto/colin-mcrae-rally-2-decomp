typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8004FDFC;

s32 func_800641D0(s32 arg0) {
    return *((__typeof__(D_8004FDFC) *)((char *)(__typeof__(D_8004FDFC) *)((char *)&D_8004FDFC + (arg0 * 4))));
}
