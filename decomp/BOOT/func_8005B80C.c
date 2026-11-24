typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_8006E09C;

void func_8005B80C(s32 arg0, s32 arg1) {
    func_80034124(D_8006E09C);
    func_8003440C(arg0, arg1 & 0xFF, 0, 2);
    func_8001CA90(1);
}
