#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_TAG.NumberOfAllocations", number_of_allocations, 0x0, 0x20, true, 0xf7d76c0b0c00ca76)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_TAG.NumberOfFrees", number_of_frees, 0x20, 0x20, true, 0x6b7354cea1157595)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_TAG.BytesAllocated", bytes_allocated, 0x40, 0x40, true, 0x75a6076b298cf066)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_TAG.TagIndex", tag_index, 0x80, 0x10, true, 0x3ca82f684095e26)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_TAG.CreatorBackTraceIndex", creator_back_trace_index, 0x90, 0x10, true, 0xe79687ea4d709046)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 24>), "_RTL_HEAP_TAG.TagName", tag_name, 0xa0, 0x80, true, 0x12e4f9d708d424aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif