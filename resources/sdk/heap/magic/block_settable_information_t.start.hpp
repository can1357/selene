#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_BLOCK_SETTABLE_INFORMATION.Settable", settable, 0x0, 0x40, true, 0x3645e9a2584633b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_BLOCK_SETTABLE_INFORMATION.TagIndex", tag_index, 0x40, 0x10, true, 0x5e8b416c81cdf895)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_BLOCK_SETTABLE_INFORMATION.AllocatorBackTraceIndex", allocator_back_trace_index, 0x50, 0x10, true, 0x57f971ec9557e31a)
#else
#define _m00
#define _m01
#define _m02
#endif