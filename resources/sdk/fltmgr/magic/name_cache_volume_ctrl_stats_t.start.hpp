#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_VOLUME_CTRL_STATS.AllContextsTemporary", all_contexts_temporary, 0x0, 0x20, true, 0x2f849bf9af782bb9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_VOLUME_CTRL_STATS.PurgeNameCache", purge_name_cache, 0x20, 0x20, true, 0x3d1680b27ad90809)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::name_cache_list_ctrl_stats_t), "_NAME_CACHE_VOLUME_CTRL_STATS.NormalizedNames", normalized_names, 0x40, 0xe0, true, 0xdd3ed80a86f17a7a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::name_cache_list_ctrl_stats_t), "_NAME_CACHE_VOLUME_CTRL_STATS.OpenedNames", opened_names, 0x120, 0xe0, true, 0xe3b1c16e41833ed)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::name_cache_list_ctrl_stats_t), "_NAME_CACHE_VOLUME_CTRL_STATS.ShortNames", short_names, 0x200, 0xe0, true, 0x35d59f0500c42124)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_VOLUME_CTRL_STATS.AncestorLookup", ancestor_lookup, 0x2e0, 0x20, true, 0xa65f0244a9ed0892)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_VOLUME_CTRL_STATS.ParentHit", parent_hit, 0x300, 0x20, true, 0xc1b99dddf2550bb5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CACHE_VOLUME_CTRL_STATS.NonParentHit", non_parent_hit, 0x320, 0x20, true, 0x3c6e4afbd2562398)
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