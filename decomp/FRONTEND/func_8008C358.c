typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8006AF90;
extern M2C_UNK D_8008A930;
extern M2C_UNK D_8008C7BC;
extern M2C_UNK D_800A1B08;
extern M2C_UNK D_800A1EA8;
extern M2C_UNK func_8008AA0C;

void func_8008C358(s32 arg0) {
    void *temp_s0;

    func_80046734(&D_800A1EA8, 0, 0x1C, 0, &D_800A1B08, 0, 1, 0, 0);
    temp_s0 = &func_8008AA0C + 0x68;
    func_80046B24(&D_800A1EA8, 0, 0x188, temp_s0, -1);
    func_80046B24(&D_800A1EA8, 0, 0x189, temp_s0, -1);
    func_800470E4(&D_800A1EA8, &D_8008A930, &D_8008C7BC, &D_8006AF90, 0);
    func_800470FC(&D_800A1EA8, 0);
    M2C_FIELD(&D_800A1EA8, s8 *, 0x1B) = (s8) (arg0 - 1);
}
