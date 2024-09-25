#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_HEAP_RANGE_DESTROY.Header", header, 0x0, 0x0, true, 0x75d2cab13c2f0f1a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_RANGE_DESTROY.HeapHandle", heap_handle, 0x100, 0x40, true, 0x26b2ec6d40eebbc1)
#else
#define _m00
#define _m01
#endif