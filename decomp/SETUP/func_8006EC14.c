typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_80077C24;
extern s32 D_80077C28;
extern s32 D_80077C2C;
extern s32 D_80077C30;
extern s8 D_80077C40;
extern s32 D_80077C44;
extern M2C_UNK D_8007C1DC;
extern s32 D_8007C1FC;

void func_8006EC14(void) {
    D_80077C24 = 2;
    D_80077C28 = 0;
    D_80077C2C = 0;
    D_80077C30 = 0;
    D_8007C1FC = 0;
    D_80077C40 = 0;
    D_80077C44 = 0;
    M2C_FIELD(&D_8007C1DC, s32 *, 0) = 0;
    M2C_FIELD(&D_8007C1DC, s32 *, 4) = 3;
    M2C_FIELD(&D_8007C1DC, s32 *, 8) = 3;
    M2C_FIELD(&D_8007C1DC, s32 *, 0xC) = 3;
    M2C_FIELD(&D_8007C1DC, s32 *, 0x10) = 3;
    M2C_FIELD(&D_8007C1DC, s32 *, 0x14) = 3;
    func_80073B94(8);
}
