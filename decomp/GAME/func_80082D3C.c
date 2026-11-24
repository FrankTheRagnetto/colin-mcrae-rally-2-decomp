typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern void *D_800DB1CC;

void func_80082D3C(void) {
    struct { s32 sp10; s32 sp14; s32 sp18; s32 sp1C; s32 sp20; s32 sp24; s32 sp28; s32 sp2C; s32 sp30; } sf;

    func_80016640(&sf.sp10, D_800DB1CC + 0x31C, M2C_FIELD(D_800DB1CC, s32 *, 0x718));
    func_80016640(&sf.sp1C, D_800DB1CC + 0x334, M2C_FIELD(D_800DB1CC, s32 *, 0x720));
    func_80016640(&sf.sp28, D_800DB1CC + 0x31C, M2C_FIELD(D_800DB1CC, s32 *, 0x71C));
    M2C_FIELD(D_800DB1CC, s32 *, 0x274) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x274) - sf.sp10);
    M2C_FIELD(D_800DB1CC, s32 *, 0x278) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x278) - sf.sp14);
    M2C_FIELD(D_800DB1CC, s32 *, 0x27C) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x27C) - sf.sp18);
    M2C_FIELD(D_800DB1CC, s32 *, 0x274) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x274) - sf.sp1C);
    M2C_FIELD(D_800DB1CC, s32 *, 0x278) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x278) - sf.sp20);
    M2C_FIELD(D_800DB1CC, s32 *, 0x27C) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x27C) - sf.sp24);
    M2C_FIELD(D_800DB1CC, s32 *, 0x280) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x280) - sf.sp10);
    M2C_FIELD(D_800DB1CC, s32 *, 0x284) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x284) - sf.sp14);
    M2C_FIELD(D_800DB1CC, s32 *, 0x288) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x288) - sf.sp18);
    M2C_FIELD(D_800DB1CC, s32 *, 0x280) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x280) + sf.sp1C);
    M2C_FIELD(D_800DB1CC, s32 *, 0x284) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x284) + sf.sp20);
    M2C_FIELD(D_800DB1CC, s32 *, 0x288) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x288) + sf.sp24);
    M2C_FIELD(D_800DB1CC, s32 *, 0x28C) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x28C) + sf.sp28);
    M2C_FIELD(D_800DB1CC, s32 *, 0x290) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x290) + sf.sp2C);
    M2C_FIELD(D_800DB1CC, s32 *, 0x294) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x294) + sf.sp30);
    M2C_FIELD(D_800DB1CC, s32 *, 0x28C) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x28C) - sf.sp1C);
    M2C_FIELD(D_800DB1CC, s32 *, 0x290) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x290) - sf.sp20);
    M2C_FIELD(D_800DB1CC, s32 *, 0x294) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x294) - sf.sp24);
    M2C_FIELD(D_800DB1CC, s32 *, 0x298) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x298) + sf.sp28);
    M2C_FIELD(D_800DB1CC, s32 *, 0x29C) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x29C) + sf.sp2C);
    M2C_FIELD(D_800DB1CC, s32 *, 0x2A0) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x2A0) + sf.sp30);
    M2C_FIELD(D_800DB1CC, s32 *, 0x298) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x298) + sf.sp1C);
    M2C_FIELD(D_800DB1CC, s32 *, 0x29C) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x29C) + sf.sp20);
    M2C_FIELD(D_800DB1CC, s32 *, 0x2A0) = (s32) (M2C_FIELD(D_800DB1CC, s32 *, 0x2A0) + sf.sp24);
}
