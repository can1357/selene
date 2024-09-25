#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_HEAP_RANGE_LOG.Header", header, 0x0, 0x0, true, 0xdae714206cea2f45)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::event_range_t), "_HEAP_RANGE_LOG.Range", range, 0x100, 0xc0, true, 0x471b819a166db24f)
#else
#define _m00
#define _m01
#endif