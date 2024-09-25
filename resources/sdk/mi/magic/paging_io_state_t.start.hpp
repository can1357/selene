#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_PAGING_IO_STATE.PageFileHead", page_file_head, 0x0, 0x40, true, 0xc79a6131e681ba13)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PAGING_IO_STATE.PageFileHeadSpinLock", page_file_head_spin_lock, 0x40, 0x20, true, 0x318d457b7cef4e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_PAGING_IO_STATE.PrefetchSeekThreshold", prefetch_seek_threshold, 0x60, 0x20, true, 0x455eab73b5f76b02)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGING_IO_STATE.InPageSinglePages", in_page_single_pages, 0x80, 0x20, true, 0xa8057a05784ff99d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::slist_header_t, 2>), "_MI_PAGING_IO_STATE.InPageSupportSListHead", in_page_support_s_list_head, 0x100, 0x0, true, 0xd02a85605f3a2705)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MI_PAGING_IO_STATE.InPageSupportSListMinimum", in_page_support_s_list_minimum, 0x300, 0x10, true, 0x1da448e5ab6d1df1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PAGING_IO_STATE.DelayPageFaults", delay_page_faults, 0x4e0, 0x20, true, 0xb0d20398afa6984b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGING_IO_STATE.FileCompressionBoundary", file_compression_boundary, 0x500, 0x20, true, 0x585668c9773dc150)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PAGING_IO_STATE.MdlsAdjusted", mdls_adjusted, 0x520, 0x8, true, 0xd2c758838b9e9e78)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::slist_header_t, 2>), "_MI_PAGING_IO_STATE.ReservedInPageSupportSListHead", reserved_in_page_support_s_list_head, 0x200, 0x0, true, 0x7b77c590ee5717e4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mminpage_support_t*, 2>), "_MI_PAGING_IO_STATE.FirstReservedInPageBlock", first_reserved_in_page_block, 0x340, 0x80, true, 0xcfc08afc138b2f81)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mminpage_support_t*, 2>), "_MI_PAGING_IO_STATE.LastReservedInPageBlock", last_reserved_in_page_block, 0x3c0, 0x80, true, 0x43450388a9ddb23)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MI_PAGING_IO_STATE.ReservedPtes", reserved_ptes, 0x440, 0x40, true, 0xffd6437f822f6bc4)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGING_IO_STATE.ReservedPtesLock", reserved_ptes_lock, 0x480, 0x40, true, 0xec6b0203201a0da2)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGING_IO_STATE.ReservedPtesBitBuffer", reserved_ptes_bit_buffer, 0x4c0, 0x20, true, 0xde5140e1a6b4de72)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::pagefile_metadata_layout_t), "_MI_PAGING_IO_STATE.PageFileMetadata", page_file_metadata, 0x0, 0x0, false, 0x1e47f505d42f8aba)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MI_PAGING_IO_STATE.FileOnlyReservePtes", file_only_reserve_ptes, 0x0, 0x0, false, 0xcf1f132a841733e7)
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
#endif