#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KERNEL_USER_TIMES.CreateTime", create_time, 0x0, 0x40, true, 0x9e01cee1c011e6fe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KERNEL_USER_TIMES.ExitTime", exit_time, 0x40, 0x40, true, 0x9197326eea90f6eb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KERNEL_USER_TIMES.KernelTime", kernel_time, 0x80, 0x40, true, 0xc951d2a1aca9a2b2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KERNEL_USER_TIMES.UserTime", user_time, 0xc0, 0x40, true, 0xeab592392d8de1aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif