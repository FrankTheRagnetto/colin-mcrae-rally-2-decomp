typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern void *D_800DB1CC;
extern s32 D_800DB1D0;

void func_8008DC68(void *arg0) {
    struct { s32 sp10; s32 sp14; s32 sp18; } sf;

    D_800DB1CC = arg0;
    D_800DB1D0 = func_8009971C(M2C_FIELD(arg0, s8 *, 0xABA));
    func_8008ACE0();
    func_8002E23C(&sf.sp10, M2C_FIELD(D_800DB1CC, s32 *, 0x6F4));
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6DC), s32 *, 0x48) = sf.sp10;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6DC), s32 *, 0x54) = sf.sp14;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6DC), s32 *, 0x60) = sf.sp18;
    func_8002E260(&sf.sp10, M2C_FIELD(D_800DB1CC, s32 *, 0x6F4));
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6DC), s32 *, 0x4C) = sf.sp10;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6DC), s32 *, 0x58) = sf.sp14;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6DC), s32 *, 0x64) = sf.sp18;
    func_8002E284(&sf.sp10, M2C_FIELD(D_800DB1CC, s32 *, 0x6F4));
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6DC), s32 *, 0x50) = sf.sp10;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6DC), s32 *, 0x5C) = sf.sp14;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6DC), s32 *, 0x68) = sf.sp18;
    func_8002E218(&sf.sp10, M2C_FIELD(D_800DB1CC, s32 *, 0x6F4));
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6DC), s32 *, 0x6C) = sf.sp10;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6DC), s32 *, 0x70) = sf.sp14;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6DC), s32 *, 0x74) = sf.sp18;
    func_8002E23C(&sf.sp10, M2C_FIELD(D_800DB1CC, s32 *, 0x6F0));
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6D8), s32 *, 0x48) = sf.sp10;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6D8), s32 *, 0x54) = sf.sp14;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6D8), s32 *, 0x60) = sf.sp18;
    func_8002E260(&sf.sp10, M2C_FIELD(D_800DB1CC, s32 *, 0x6F0));
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6D8), s32 *, 0x4C) = sf.sp10;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6D8), s32 *, 0x58) = sf.sp14;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6D8), s32 *, 0x64) = sf.sp18;
    func_8002E284(&sf.sp10, M2C_FIELD(D_800DB1CC, s32 *, 0x6F0));
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6D8), s32 *, 0x50) = sf.sp10;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6D8), s32 *, 0x5C) = sf.sp14;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6D8), s32 *, 0x68) = sf.sp18;
    func_8002E218(&sf.sp10, M2C_FIELD(D_800DB1CC, s32 *, 0x6F0));
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6D8), s32 *, 0x6C) = sf.sp10;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6D8), s32 *, 0x70) = sf.sp14;
    M2C_FIELD(M2C_FIELD(D_800DB1CC, void **, 0x6D8), s32 *, 0x74) = sf.sp18;
}
