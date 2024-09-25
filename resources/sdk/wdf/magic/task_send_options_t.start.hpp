#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TASK_SEND_OPTIONS.Size", size, 0x0, 0x20, true, 0xff1058062a48ac44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_TASK_SEND_OPTIONS.Flags", flags, 0x20, 0x20, true, 0x6835cdf1530144e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WDF_TASK_SEND_OPTIONS.Timeout", timeout, 0x40, 0x40, true, 0xdb529d85bdfc7e3c)
#else
#define _m00
#define _m01
#define _m02
#endif