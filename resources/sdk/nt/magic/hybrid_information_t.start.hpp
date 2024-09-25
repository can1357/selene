#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_INFORMATION.Version", version, 0x0, 0x20, true, 0x3b835b3d50d1b0bd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_INFORMATION.Size", size, 0x20, 0x20, true, 0xd818a0313d766120)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_HYBRID_INFORMATION.HybridSupported", hybrid_supported, 0x40, 0x8, true, 0xe18e272b4419b8b9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::nvcache_status_t), "_HYBRID_INFORMATION.Status", status, 0x60, 0x20, true, 0xec4c246c1097266e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::nvcache_type_t), "_HYBRID_INFORMATION.CacheTypeEffective", cache_type_effective, 0x80, 0x20, true, 0xdc47320cdd0618fd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::nvcache_type_t), "_HYBRID_INFORMATION.CacheTypeDefault", cache_type_default, 0xa0, 0x20, true, 0x43abc9efdbf29f6b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_INFORMATION.FractionBase", fraction_base, 0xc0, 0x20, true, 0x20408138da29d76a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_HYBRID_INFORMATION.CacheSize", cache_size, 0x100, 0x40, true, 0x7000ac822328fa92)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HYBRID_INFORMATION.Attributes.WriteCacheChangeable", write_cache_changeable, 0x0, 0x1, true, 0x6201e25f760bc81f, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HYBRID_INFORMATION.Attributes.WriteThroughIoSupported", write_through_io_supported, 0x1, 0x1, true, 0x2427f116216437f7, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HYBRID_INFORMATION.Attributes.FlushCacheSupported", flush_cache_supported, 0x2, 0x1, true, 0x8d7baa6034bbd8c6, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HYBRID_INFORMATION.Attributes.Removable", removable, 0x3, 0x1, true, 0xfed3d9b919483754, 1, uint32_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_attributes_t), "_HYBRID_INFORMATION.Attributes", attributes, 0x140, 0x20, true, 0xe896c19cde7072b5)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_HYBRID_INFORMATION.Priorities.PriorityLevelCount", priority_level_count, 0x0, 0x8, true, 0x774a1152de8f6038)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_HYBRID_INFORMATION.Priorities.MaxPriorityBehavior", max_priority_behavior, 0x8, 0x8, true, 0x4846e0cfc97a4ccc)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_HYBRID_INFORMATION.Priorities.OptimalWriteGranularity", optimal_write_granularity, 0x10, 0x8, true, 0x50e5abeb9d7aa39d)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_INFORMATION.Priorities.DirtyThresholdLow", dirty_threshold_low, 0x20, 0x20, true, 0x3ff6e9c989d8d9da)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_INFORMATION.Priorities.DirtyThresholdHigh", dirty_threshold_high, 0x40, 0x20, true, 0xc57860963ad31c8e)
#define _m18 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HYBRID_INFORMATION.Priorities.SupportedCommands.CacheDisable", cache_disable, 0x0, 0x1, true, 0x1b50ed92e0e8a2af, 1, uint32_t)
#define _m19 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HYBRID_INFORMATION.Priorities.SupportedCommands.SetDirtyThreshold", set_dirty_threshold, 0x1, 0x1, true, 0x394f37f8abdc8ccb, 1, uint32_t)
#define _m20 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HYBRID_INFORMATION.Priorities.SupportedCommands.PriorityDemoteBySize", priority_demote_by_size, 0x2, 0x1, true, 0x276b6efc57c8f486, 1, uint32_t)
#define _m21 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HYBRID_INFORMATION.Priorities.SupportedCommands.PriorityChangeByLbaRange", priority_change_by_lba_range, 0x3, 0x1, true, 0x23b00cfd6581283e, 1, uint32_t)
#define _m22 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HYBRID_INFORMATION.Priorities.SupportedCommands.Evict", evict, 0x4, 0x1, true, 0xdd3fc4ba0e47affb, 1, uint32_t)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_INFORMATION.Priorities.SupportedCommands.MaxEvictCommands", max_evict_commands, 0x20, 0x20, true, 0x4b26cbe76da7d132)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_INFORMATION.Priorities.SupportedCommands.MaxLbaRangeCountForEvict", max_lba_range_count_for_evict, 0x40, 0x20, true, 0xeb669076973ffa1)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HYBRID_INFORMATION.Priorities.SupportedCommands.MaxLbaRangeCountForChangeLba", max_lba_range_count_for_change_lba, 0x60, 0x20, true, 0xbaa1432b3d772be)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_supported_commands_t), "_HYBRID_INFORMATION.Priorities.SupportedCommands", supported_commands, 0x60, 0x80, true, 0x946ed483daa1ec5f)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::nvcache_priority_level_descriptor_t>), "_HYBRID_INFORMATION.Priorities.Priority", priority, 0xe0, 0x0, true, 0x577cb6e924ead9b9)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_priorities_t), "_HYBRID_INFORMATION.Priorities", priorities, 0x160, 0xe0, true, 0x1db310d8071817a4)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#endif