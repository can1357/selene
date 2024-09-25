#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_HEAP_EVENT_FREE.Header", header, 0x0, 0x0, true, 0x5465f5b089ac569d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_FREE.HeapHandle", heap_handle, 0x100, 0x40, true, 0xbe224fc596a35)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_FREE.Address", address, 0x140, 0x40, true, 0x141f6677d9e7627d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_FREE.Source", source, 0x180, 0x20, true, 0x27cd4dca3e857321)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif