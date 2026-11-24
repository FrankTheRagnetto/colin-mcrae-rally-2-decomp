typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80061FCC;
extern M2C_UNK D_80062A1C;
extern M2C_UNK D_80066E04;
extern M2C_UNK D_800670D8;
extern M2C_UNK D_8006715C;
extern M2C_UNK D_800671DC;
extern M2C_UNK D_8006721C;
extern s8 D_800D6B48;
extern s8 D_800D6B78;
extern M2C_UNK D_800D91AC;
extern M2C_UNK D_800D971C;
extern M2C_UNK D_800DA02C;

void func_80066004(void) {
    D_800D6B48 = 0;
    D_800D6B78 = 0;
    func_80065EE8();
    func_80046734(&D_800DA02C, 0, 0, 0, &D_800D91AC, 0, 1, 0, 1);
    func_80046B24(&D_800DA02C, 0, 0xA8, &D_80066E04, 3);
    func_80046C38(&D_800DA02C, 0, 0xAA, 0, -1);
    func_800470E4(&D_800DA02C, &D_8006721C, NULL, &D_80061FCC, 0);
    func_800470FC(&D_800DA02C, 0);
    func_8006384C();
    func_80063A50();
    func_800649B8();
    func_80065764();
    func_80065D64();
    func_80046734(&D_800D971C, 0, 0, 0, &D_800D91AC, 0, 1, 0, 1);
    func_8004681C(&D_800D971C, 0, 0x3C, 2, 0, 0, 0, 0, 0);
    func_80046B24(&D_800D971C, 0, 0x3B, &D_8006715C, -1);
    func_800470E4(&D_800D971C, &D_800670D8, &D_800671DC, &D_80062A1C, 0);
    func_800470FC(&D_800D971C, 0);
}
