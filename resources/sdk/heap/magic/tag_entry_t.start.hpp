#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_TAG_ENTRY.Allocs", allocs, 0x0, 0x20, true, 0xab622c41208ed01d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_TAG_ENTRY.Frees", frees, 0x20, 0x20, true, 0xd12b9e4b1735d3ef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_TAG_ENTRY.Size", size, 0x40, 0x40, true, 0xe22e76ea1e6777e6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_TAG_ENTRY.TagIndex", tag_index, 0x80, 0x10, true, 0xb53949ad37ad4430)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_TAG_ENTRY.CreatorBackTraceIndex", creator_back_trace_index, 0x90, 0x10, true, 0xa915edc464154063)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 24>), "_HEAP_TAG_ENTRY.TagName", tag_name, 0xa0, 0x80, true, 0x59bb24fcf9cc0ae6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif