#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CRITICAL_SECTION64.DebugInfo", debug_info, 0x0, 0x40, true, 0xc58c761206359f3b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_CRITICAL_SECTION64.LockCount", lock_count, 0x40, 0x20, true, 0x6dae8b09d6220b62)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RTL_CRITICAL_SECTION64.RecursionCount", recursion_count, 0x60, 0x20, true, 0x996b92d337cdf88f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CRITICAL_SECTION64.OwningThread", owning_thread, 0x80, 0x40, true, 0xfa252236b4e556ff)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CRITICAL_SECTION64.LockSemaphore", lock_semaphore, 0xc0, 0x40, true, 0xc1f8d4d155661ba3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CRITICAL_SECTION64.SpinCount", spin_count, 0x100, 0x40, true, 0x5b74be46719622df)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif