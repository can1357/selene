#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_POOL_CLOSE.Header", header, 0x0, 0x0, true, 0x6b32a1c669746162)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_POOL_CLOSE.PoolId", pool_id, 0x100, 0x40, true, 0x57a500dc92622ea4)
#else
#define _m00
#define _m01
#endif