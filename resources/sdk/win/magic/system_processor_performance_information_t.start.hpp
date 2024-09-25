#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION.IdleTime", idle_time, 0x0, 0x40, true, 0xe006396cfabacc21)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION.KernelTime", kernel_time, 0x40, 0x40, true, 0x856126ee2a950405)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION.UserTime", user_time, 0x80, 0x40, true, 0x9b8f25a595461fe3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION.DpcTime", dpc_time, 0xc0, 0x40, true, 0xb766f3d8ee5d89d6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION.InterruptTime", interrupt_time, 0x100, 0x40, true, 0x742444072138ec88)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION.InterruptCount", interrupt_count, 0x140, 0x20, true, 0x5ce10a6447436789)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif