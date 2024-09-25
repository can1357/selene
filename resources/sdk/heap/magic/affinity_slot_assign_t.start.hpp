#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_HEAP_AFFINITY_SLOT_ASSIGN.Header", header, 0x0, 0x0, true, 0xc8de81ca3921591f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_AFFINITY_SLOT_ASSIGN.HeapHandle", heap_handle, 0x100, 0x40, true, 0x674ce9ee2acb0a33)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_AFFINITY_SLOT_ASSIGN.SubSegment", sub_segment, 0x140, 0x40, true, 0x82639b8e4ff9a6b4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_AFFINITY_SLOT_ASSIGN.SlotIndex", slot_index, 0x180, 0x20, true, 0xcb8a6159ec820eb3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif