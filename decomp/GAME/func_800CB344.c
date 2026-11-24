typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800E2670;

void func_800CB344(void) {
    M2C_FIELD(&D_800E2670, s32 *, 0) = func_80036570(func_80047524(), 0);
    M2C_FIELD(&D_800E2670, s32 *, 4) = func_80036570(func_80047524(), 0);
    func_80036520(M2C_FIELD(&D_800E2670, s32 *, 0), 1);
    func_80036520(M2C_FIELD(&D_800E2670, s32 *, 4), 1);
    M2C_FIELD(&D_800E2670, s32 *, 8) = (s32) M2C_FIELD(&D_800E2670, s32 *, 0);
}
