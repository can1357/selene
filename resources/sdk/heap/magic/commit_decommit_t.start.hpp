#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_HEAP_COMMIT_DECOMMIT.Header", header, 0x0, 0x0, true, 0xebaf69bb322d1b41)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::event_commit_decommit_t), "_HEAP_COMMIT_DECOMMIT.Event", event, 0x100, 0x0, true, 0xc4e26d83ad755865)
#else
#define _m00
#define _m01
#endif