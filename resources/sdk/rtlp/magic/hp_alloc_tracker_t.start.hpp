#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTLP_HP_ALLOC_TRACKER.BaseAddress", base_address, 0x0, 0x40, true, 0x9d5670d4d8c07347)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::csparse_bitmap_t), "_RTLP_HP_ALLOC_TRACKER.AllocTrackerBitmap", alloc_tracker_bitmap, 0x40, 0x0, true, 0xa6c4d174468274df)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 72>), "_RTLP_HP_ALLOC_TRACKER.AllocTrackerBitmapBuffer", alloc_tracker_bitmap_buffer, 0x40, 0x40, true, 0x40a1116a528879c1)
#else
#define _m00
#define _m01
#define _m02
#endif