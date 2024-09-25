#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUMMUCAPS.ReadOnlyMemorySupported", read_only_memory_supported, 0x0, 0x1, true, 0xe808bcdb5abed244, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUMMUCAPS.NoExecuteMemorySupported", no_execute_memory_supported, 0x1, 0x1, true, 0x30d34ea965129d3a, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUMMUCAPS.ZeroInPteSupported", zero_in_pte_supported, 0x2, 0x1, true, 0x8e6e505a006716c4, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUMMUCAPS.ExplicitPageTableInvalidation", explicit_page_table_invalidation, 0x3, 0x1, true, 0xa1f764e2a54c11d1, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUMMUCAPS.CacheCoherentMemorySupported", cache_coherent_memory_supported, 0x4, 0x1, true, 0x97c1a4670fcc30cd, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUMMUCAPS.PageTableUpdateRequireAddressSpaceIdle", page_table_update_require_address_space_idle, 0x5, 0x1, true, 0x234888036c2177c9, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUMMUCAPS.LargePageSupported", large_page_supported, 0x6, 0x1, true, 0x7fd91bea32d47637, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUMMUCAPS.DualPteSupported", dual_pte_supported, 0x7, 0x1, true, 0x2c8c00585bab14f2, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUMMUCAPS.AllowNonAlignedLargePageAddress", allow_non_aligned_large_page_address, 0x8, 0x1, true, 0xc560cb4c3e58ce09, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUMMUCAPS.SysMem64KBPageSupported", sys_mem64kb_page_supported, 0x9, 0x1, true, 0xc537c38c9719d529, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUMMUCAPS.InvalidTlbEntriesNotCached", invalid_tlb_entries_not_cached, 0xa, 0x1, true, 0x971601b0d5b80514, 1, uint32_t)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GPUMMUCAPS.Value", value, 0x0, 0x20, true, 0x3861e1d280f54869)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::pagetableupdatemode_t), "_DXGK_GPUMMUCAPS.PageTableUpdateMode", page_table_update_mode, 0x20, 0x20, true, 0xebb3f2d45dbf5101)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GPUMMUCAPS.VirtualAddressBitCount", virtual_address_bit_count, 0x40, 0x20, true, 0xf34b10bdcb856ce5)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GPUMMUCAPS.LeafPageTableSizeFor64KPagesInBytes", leaf_page_table_size_for64k_pages_in_bytes, 0x60, 0x20, true, 0x455bd1e8b74e9998)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GPUMMUCAPS.PageTableLevelCount", page_table_level_count, 0x80, 0x20, true, 0x71eca846d098aff9)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GPUMMUCAPS.LegacyBehaviors.SourcePageTableVaInTransfer", source_page_table_va_in_transfer, 0x0, 0x1, true, 0x60ccb1ec68dde125, 1, uint32_t)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_legacy_behaviors_t), "_DXGK_GPUMMUCAPS.LegacyBehaviors", legacy_behaviors, 0xa0, 0x20, true, 0xf8be08d4574ebe95)
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
#endif