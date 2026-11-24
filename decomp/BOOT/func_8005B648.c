typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8005AE24;
extern M2C_UNK D_8005AE38;

void func_8005B648(s32 arg0, s32 arg1) {
    func_8005B13C();
    func_8005B314();
    func_8005B86C();
    func_8005C38C();
    func_8001BD28();
    func_8001BD70();
    func_8005BD18(&D_8005AE24, 0x228, 0x1E, 0x64, 0);
    func_8002A944(0);
    func_8005B0F4();
    func_80024B18(1);
    func_8001BC98();
    func_8005BD18(&D_8005AE38, 0xABE, 0x1E, 0x64, 1);
    func_8002A944(0);
    func_8005B0F4();
    func_80024B18(1);
    func_8005B410();
    func_8003440C(arg0, arg1 & 0xFF, 0, 2);
}
