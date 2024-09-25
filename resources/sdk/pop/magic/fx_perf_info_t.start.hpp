#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_component_t*), "_POP_FX_PERF_INFO.Component", component, 0x0, 0x40, true, 0xc6fea4c86bc8a4fa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_POP_FX_PERF_INFO.CompletedEvent", completed_event, 0x40, 0xc0, true, 0x12dc629fe2d0818f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint8_t, void*)>*), "_POP_FX_PERF_INFO.ComponentPerfState", component_perf_state, 0x100, 0x40, true, 0x850ad6281b3e30ff)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile union pop::fx_perf_flags_t), "_POP_FX_PERF_INFO.Flags", flags, 0x140, 0x20, true, 0xfe3d65df7065dfeb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::fx_perf_state_change_t*), "_POP_FX_PERF_INFO.LastChange", last_change, 0x180, 0x40, true, 0x900937d6712d674a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_PERF_INFO.LastChangeCount", last_change_count, 0x1c0, 0x20, true, 0xfabeec97a28ea28e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_PERF_INFO.LastChangeStamp", last_change_stamp, 0x200, 0x40, true, 0x7a5179158a187059)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_FX_PERF_INFO.LastChangeNominal", last_change_nominal, 0x240, 0x8, true, 0x540e95efc7ba4655)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_FX_PERF_INFO.PepRegistered", pep_registered, 0x248, 0x8, true, 0x102546d6508d2a74)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_FX_PERF_INFO.QueryOnIdleStates", query_on_idle_states, 0x250, 0x8, true, 0x1e08f29caba96768)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile*), "_POP_FX_PERF_INFO.RequestDriverContext", request_driver_context, 0x280, 0x40, true, 0x104886606c3a92e5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_work_order_t), "_POP_FX_PERF_INFO.WorkOrder", work_order, 0x2c0, 0xc0, true, 0x5a7f15e51dd60581)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_PERF_INFO.SetsCount", sets_count, 0x480, 0x20, true, 0x151b9aa396ed1eb1)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_perf_set_t*), "_POP_FX_PERF_INFO.Sets", sets, 0x4c0, 0x40, true, 0x67fb1a02326038f5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif