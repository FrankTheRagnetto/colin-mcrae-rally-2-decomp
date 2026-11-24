typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_8004A06C;
extern M2C_UNK D_8005A05C;

void func_80039DEC(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = arg0;
    if (var_v1 < 0) {
        var_v1 = 0;
    }
    if (var_v1 > 0x10000) {
        var_v1 = 0x10000;
    }
    D_8004A06C = var_v1;
    M2C_FIELD(&D_8005A05C, s32 *, 0) = 0x2C0;
    M2C_FIELD(&D_8005A05C, s32 *, 0x18) = 1;
    temp_v0 = (s32) (var_v1 * 0x3FFF) >> 0x10;
    M2C_FIELD(&D_8005A05C, s16 *, 0x10) = (s16) temp_v0;
    M2C_FIELD(&D_8005A05C, s16 *, 0x12) = (s16) temp_v0;
    func_8003A900(&D_8005A05C);
}
