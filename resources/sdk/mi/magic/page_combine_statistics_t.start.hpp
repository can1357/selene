#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGE_COMBINE_STATISTICS.PagesScannedActive", pages_scanned_active, 0x0, 0x40, true, 0x2f056e23008d9854)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGE_COMBINE_STATISTICS.PagesScannedStandby", pages_scanned_standby, 0x40, 0x40, true, 0xdda53b064a8a2076)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PAGE_COMBINE_STATISTICS.PagesCombined", pages_combined, 0x80, 0x40, true, 0x319831666363a27e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGE_COMBINE_STATISTICS.CombineScanCount", combine_scan_count, 0xc0, 0x20, true, 0xf19505cb31758940)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_PAGE_COMBINE_STATISTICS.CombinedBlocksInUse", combined_blocks_in_use, 0xe0, 0x20, true, 0x8a4b83ccc7c3ae29)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_PAGE_COMBINE_STATISTICS.SumCombinedBlocksReferenceCount", sum_combined_blocks_reference_count, 0x100, 0x20, true, 0x37bdb426dde81d6c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGE_COMBINE_STATISTICS.NonSlabPagesUsedForInPage", non_slab_pages_used_for_in_page, 0x0, 0x0, false, 0x30bea93f5128d5dd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif