#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_TP_EVENT_POOL_TH_MIN_SET.Header", header, 0x0, 0x0, true, 0x9edc311da6bd2939)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_TP_EVENT_POOL_TH_MIN_SET.PoolId", pool_id, 0x100, 0x40, true, 0x59c8fcd416fde6b9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TP_EVENT_POOL_TH_MIN_SET.ThreadNum", thread_num, 0x140, 0x20, true, 0xfa0836e80a0a82a9)
#else
#define _m00
#define _m01
#define _m02
#endif