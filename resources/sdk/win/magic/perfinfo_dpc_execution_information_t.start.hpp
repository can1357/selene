#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_DPC_EXECUTION_INFORMATION.DpcRoutine", dpc_routine, 0x0, 0x40, true, 0xc54e5436dfa806cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_DPC_EXECUTION_INFORMATION.Key", key, 0x40, 0x40, true, 0x373771ddc2de85)
#else
#define _m00
#define _m01
#endif