#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_POOL_CREATE.Header", header, 0x0, 0x0, true, 0x86ca3c43c43baec8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_POOL_CREATE.PoolId", pool_id, 0x100, 0x40, true, 0x61c24bc8b941040)
#else
#define _m00
#define _m01
#endif