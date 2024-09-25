#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PERFINFO_CCSWAP_LITE.DataType", data_type, 0x0, 0x2, true, 0x221ac4aba30881b5, 2, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PERFINFO_CCSWAP_LITE.OldThreadIdIndex", old_thread_id_index, 0x2, 0x4, true, 0x93ddf45da5bc34f4, 4, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PERFINFO_CCSWAP_LITE.OldThreadPriInc", old_thread_pri_inc, 0x6, 0x3, true, 0x3140fae5859613ea, 3, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PERFINFO_CCSWAP_LITE.OldThreadStateWr", old_thread_state_wr, 0x9, 0x6, true, 0xc6c71376cbb558fd, 6, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint17_t), "_PERFINFO_CCSWAP_LITE.TimeDelta", time_delta, 0xf, 0x11, true, 0x74a7bfac3e47ff2f, 17, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif