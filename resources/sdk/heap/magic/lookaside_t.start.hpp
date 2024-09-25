#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_HEAP_LOOKASIDE.ListHead", list_head, 0x0, 0x0, false, 0xb0b41584c2612110)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_LOOKASIDE.Depth", depth, 0x0, 0x0, false, 0x9fa779c20db877f4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_LOOKASIDE.MaximumDepth", maximum_depth, 0x0, 0x0, false, 0xd98be7ad1b13a27e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LOOKASIDE.TotalAllocates", total_allocates, 0x0, 0x0, false, 0x19427183a8ac666b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LOOKASIDE.AllocateMisses", allocate_misses, 0x0, 0x0, false, 0xd09025ca5174754)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LOOKASIDE.TotalFrees", total_frees, 0x0, 0x0, false, 0xce14db9a837ec027)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LOOKASIDE.FreeMisses", free_misses, 0x0, 0x0, false, 0xf8722e3d3ed0da42)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LOOKASIDE.LastTotalAllocates", last_total_allocates, 0x0, 0x0, false, 0xfb9f079c1316e5e8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LOOKASIDE.LastAllocateMisses", last_allocate_misses, 0x0, 0x0, false, 0x722aba296b13139e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_HEAP_LOOKASIDE.Counters", counters, 0x0, 0x0, false, 0xcb6e30f1843f3ec9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif