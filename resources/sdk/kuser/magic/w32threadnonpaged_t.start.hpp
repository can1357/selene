#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct kuser::w32thread_t*), "_W32THREADNONPAGED.pW32Thread", p_w32_thread, 0x0, 0x40, true, 0x5a0f96c4738519ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_W32THREADNONPAGED.llQPCUserCritAcquire", ll_qpc_user_crit_acquire, 0x40, 0x40, true, 0x880ee07367b4c295)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_W32THREADNONPAGED.ullUserCritAcquireToken", ull_user_crit_acquire_token, 0x80, 0x40, true, 0x20d439e97980847d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_W32THREADNONPAGED.cInputPerfRegions", c_input_perf_regions, 0xc0, 0x20, true, 0x948a8f8f03761848)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_W32THREADNONPAGED.InputActivityGuid", input_activity_guid, 0xe0, 0x80, true, 0xbfa1a36ba68b2052)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_W32THREADNONPAGED.bTracedCritAcquire", b_traced_crit_acquire, 0x160, 0x20, true, 0xa22f8e68fdb52769)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_W32THREADNONPAGED.bAlwaysTraceUserCrit", b_always_trace_user_crit, 0x180, 0x20, true, 0xe80be9c79ea8b019)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif