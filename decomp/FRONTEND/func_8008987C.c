typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80079B1C;
extern M2C_UNK D_80086208;
extern M2C_UNK D_8009C06C;
extern M2C_UNK D_8009C23C;

void func_8008987C(void) {
    func_80046734(&D_8009C23C, 0, 0x14B, 0, &D_8009C06C, 0, 1, 0, 0);
    func_80046B24(&D_8009C23C, 0, -1, &D_80086208, -1);
    func_800470E4(&D_8009C23C, 0, 0, &D_80079B1C, 0);
    func_800470FC(&D_8009C23C, 0);
    M2C_FIELD(&D_8009C23C, s32 *, 0x14) = (s32) (M2C_FIELD(&D_8009C23C, s32 *, 0x14) | 0x80000);
}
