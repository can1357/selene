#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SEG_CONTEXT.SegmentMask", segment_mask, 0x0, 0x40, true, 0x1d687fad2a48c0cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_SEG_CONTEXT.UnitShift", unit_shift, 0x40, 0x8, true, 0x17cc8062ae2d07d6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_SEG_CONTEXT.PagesPerUnitShift", pages_per_unit_shift, 0x48, 0x8, true, 0x36640db33bf125c5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_SEG_CONTEXT.FirstDescriptorIndex", first_descriptor_index, 0x50, 0x8, true, 0xb28caa489aeb763c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_SEG_CONTEXT.CachedCommitSoftShift", cached_commit_soft_shift, 0x58, 0x8, true, 0xf66f083298ed21e0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_SEG_CONTEXT.CachedCommitHighShift", cached_commit_high_shift, 0x60, 0x8, true, 0xf5dd1ee9bea2290d)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_HEAP_SEG_CONTEXT.Flags.LargePagePolicy", large_page_policy, 0x0, 0x3, true, 0x5c91d62215d1ab82, 3, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_SEG_CONTEXT.Flags.FullDecommit", full_decommit, 0x3, 0x1, true, 0x36eb8b6edd9e2c22, 1, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_SEG_CONTEXT.Flags.ReleaseEmptySegments", release_empty_segments, 0x4, 0x1, true, 0x4aa1299ba9e6865, 1, uint8_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_SEG_CONTEXT.Flags.AllFlags", all_flags, 0x0, 0x8, true, 0xa970e1924af7b420)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_SEG_CONTEXT.Flags.LargeHeapFirstSegment", large_heap_first_segment, 0x0, 0x0, false, 0xe66f60806c372efe, 1, uint8_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_HEAP_SEG_CONTEXT.Flags", flags, 0x68, 0x8, true, 0xf26c9457e3cb5eed)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_SEG_CONTEXT.MaxAllocationSize", max_allocation_size, 0x80, 0x20, true, 0xe6689fb63abcb330)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_HEAP_SEG_CONTEXT.OlpStatsOffset", olp_stats_offset, 0xa0, 0x10, true, 0x3c6afcee2a786ceb)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_HEAP_SEG_CONTEXT.MemStatsOffset", mem_stats_offset, 0xb0, 0x10, true, 0xd8519685fa50664e)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_SEG_CONTEXT.LfhContext", lfh_context, 0xc0, 0x40, true, 0x80992ea5598b0a55)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_SEG_CONTEXT.VsContext", vs_context, 0x100, 0x40, true, 0x9298431a34dd0b49)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hp_env_handle_t), "_HEAP_SEG_CONTEXT.EnvHandle", env_handle, 0x140, 0x80, true, 0xa013fb97aa7c9a05)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_SEG_CONTEXT.Heap", heap, 0x1c0, 0x40, true, 0xdb7468b4527a4b23)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SEG_CONTEXT.SegmentLock", segment_lock, 0x200, 0x40, true, 0x5e161f1c975b840e)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_HEAP_SEG_CONTEXT.SegmentListHead", segment_list_head, 0x240, 0x80, true, 0x5894bef162ad32ea)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SEG_CONTEXT.SegmentCount", segment_count, 0x2c0, 0x40, true, 0x47c358ed6de41449)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_HEAP_SEG_CONTEXT.FreePageRanges", free_page_ranges, 0x300, 0x80, true, 0xcf0efb7e5e8911a0)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_SEG_CONTEXT.FreeSegmentListLock", free_segment_list_lock, 0x380, 0x40, true, 0x349d97db9662e735)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::single_list_entry_t, 2>), "_HEAP_SEG_CONTEXT.FreeSegmentList", free_segment_list, 0x3c0, 0x80, true, 0xc3fddfc9ec86d96f)
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
#endif