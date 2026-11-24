
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
extern void *D_800DB580;
int func_80015140();
void func_80093608(void)
{
  s32 temp_s5;
  s32 temp_v0;
  s32 var_s1;
  s32 var_s2;
  s32 var_s3;
  void *temp_a1;
  char *new_var;
  temp_a1 = D_800DB580 + ((*((s8 *) (((char *) D_800DB580) + 0xABE))) * 4);
  var_s2 = -0x27100000;
  if ((*((s32 *) (((char *) temp_a1) + 0x770))) > 0)
  {
    var_s3 = 0;
    var_s1 = 1;
    temp_s5 = func_80015140(*((s32 *) (((char *) D_800DB580) + 0x758)), *((s32 *) (((char *) temp_a1) + 0x790)));
    do
    {
      new_var = ((char *) (D_800DB580 + (var_s1 * 4))) + 0x770;
      temp_v0 = func_80015140(temp_s5, *((s32 *) new_var));
      if ((var_s2 < temp_v0) && ((temp_v0 < func_80015140(*((s32 *) (((char *) D_800DB580) + 0x748)), 0xFAE1)) || (var_s1 == 6)))
      {
        var_s2 = temp_v0;
        var_s3 = var_s1;
      }
      var_s1 += 1;
    }
    while (var_s1 < 7);
  }
  else
  {
    var_s3 = 7;
  }
  if ((var_s3 & 0xFF) < (*((s8 *) (((char *) D_800DB580) + 0xABE))))
  {
    *((s8 *) (((char *) D_800DB580) + 0xAFF)) = 0;
    return;
  }
  *((s8 *) (((char *) D_800DB580) + 0xAFF)) = 1;
}
