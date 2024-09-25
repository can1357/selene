#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_FX_COMPONENT_PERF_INFO.PerfStateSetsCount", perf_state_sets_count, 0x0, 0x20, true, 0x880aa2c1dee6c6d2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct po::fx_component_perf_set_t, 1>), "_PO_FX_COMPONENT_PERF_INFO.PerfStateSets", perf_state_sets, 0x40, 0x80, true, 0x7ab6e6313f2fc886)
#else
#define _m00
#define _m01
#endif