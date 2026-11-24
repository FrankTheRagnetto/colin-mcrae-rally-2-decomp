typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800DA3DC;

s32 func_8006F90C(s32 arg0) {
    s32 var_v0;

    var_v0 = -1;
    if (arg0 != -1) {
        var_v0 = ((struct { u8 p[8]; s32 a[1]; } *)&D_800DA3DC)->a[arg0];
    }
    return var_v0;
}
