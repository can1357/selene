#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_CACHING_PAGE.PageCode", page_code, 0x0, 0x6, true, 0xcf63e266ddf651a2, 6, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE.PageSavable", page_savable, 0x7, 0x1, true, 0x28af509d87a4941e, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CACHING_PAGE.PageLength", page_length, 0x8, 0x8, true, 0x5b5862913ccefbb9)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE.ReadDisableCache", read_disable_cache, 0x10, 0x1, true, 0x5bcafad7d17a1710, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE.MultiplicationFactor", multiplication_factor, 0x11, 0x1, true, 0x76d7198b32f3dbef, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CACHING_PAGE.WriteCacheEnable", write_cache_enable, 0x12, 0x1, true, 0x2b0d481c5cd6c215, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_CACHING_PAGE.WriteRetensionPriority", write_retension_priority, 0x18, 0x4, true, 0xd0f71e0ad125112f, 4, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_CACHING_PAGE.ReadRetensionPriority", read_retension_priority, 0x1c, 0x4, true, 0x23ef1abf70ee53dc, 4, uint8_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CACHING_PAGE.DisablePrefetchTransfer", disable_prefetch_transfer, 0x20, 0x10, true, 0xbc364285b463953d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CACHING_PAGE.MinimumPrefetch", minimum_prefetch, 0x30, 0x10, true, 0x736eb3b05a5befc7)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CACHING_PAGE.MaximumPrefetch", maximum_prefetch, 0x40, 0x10, true, 0x327d7f450707a368)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CACHING_PAGE.MaximumPrefetchCeiling", maximum_prefetch_ceiling, 0x50, 0x10, true, 0x889a4df00c6236c5)
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
#define _m10
#define _m11
#endif