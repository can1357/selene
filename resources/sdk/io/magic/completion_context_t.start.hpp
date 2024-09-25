#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_COMPLETION_CONTEXT.Port", port, 0x0, 0x40, true, 0xd08f4749525d688d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_COMPLETION_CONTEXT.Key", key, 0x40, 0x40, true, 0x88299e2305cbe5bd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_COMPLETION_CONTEXT.UsageCount", usage_count, 0x80, 0x40, true, 0x5de91fe7b420bc90)
#else
#define _m00
#define _m01
#define _m02
#endif