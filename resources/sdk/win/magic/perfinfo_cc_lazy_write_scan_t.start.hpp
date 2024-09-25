#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LAZY_WRITE_SCAN.WorkItemKey", work_item_key, 0x0, 0x40, true, 0x939f4b0bae1bb8f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_LAZY_WRITE_SCAN.ReasonForFlush", reason_for_flush, 0x40, 0x20, true, 0xc4bc78d2a853a56b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_LAZY_WRITE_SCAN.PagesToWrite", pages_to_write, 0x60, 0x20, true, 0x3d53c8b65bdaf56a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LAZY_WRITE_SCAN.TotalDirtyPages", total_dirty_pages, 0x80, 0x40, true, 0xbdc49634fe1dac47)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LAZY_WRITE_SCAN.AvailablePages", available_pages, 0xc0, 0x40, true, 0xbe0b99c60525840)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LAZY_WRITE_SCAN.DirtyPageThreshold", dirty_page_threshold, 0x100, 0x40, true, 0xfa2db878acdd0397)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LAZY_WRITE_SCAN.NumberOfMappedVacbs", number_of_mapped_vacbs, 0x140, 0x40, true, 0x6da0c809f3171b53)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LAZY_WRITE_SCAN.TopDirtyPageThreshold", top_dirty_page_threshold, 0x180, 0x40, true, 0xf682482a1c614609)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LAZY_WRITE_SCAN.BottomDirtyPageThreshold", bottom_dirty_page_threshold, 0x1c0, 0x40, true, 0x15fb5d6d69497611)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LAZY_WRITE_SCAN.AverageAvailablePages", average_available_pages, 0x200, 0x40, true, 0xc171726a54848a54)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LAZY_WRITE_SCAN.AverageDirtyPages", average_dirty_pages, 0x240, 0x40, true, 0x2e66c2efd72f3a3d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_LAZY_WRITE_SCAN.ConsecutiveWorklessLazywriteScans", consecutive_workless_lazywrite_scans, 0x280, 0x40, true, 0x3320db4dcaceaaa0)
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