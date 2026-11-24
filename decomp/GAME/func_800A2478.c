typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D7064;
extern s16 D_800DE5CC;
extern s16 D_800DE828;
extern M2C_UNK D_800DE840;
extern M2C_UNK D_800DE84C;
extern M2C_UNK D_800DE858;
extern s16 D_800DE864;

void func_800A2478(void) {
    func_800A0B00();
    func_800B8AC8();
    func_800B9D80();
    func_8008BCEC(D_800D7064, &D_800DE84C, D_800DE828);
    if (D_800DE5CC > 0) {
        func_800ED260(D_800D7064, &D_800DE840, D_800DE5CC);
    }
    func_8009E490(D_800D7064, &D_800DE858, D_800DE864);
    func_800BE530();
    func_8008BB90(D_800D7064, &D_800DE84C, D_800DE828);
    if (D_800DE5CC > 0) {
        func_800ED940(D_800D7064, &D_800DE840, D_800DE5CC);
    }
    func_800A1DC8();
    func_800A183C(&D_800DE858, D_800DE864);
    func_80072FA0(D_800D7064, &D_800DE858, D_800DE864);
    func_80099A24(D_800D7064, &D_800DE84C, D_800DE828);
    func_8009A310(0);
}
