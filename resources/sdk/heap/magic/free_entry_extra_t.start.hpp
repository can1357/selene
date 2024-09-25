#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_FREE_ENTRY_EXTRA.TagIndex", tag_index, 0x0, 0x10, true, 0x6e592c4f1fdd947d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_FREE_ENTRY_EXTRA.FreeBackTraceIndex", free_back_trace_index, 0x10, 0x10, true, 0x3f35a8e687d1d0b5)
#else
#define _m00
#define _m01
#endif