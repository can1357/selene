#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_SPARSE_BITMAP_RANGE.Lock", lock, 0x0, 0x40, true, 0xc526ccaa49576b28)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_RTL_SPARSE_BITMAP_RANGE.RangeBitmap", range_bitmap, 0x40, 0x80, true, 0xb8ca0717217c556a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_RTL_SPARSE_BITMAP_RANGE.Next", next, 0x0, 0x40, true, 0xa436b3baedcc25ca)
#else
#define _m00
#define _m01
#define _m02
#endif