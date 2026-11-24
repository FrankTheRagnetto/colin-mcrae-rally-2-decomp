typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8006B3BC;
extern M2C_UNK D_800841E4;
extern M2C_UNK D_80084344;
extern M2C_UNK D_8009CD1C;
extern M2C_UNK D_8009EF8C;
extern M2C_UNK D_8009F89C;

void func_80087DB4(void) {
    func_80046734(&D_8009F89C, 0, 0x1D, 0, &D_8009CD1C, 0, 1, 0, 1);
    func_80046D4C(&D_8009F89C, 0, 0xB9, &D_8009EF8C, &D_80084344, 0);
    func_80046D4C(&D_8009F89C, 0, 0xBA, &D_8009EF8C, &D_80084344, 0);
    func_80046D4C(&D_8009F89C, 0, 0xBB, &D_8009EF8C, &D_80084344, 0);
    func_800470E4(&D_8009F89C, &D_800841E4, 0, &D_8006B3BC, 0);
    func_800470FC(&D_8009F89C, 0);
}
