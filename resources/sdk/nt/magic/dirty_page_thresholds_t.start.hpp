#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIRTY_PAGE_THRESHOLDS.DirtyPageThreshold", dirty_page_threshold, 0x0, 0x40, true, 0x14f13d6a274135c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIRTY_PAGE_THRESHOLDS.DirtyPageThresholdTop", dirty_page_threshold_top, 0x40, 0x40, true, 0x706852a58e4d989)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIRTY_PAGE_THRESHOLDS.DirtyPageThresholdBottom", dirty_page_threshold_bottom, 0x80, 0x40, true, 0x6a5023e03ac09c03)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DIRTY_PAGE_THRESHOLDS.DirtyPageTarget", dirty_page_target, 0xc0, 0x20, true, 0x48595a0b8a6f4212)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIRTY_PAGE_THRESHOLDS.AggregateAvailablePages", aggregate_available_pages, 0x100, 0x40, true, 0xe2dd800b00be9ead)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIRTY_PAGE_THRESHOLDS.AggregateDirtyPages", aggregate_dirty_pages, 0x140, 0x40, true, 0xb026189f9e2b153f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DIRTY_PAGE_THRESHOLDS.AvailableHistory", available_history, 0x180, 0x20, true, 0xfc4eee10f462199c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif