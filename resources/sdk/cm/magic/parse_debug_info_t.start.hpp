#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_PARSE_DEBUG_INFO.SymlinkCachedKcb", symlink_cached_kcb, 0x0, 0x40, true, 0xf92688138f365d9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_PARSE_DEBUG_INFO.StartingKcb", starting_kcb, 0x40, 0x40, true, 0x784709857249bacc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_PARSE_DEBUG_INFO.KcbCacheResult", kcb_cache_result, 0x80, 0x40, true, 0xc6fb38688438cdca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_PARSE_DEBUG_INFO.WalkResult", walk_result, 0xc0, 0x40, true, 0x43a6e22bff5f24fa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_control_block_t*), "_CM_PARSE_DEBUG_INFO.DeepestKcbFound", deepest_kcb_found, 0x100, 0x40, true, 0x6c2dfa1d1a450610)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PARSE_DEBUG_INFO.KcbCacheLevels", kcb_cache_levels, 0x140, 0x8, true, 0x3d5fc128515f4338)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PARSE_DEBUG_INFO.WalkLevels", walk_levels, 0x148, 0x8, true, 0x6884660e63640563)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_PARSE_DEBUG_INFO.FailureCount", failure_count, 0x150, 0x8, true, 0x99d1ef6b6c691641)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CM_PARSE_DEBUG_INFO.FailurePoints.Status", status, 0x0, 0x20, true, 0x5a54107866a138be)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_PARSE_DEBUG_INFO.FailurePoints.Point", point, 0x20, 0x20, true, 0xb534f9ad0c2cd855)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<u0_failure_points_t, 4>), "_CM_PARSE_DEBUG_INFO.FailurePoints", failure_points, 0x160, 0x0, true, 0x42bbd25b09f4ecac)
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
#endif