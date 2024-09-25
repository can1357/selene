#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::fx_component_perf_set_t*), "_POP_FX_PERF_SET.PerfSet", perf_set, 0x0, 0x40, true, 0xc1bf5279c968320b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_PERF_SET.CurrentPerf", current_perf, 0x40, 0x40, true, 0x8a56d68eccc4b6dd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_PERF_SET.CurrentPerfStamp", current_perf_stamp, 0x80, 0x40, true, 0xe4b4e189f5161280)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_FX_PERF_SET.CurrentPerfNominal", current_perf_nominal, 0xc0, 0x8, true, 0xf157a964a66cb8a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif