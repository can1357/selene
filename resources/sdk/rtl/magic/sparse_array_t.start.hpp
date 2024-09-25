#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_SPARSE_ARRAY.ElementCount", element_count, 0x0, 0x40, true, 0xa22ed63dab594a0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_SPARSE_ARRAY.ElementSizeShift", element_size_shift, 0x40, 0x20, true, 0x70c8d95638ffdf8c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::csparse_bitmap_t), "_RTL_SPARSE_ARRAY.Bitmap", bitmap, 0x80, 0x0, true, 0x21fbc24766c4d37c)
#else
#define _m00
#define _m01
#define _m02
#endif