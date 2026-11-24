typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800775F4;
extern M2C_UNK D_800840C0;
extern M2C_UNK D_800862C8;
extern M2C_UNK D_8008AB10;
extern M2C_UNK D_800A1B08;
extern M2C_UNK D_800A1EA8;
extern M2C_UNK D_800A2078;

void func_8008B190(void) {
    func_80046734(&D_800A1B08, 0, 0x58, 0, func_80089F24(), 0, 1, 1, 1);
    func_80046D4C(&D_800A1B08, 0, 0xC, &D_800A2078, 0, 0);
    func_80046D4C(&D_800A1B08, 0, 0xCB, &D_800A1EA8, 0, 0);
    func_80046B24(&D_800A1B08, 0, 0x10, &D_8008AB10, -1);
    func_800470E4(&D_800A1B08, 0, &D_800862C8, &D_800775F4, &D_800840C0);
    func_800470FC(&D_800A1B08, 0);
}
