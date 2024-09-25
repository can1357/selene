#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Intel.PerfEvtEventSelect", perf_evt_event_select, 0x0, 0x8, true, 0xadc1b0eb7646ec25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Intel.PerfEvtUnitSelect", perf_evt_unit_select, 0x8, 0x8, true, 0xe77c8c411b399af8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Intel.PerfEvtCMask", perf_evt_c_mask, 0x10, 0x8, true, 0x6870ed50f6dbc964)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Intel.PerfEvtCInv", perf_evt_c_inv, 0x18, 0x8, true, 0xbe0149aa839a70ff)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Intel.PerfEvtAnyThread", perf_evt_any_thread, 0x20, 0x8, true, 0xec9f7768939b4fb9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Intel.PerfEvtEdgeDetect", perf_evt_edge_detect, 0x28, 0x8, true, 0x79809ae4a82a4ad2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_intel_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Intel", intel, 0x0, 0x30, true, 0xb33a303a7e089220)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Amd.PerfEvtEventSelect", perf_evt_event_select, 0x0, 0x8, true, 0x341ab05587e3e99e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Amd.PerfEvtUnitSelect", perf_evt_unit_select, 0x8, 0x8, true, 0x921d1db1fb39907b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_amd_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Amd", amd, 0x0, 0x10, true, 0xd3922bbf6a65930e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Arm.PerfEvtType", perf_evt_type, 0x0, 0x20, true, 0xef870adebc916ff1)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Arm.AllowsHalt", allows_halt, 0x20, 0x8, true, 0xb9b8b7275a1c7ba5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_arm_t), "_EVENT_TRACE_PROFILE_ADD_INFORMATION_V2.Arm", arm, 0x0, 0x40, true, 0xa54ab6f50c7c4819)
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
#endif