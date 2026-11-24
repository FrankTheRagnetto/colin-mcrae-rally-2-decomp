typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8006F650;
extern M2C_UNK D_8008AC14;
extern M2C_UNK D_8008ACA0;
extern M2C_UNK D_8008AF74;
extern M2C_UNK D_800A2D28;
extern M2C_UNK D_800A3298;

void func_8008C5B8(void) {
    func_80046734(&D_800A3298, 0, 0x97, 0, &D_800A2D28, 0, 1, 0, 1);
    func_8004681C(&D_800A3298, 0, 0x88, 2, 0, 0, 0, &D_8008AF74, 0x88);
    func_800470E4(&D_800A3298, &D_8008AC14, &D_8008ACA0, &D_8006F650, 0);
    func_800470FC(&D_800A3298, 0);
}
