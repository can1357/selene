#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::cached_pte_t, 8>), "_MI_CACHED_PTES.Bins", bins, 0x0, 0x0, true, 0x935007b9a76621d4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_CACHED_PTES.CachedPteCount", cached_pte_count, 0x200, 0x20, true, 0x6801adfd6b49dd2e)
#else
#define _m00
#define _m01
#endif