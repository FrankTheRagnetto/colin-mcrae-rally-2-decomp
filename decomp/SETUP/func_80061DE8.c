typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80078C74;

s8 func_80061DE8(s32 arg0, u32 arg1) {
    switch (arg1) {
    case 0:
        return *((__typeof__(D_80078C74) *)((char *)(__typeof__(D_80078C74) *)((char *)&D_80078C74 + (arg0 * 7))));
    case 1:
        return ((union { u8 s[7]; struct { u8 p[1]; s8 f; } x; } *)&D_80078C74)[arg0].x.f;
    case 6:
        return ((union { u8 s[7]; struct { u8 p[6]; s8 f; } x; } *)&D_80078C74)[arg0].x.f;
    case 2:
        return ((union { u8 s[7]; struct { u8 p[2]; s8 f; } x; } *)&D_80078C74)[arg0].x.f;
    case 3:
        return ((union { u8 s[7]; struct { u8 p[3]; s8 f; } x; } *)&D_80078C74)[arg0].x.f;
    case 4:
        return ((union { u8 s[7]; struct { u8 p[4]; s8 f; } x; } *)&D_80078C74)[arg0].x.f;
    case 5:
        return ((union { u8 s[7]; struct { u8 p[5]; s8 f; } x; } *)&D_80078C74)[arg0].x.f;
    default:
        return 0;
    }
}
