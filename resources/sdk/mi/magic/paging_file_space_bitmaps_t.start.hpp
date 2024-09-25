#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGING_FILE_SPACE_BITMAPS.RefCount", ref_count, 0x0, 0x20, true, 0xe07c39b6beaea15d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::paging_file_space_bitmaps_t*), "_MI_PAGING_FILE_SPACE_BITMAPS.Anchor", anchor, 0x0, 0x40, true, 0x5a29b6d12cc386ae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_MI_PAGING_FILE_SPACE_BITMAPS.AllocationBitmap", allocation_bitmap, 0x40, 0x80, true, 0xdd623344f948b96d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_MI_PAGING_FILE_SPACE_BITMAPS.ReservationBitmap", reservation_bitmap, 0xc0, 0x80, true, 0x9377c692757d3e95)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_MI_PAGING_FILE_SPACE_BITMAPS.EvictedBitmap", evicted_bitmap, 0xc0, 0x80, true, 0xb53fa37bf69c30ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif