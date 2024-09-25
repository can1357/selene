#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_HEAP_EVENT_COMMON.Header", header, 0x0, 0x0, true, 0xb3db477c6959f5c7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_COMMON.Handle", handle, 0x100, 0x40, true, 0xe678695cf3bd4b7a)
#else
#define _m00
#define _m01
#endif