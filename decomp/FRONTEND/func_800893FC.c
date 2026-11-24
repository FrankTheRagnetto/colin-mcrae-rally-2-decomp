typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8007744C;
extern M2C_UNK D_80086144;
extern M2C_UNK D_8009CD1C;
extern M2C_UNK D_8009CEEC;
extern M2C_UNK D_8009F4FC;

void func_800893FC(void) {
    func_80046734(&D_8009CEEC, 0, 0xC3, 0, &D_8009CD1C, 0, 1, 0, 1);
    func_80046D4C(&D_8009CEEC, 0, 0x95, &D_8009F4FC, 0, 0);
    func_80046B24(&D_8009CEEC, 0, 0x8A, &D_80086144, -1);
    func_800470E4(&D_8009CEEC, 0, 0, &D_8007744C, 0);
    func_800470FC(&D_8009CEEC, 0);
}
