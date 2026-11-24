typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800E9358;

s8 func_800E8DBC(s32 arg0) {
    return ((union { u8 s[136]; struct { u8 p[130]; s8 f; } x; } *)&D_800E9358)[arg0].x.f;
}
