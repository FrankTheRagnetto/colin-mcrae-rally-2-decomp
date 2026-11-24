typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800D7290;

void func_800BB678(void *arg0) {
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;

    var_v1 = func_80015140(M2C_FIELD(arg0, u8 *, 0) << 0x10, M2C_FIELD(&D_800D7290, s32 *, 0)) >> 0x10;
    if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
    }
    M2C_FIELD(arg0, u8 *, 0) = (u8) var_v1;
    var_v1_2 = func_80015140(M2C_FIELD(arg0, u8 *, 1) << 0x10, M2C_FIELD(&D_800D7290, s32 *, 4)) >> 0x10;
    if (var_v1_2 >= 0x100) {
        var_v1_2 = 0xFF;
    }
    M2C_FIELD(arg0, u8 *, 1) = (u8) var_v1_2;
    var_v1_3 = func_80015140(M2C_FIELD(arg0, u8 *, 2) << 0x10, M2C_FIELD(&D_800D7290, s32 *, 8)) >> 0x10;
    if (var_v1_3 >= 0x100) {
        var_v1_3 = 0xFF;
    }
    M2C_FIELD(arg0, u8 *, 2) = (u8) var_v1_3;
}
