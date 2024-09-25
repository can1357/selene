#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_HEAP_EVENT_REALLOC.Header", header, 0x0, 0x0, true, 0x42c1ccca0dad0cff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_REALLOC.HeapHandle", heap_handle, 0x100, 0x40, true, 0x7befc9253dac5c91)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_REALLOC.NewAddress", new_address, 0x140, 0x40, true, 0x6fc347f82ae4d883)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_REALLOC.OldAddress", old_address, 0x180, 0x40, true, 0x2a057f0d7f8304a8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_REALLOC.NewSize", new_size, 0x1c0, 0x40, true, 0x819d422950c4875f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_REALLOC.OldSize", old_size, 0x200, 0x40, true, 0x4010c194278892af)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_REALLOC.Source", source, 0x240, 0x20, true, 0xb663f43618848850)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif