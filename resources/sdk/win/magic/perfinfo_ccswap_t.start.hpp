#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PERFINFO_CCSWAP.DataType", data_type, 0x0, 0x2, true, 0xbfeff071107fa657, 2, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_PERFINFO_CCSWAP.TimeDelta", time_delta, 0x2, 0x1e, true, 0x6a64bc9ce9e8b7b8, 30, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PERFINFO_CCSWAP.OldThreadIdIndex", old_thread_id_index, 0x20, 0x4, true, 0xbbcda6a7e6b5c051, 4, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_PERFINFO_CCSWAP.OldThreadStateWr", old_thread_state_wr, 0x24, 0x6, true, 0xa113bb6c6b3e9a44, 6, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PERFINFO_CCSWAP.OldThreadPriority", old_thread_priority, 0x2a, 0x5, true, 0x52012ad89cd5d2ad, 5, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint17_t), "_PERFINFO_CCSWAP.NewThreadWaitTime", new_thread_wait_time, 0x2f, 0x11, true, 0x486a0be31ec4b829, 17, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif