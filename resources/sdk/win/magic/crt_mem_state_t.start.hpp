#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crt_mem_block_header_t*), "_CrtMemState.pBlockHeader", p_block_header, 0x0, 0x40, true, 0x2cb88a826f3a8e4a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_CrtMemState.lCounts", l_counts, 0x40, 0x40, true, 0x40f1dacdfef97022)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_CrtMemState.lSizes", l_sizes, 0x180, 0x40, true, 0xf3a87714c76dc51c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CrtMemState.lHighWaterCount", l_high_water_count, 0x2c0, 0x40, true, 0xd97161d9f70a6b49)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CrtMemState.lTotalCount", l_total_count, 0x300, 0x40, true, 0x1839199d48076dfc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif