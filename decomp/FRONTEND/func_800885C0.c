typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8006CF9C;
extern M2C_UNK D_800820FC;
extern M2C_UNK D_800846D0;
extern M2C_UNK D_80084754;
extern M2C_UNK D_80084864;
extern M2C_UNK D_800A054C;

void func_800885C0(void) {
    func_80046734(&D_800A054C, 0, 0x22, 0, 0, 0, 1, 0, 1);
    func_800469A0(&D_800A054C, 0, -1, 0xA, 0, 1, 0, &D_800820FC, 0);
    func_800469A0(&D_800A054C, 0, -1, 0xA, 0, 1, 0, &D_800820FC, 1);
    func_800469A0(&D_800A054C, 0, -1, 0xA, 0, 1, 0, &D_800820FC, 2);
    func_800470E4(&D_800A054C, &D_800846D0, &D_80084864, &D_8006CF9C, &D_80084754);
    func_800470FC(&D_800A054C, 0);
}
