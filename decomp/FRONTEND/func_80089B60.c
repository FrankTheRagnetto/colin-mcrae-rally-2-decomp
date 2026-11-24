typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80074D0C;
extern M2C_UNK D_8009B75C;
extern M2C_UNK D_8009EA1C;
extern M2C_UNK func_800852D0;

void func_80089B60(void) {
    func_80046734(&D_8009EA1C, 0, 0x34, 0, &D_8009B75C, 0, 1, 0, 0);
    func_80046B24(&D_8009EA1C, 0, -1, 0, 0);
    func_800470E4(&D_8009EA1C, &func_800852D0, 0, &D_80074D0C, 0);
    func_800470FC(&D_8009EA1C, 0);
}
