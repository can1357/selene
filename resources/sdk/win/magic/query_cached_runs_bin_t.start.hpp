#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_CACHED_RUNS_BIN.MaxLength", max_length, 0x0, 0x0, false, 0x6c9841d1395e08cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_CACHED_RUNS_BIN.RunCount", run_count, 0x0, 0x0, false, 0xbe6ccc9e77ac39c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_CACHED_RUNS_BIN.EffectiveAllocations", effective_allocations, 0x0, 0x0, false, 0xefe6319ff590e031)
#else
#define _m00
#define _m01
#define _m02
#endif