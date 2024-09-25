#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_PEND_DURATIONS.ResourcePendPerf", resource_pend_perf, 0x0, 0x0, false, 0xfcaae02c89f2fe0b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_PEND_DURATIONS.HostOptimization", host_optimization, 0x0, 0x0, false, 0xf2c3cce3f89e22d8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_PEND_DURATIONS.Licensing", licensing, 0x0, 0x0, false, 0xf15ad652438cc102)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_PEND_DURATIONS.HostState", host_state, 0x0, 0x0, false, 0x2a1cbc342c0cd412)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_PEND_DURATIONS.HostTerminate", host_terminate, 0x0, 0x0, false, 0xee7534a2ff77fc95)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 5>), "_HAM_PEND_DURATIONS.Array", array, 0x0, 0x0, false, 0x9e91357506df9ada)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif