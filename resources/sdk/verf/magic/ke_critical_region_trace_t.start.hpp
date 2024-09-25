#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_VF_KE_CRITICAL_REGION_TRACE.Thread", thread, 0x0, 0x40, true, 0x83d8c6c783f51f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 7>), "_VF_KE_CRITICAL_REGION_TRACE.StackTrace", stack_trace, 0x40, 0xc0, true, 0xe957e15656e2eb60)
#else
#define _m00
#define _m01
#endif