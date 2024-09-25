#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_POOL_TH_MAX_SET.Header", header, 0x0, 0x0, true, 0x2bb01dab144e9c6a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_POOL_TH_MAX_SET.PoolId", pool_id, 0x100, 0x40, true, 0x9e2c0e9cc1af0682)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_POOL_TH_MAX_SET.ThreadNum", thread_num, 0x140, 0x20, true, 0x84cf7cf377e9941f)
#else
#define _m00
#define _m01
#define _m02
#endif