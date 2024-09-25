#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO.EventDpc", event_dpc, 0x0, 0x0, false, 0xc349f9111d43b1ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO.DeferredRoutine", deferred_routine, 0x0, 0x0, false, 0xa190b93305cc5274)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO.TickCount", tick_count, 0x0, 0x0, false, 0xe4b8a0e5248e3155)
#else
#define _m00
#define _m01
#define _m02
#endif