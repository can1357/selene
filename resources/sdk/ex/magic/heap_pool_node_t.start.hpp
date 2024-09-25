#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ntdll::segment_heap_t*, 4>), "_EX_HEAP_POOL_NODE.Heaps", heaps, 0x0, 0x0, true, 0x40d7cd385797e4df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::dynamic_lookaside_t, 2>), "_EX_HEAP_POOL_NODE.Lookasides", lookasides, 0x200, 0x0, true, 0x1949d9713448ca8)
#else
#define _m00
#define _m01
#endif