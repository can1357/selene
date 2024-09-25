#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_ALPC_COMPLETION_LIST_STATE.Head", head, 0x0, 0x18, true, 0x63128439c49526a, 24, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_ALPC_COMPLETION_LIST_STATE.Tail", tail, 0x18, 0x18, true, 0x74f68ddc9aab8bc, 24, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_ALPC_COMPLETION_LIST_STATE.ActiveThreadCount", active_thread_count, 0x30, 0x10, true, 0x6ffede741f8e2443, 16, uint64_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ALPC_COMPLETION_LIST_STATE.Value", value, 0x0, 0x40, true, 0x132a9c2a10ad7f9a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif