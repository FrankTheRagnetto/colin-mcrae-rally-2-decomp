typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8006901C;
extern M2C_UNK D_8007FDAC;
extern M2C_UNK D_80083F90;
extern M2C_UNK D_8009B75C;
extern M2C_UNK D_8009B92C;
extern M2C_UNK D_8009CD1C;
extern M2C_UNK D_8009D28C;
extern M2C_UNK D_8009EA1C;
extern M2C_UNK func_80085524;

void func_800864C0(void) {
    func_8008E704();
    func_80046734(&D_8009B75C, 0, 0, 0, 0, 0, 1, 1, 0);
    func_80046D4C(&D_8009B75C, 0, 0x4F, &D_8009B92C, 0, 0);
    func_80046D4C(&D_8009B75C, 0, 0x50, &D_8009CD1C, 0, 1);
    func_80046D4C(&D_8009B75C, 0, 0x51, func_8008C744(), 0, 2);
    func_80046D4C(&D_8009B75C, 0, 0x53, &D_8009D28C, 0, 4);
    if (func_80061190() & 0xFF) {
        func_80046D4C(&D_8009B75C, 0, 0x54, &D_8009EA1C, 0, 5);
    }
    func_800470E4(&D_8009B75C, &D_8007FDAC, &D_80083F90, &D_8006901C, &func_80085524 + 0x10);
    func_800470FC(&D_8009B75C, 0);
}
