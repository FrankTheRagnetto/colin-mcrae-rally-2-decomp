typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8009B92C;
extern M2C_UNK D_8009BAFC;
extern M2C_UNK func_800682A8;

void func_80089248(void) {
    func_80046734(&D_8009BAFC, 0, 0x1A, 0, &D_8009B92C, 0, 1, 0, 1);
    func_800470E4(&D_8009BAFC, 0, 0, &func_800682A8 + 0x204, 0);
    func_800470FC(&D_8009BAFC, 0);
}
