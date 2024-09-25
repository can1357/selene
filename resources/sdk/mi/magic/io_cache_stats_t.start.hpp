#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_IO_CACHE_STATS.UnmappedCacheFlush", unmapped_cache_flush, 0x80, 0x20, true, 0xbe0752966ac6f85e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_IO_CACHE_STATS.UnmappedCacheConflict", unmapped_cache_conflict, 0xc0, 0x20, true, 0x2221772a5333a307)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_IO_CACHE_STATS.PermanentIoAttributeConflict", permanent_io_attribute_conflict, 0xe0, 0x20, true, 0x643793dd58cd96c5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_IO_CACHE_STATS.PermanentIoNodeConflict", permanent_io_node_conflict, 0x100, 0x20, true, 0x76c3d4899afae4a5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_IO_CACHE_STATS.UnusedBlocks", unused_blocks, 0x0, 0x40, true, 0x2cb64485e70297ac)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_IO_CACHE_STATS.ActiveCacheMatch", active_cache_match, 0x40, 0x20, true, 0xb38fbc71da402fef)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_IO_CACHE_STATS.ActiveCacheOverride", active_cache_override, 0x60, 0x20, true, 0xb6f60f3ca458ba9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_IO_CACHE_STATS.UnmappedCacheMatch", unmapped_cache_match, 0xa0, 0x20, true, 0x8a60f66d09148eeb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif