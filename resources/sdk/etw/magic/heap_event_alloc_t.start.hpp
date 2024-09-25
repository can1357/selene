#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_HEAP_EVENT_ALLOC.Header", header, 0x0, 0x0, true, 0xb556a53f1ee7ddc6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_ALLOC.HeapHandle", heap_handle, 0x100, 0x40, true, 0x30e37196e3afc05f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_HEAP_EVENT_ALLOC.Size", size, 0x140, 0x40, true, 0x8592fea9f1167402)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_ALLOC.Address", address, 0x180, 0x40, true, 0xc625b21c3c772266)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_ALLOC.Source", source, 0x1c0, 0x20, true, 0x40ac9cb6a201dabf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif