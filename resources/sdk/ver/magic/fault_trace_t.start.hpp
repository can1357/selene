#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_VI_FAULT_TRACE.Thread", thread, 0x0, 0x40, true, 0x150b350e34a23292)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 8>), "_VI_FAULT_TRACE.StackTrace", stack_trace, 0x40, 0x0, true, 0xe57ceae1ad23a2d0)
#else
#define _m00
#define _m01
#endif