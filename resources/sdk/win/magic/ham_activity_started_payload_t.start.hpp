#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HAM_ACTIVITY_STARTED_PAYLOAD.Generation", generation, 0x0, 0x40, true, 0xde6113a013104028)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HAM_ACTIVITY_STARTED_PAYLOAD.PendStartPerfCounter", pend_start_perf_counter, 0x40, 0x40, true, 0xf1ae04f3c94ac941)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint32_t, 5>, union win::ham_pend_durations_t>), "_HAM_ACTIVITY_STARTED_PAYLOAD.PendDurations", pend_durations, 0x80, 0xa0, true, 0xa8c03309e377f998)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_HAM_ACTIVITY_STARTED_PAYLOAD.PreviousTerminateReason", previous_terminate_reason, 0x120, 0x10, true, 0xac8a5078fe1f9f98, 16, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_HAM_ACTIVITY_STARTED_PAYLOAD.CurrentState", current_state, 0x130, 0x3, true, 0xaf00938dfccee331, 3, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_ACTIVITY_STARTED_PAYLOAD.AllFlags", all_flags, 0x120, 0x20, true, 0x17def13efa069b08)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_ACTIVITY_STARTED_PAYLOAD.ResourcePendPerfDuration", resource_pend_perf_duration, 0x80, 0x20, true, 0xbcee62598df2ddd6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_ACTIVITY_STARTED_PAYLOAD.HostOptimizationDuration", host_optimization_duration, 0xa0, 0x20, true, 0xb6c24fc04e7f3ee5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_ACTIVITY_STARTED_PAYLOAD.LicensingDuration", licensing_duration, 0xc0, 0x20, true, 0x2c13050c1459d872)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_ACTIVITY_STARTED_PAYLOAD.HostStateDuration", host_state_duration, 0xe0, 0x20, true, 0x7159b3e1f92d580f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_ACTIVITY_STARTED_PAYLOAD.HostTerminateDuration", host_terminate_duration, 0x100, 0x20, true, 0x63b23a3080a39622)
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
#endif