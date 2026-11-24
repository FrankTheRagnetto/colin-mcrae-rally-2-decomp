typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80078D08;
extern M2C_UNK D_8009BCCC;
extern M2C_UNK D_8009C06C;
extern M2C_UNK D_8009C23C;
extern M2C_UNK D_8009C40C;
extern M2C_UNK D_8009C5DC;
extern M2C_UNK D_8009C7AC;
extern M2C_UNK D_8009C97C;
extern M2C_UNK func_800861C0;

void func_80086EE8(void) {
    func_80046734(&D_8009C06C, 0, 0x16, 0, &D_8009BCCC, 0, 1, 0, 1);
    func_80046D4C(&D_8009C06C, 0, 0x14B, &D_8009C23C, 0, -1);
    func_80046D4C(&D_8009C06C, 0, 0x14C, &D_8009C40C, 0, -1);
    func_80046D4C(&D_8009C06C, 0, 0x14D, &D_8009C5DC, 0, -1);
    func_80046D4C(&D_8009C06C, 0, 0x14E, &D_8009C7AC, 0, -1);
    func_80046D4C(&D_8009C06C, 0, 0x14F, &D_8009C97C, 0, -1);
    func_800470E4(&D_8009C06C, &func_800861C0 + 0x10, 0, &D_80078D08, 0);
    func_800470FC(&D_8009C06C, 0);
}
