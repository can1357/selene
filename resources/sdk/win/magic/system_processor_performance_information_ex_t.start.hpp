#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION_EX.IdleTime", idle_time, 0x0, 0x40, true, 0x306a441437e85342)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION_EX.KernelTime", kernel_time, 0x40, 0x40, true, 0x53f1c6051f7523c8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION_EX.UserTime", user_time, 0x80, 0x40, true, 0x9a887f9caaff434)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION_EX.DpcTime", dpc_time, 0xc0, 0x40, true, 0x61738da0ead71a02)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION_EX.InterruptTime", interrupt_time, 0x100, 0x40, true, 0xd367f6a70883c52c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION_EX.InterruptCount", interrupt_count, 0x140, 0x20, true, 0xe99f2a086582caec)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION_EX.AvailableTime", available_time, 0x180, 0x40, true, 0x2f90fb476bdf7be6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif