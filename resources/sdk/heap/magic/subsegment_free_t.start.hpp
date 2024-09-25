#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_HEAP_SUBSEGMENT_FREE.Header", header, 0x0, 0x0, true, 0x232e27970eb4a899)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::event_subsegment_alloc_free_t), "_HEAP_SUBSEGMENT_FREE.Event", event, 0x100, 0x0, true, 0xda1fa93509295fb2)
#else
#define _m00
#define _m01
#endif