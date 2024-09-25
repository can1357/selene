#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_MBCB.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0xb2f80798a94fb8f5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_MBCB.NodeIsInZone", node_is_in_zone, 0x10, 0x10, true, 0xb2dd2a077c28d3d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MBCB.PagesToWrite", pages_to_write, 0x20, 0x20, true, 0x56edc7d4307b6436)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MBCB.DirtyPages", dirty_pages, 0x40, 0x20, true, 0xdb3fe340f580409c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MBCB.BitmapRanges", bitmap_ranges, 0x80, 0x80, true, 0x38c5a7c7e2f76e89)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MBCB.ResumeWritePage", resume_write_page, 0x100, 0x40, true, 0xf40d22981b282bd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MBCB.MostRecentlyDirtiedPage", most_recently_dirtied_page, 0x140, 0x40, true, 0x35cb8f8be25fcb01)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::bitmap_range_t), "_MBCB.BitmapRange1", bitmap_range1, 0x180, 0x80, true, 0xb339ada643375d6f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::bitmap_range_t), "_MBCB.BitmapRange2", bitmap_range2, 0x300, 0x80, true, 0x8eea2808fe419978)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::bitmap_range_t), "_MBCB.BitmapRange3", bitmap_range3, 0x480, 0x80, true, 0x5fac0def17f9cfe1)
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
#endif