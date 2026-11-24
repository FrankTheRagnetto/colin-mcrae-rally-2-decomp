typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 *D_8005C2F4;
extern s32 *D_8005C2F8;
extern s32 *D_8005C2FC;
extern s32 *D_8005C320;

void func_8005BF0C(s32 arg0, u32 arg1) {
    func_8005C02C();
    *D_8005C320 |= 0x88;
    *D_8005C2FC = 0;
    *D_8005C2F4 = arg0;
    *D_8005C2F8 = ((arg1 >> 5) << 0x10) | 0x20;
    *D_8005C2FC = 0x01000200;
}
