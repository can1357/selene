#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCBFLAG.PrcbFlags", prcb_flags, 0x0, 0x20, true, 0x7520e66495f6b1bc)
#define _m01 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint8_t), "_KPRCBFLAG.BamQosLevel", bam_qos_level, 0x0, 0x8, true, 0xd0860c7aa2aee27b, 8, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint2_t), "_KPRCBFLAG.PendingQosUpdate", pending_qos_update, 0x8, 0x2, true, 0x9f50e70ede110ece, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCBFLAG.CacheIsolationEnabled", cache_isolation_enabled, 0xa, 0x1, true, 0xd45264e794a1181, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCBFLAG.TracepointActive", tracepoint_active, 0xb, 0x1, true, 0xa317e05b8d438082, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint20_t), "_KPRCBFLAG.PrcbFlagsReserved", prcb_flags_reserved, 0xc, 0x14, true, 0xde04b74c599da207, 0, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCBFLAG.LongDpcRunning", long_dpc_running, 0x0, 0x0, false, 0xf8e7e6926a4872fc, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif