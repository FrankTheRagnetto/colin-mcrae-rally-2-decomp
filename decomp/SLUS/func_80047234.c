typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern u8 D_8004BC80;
extern s32 D_8005AD5C;
extern u8 D_8005AD61;
extern s32 D_8005AD64;
extern s32 D_8005AD68;

void func_80047234(s32 arg0) {
    if ((D_8005AD61 == 0) && (D_8004BC80 != 0) && (D_8005AD68 >= 0)) {
        func_800281CC(func_80027578(D_8005AD68, D_8005AD64));
    }
    D_8005AD5C = arg0;
}
