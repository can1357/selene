#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_HEAP_RANGE_CREATE.Header", header, 0x0, 0x0, true, 0x9b422a878e3e6fbe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::event_range_create_t), "_HEAP_RANGE_CREATE.Event", event, 0x100, 0xc0, true, 0x4e103b67dd1cbe57)
#else
#define _m00
#define _m01
#endif