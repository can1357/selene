#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_PERF_STATE_CHANGE.Type", type, 0x0, 0x20, true, 0xebdea4f9cfb6698f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_PERF_STATE_CHANGE.NewState", new_state, 0x20, 0x20, true, 0xfc1bcda553adf52)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_PERF_STATE_CHANGE.OldState", old_state, 0x40, 0x20, true, 0xd509063679bdd2e6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_PPM_PERF_STATE_CHANGE.Result", result, 0x60, 0x20, true, 0xfd097bec23a8a04)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PPM_PERF_STATE_CHANGE.Processors", processors, 0x80, 0x40, true, 0xcdd1877a11448eed)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif