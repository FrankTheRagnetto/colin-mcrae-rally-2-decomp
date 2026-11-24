typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800D6A4C;
extern s32 D_800D6A9C;
extern s16 D_800D6AA8;
extern M2C_UNK D_800D8EA8;
extern M2C_UNK D_800D8ED8;
extern M2C_UNK D_800D8EE8;

void func_8005D7EC(s32 arg0) {
    if (arg0 != 0) {
        M2C_FIELD(&D_800D8ED8, s32 *, 0) = 0;
        M2C_FIELD(&D_800D8ED8, s32 *, 4) = 0x10000;
        M2C_FIELD(&D_800D8ED8, s32 *, 8) = 0;
        M2C_FIELD(&D_800D8EE8, s32 *, 0) = (s32) M2C_FIELD(&D_800D6A4C, s32 *, 0);
        M2C_FIELD(&D_800D8EE8, s32 *, 4) = (s32) (M2C_FIELD(&D_800D6A4C, s32 *, 4) + D_800D6A9C);
        M2C_FIELD(&D_800D8EE8, s32 *, 8) = (s32) M2C_FIELD(&D_800D6A4C, s32 *, 8);
        func_80016300(&D_800D8EA8, &D_800D8ED8, D_800D6AA8, D_800D6A9C);
        func_80015288(arg0, &D_800D8EE8, &D_800D8EA8);
    }
}
