typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8006FE0C;
extern M2C_UNK D_80084C48;
extern M2C_UNK D_80084CF0;
extern M2C_UNK D_800A01AC;
extern M2C_UNK D_800A159C;

void func_80089CB4(void) {
    func_80046734(&D_800A159C, 0, 0x33, 0, &D_800A01AC, 0, 1, 0, 1);
    func_8004681C(&D_800A159C, 0, 0x88, 2, 0, 0, 0, &D_80084CF0, 0);
    func_800470E4(&D_800A159C, &D_80084C48, 0, &D_8006FE0C, 0);
    func_800470FC(&D_800A159C, 0);
}
