#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_USER_MEMORY_CACHE_ENTRY.UserBlocks", user_blocks, 0x0, 0x80, true, 0xb6f00d1c5de2a57a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_USER_MEMORY_CACHE_ENTRY.AvailableBlocks", available_blocks, 0x80, 0x20, true, 0x93fb224c4bd21791)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_USER_MEMORY_CACHE_ENTRY.MinimumDepth", minimum_depth, 0xa0, 0x20, true, 0x3d164f737e8dd746)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_USER_MEMORY_CACHE_ENTRY.CacheShiftThreshold", cache_shift_threshold, 0xc0, 0x20, true, 0x1432bf5f8788aebb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint16_t), "_USER_MEMORY_CACHE_ENTRY.Allocations", allocations, 0xe0, 0x10, true, 0x860895fbd65c7baa)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint16_t), "_USER_MEMORY_CACHE_ENTRY.Frees", frees, 0xf0, 0x10, true, 0x622f6e70d55c6f2b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint16_t), "_USER_MEMORY_CACHE_ENTRY.CacheHits", cache_hits, 0x100, 0x10, true, 0x5c28921faae9d5ec)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif