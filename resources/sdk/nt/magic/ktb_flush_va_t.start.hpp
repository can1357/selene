#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_KTB_FLUSH_VA.NumberOfEntries", number_of_entries, 0x0, 0xa, true, 0x1f44218be5d43d7b, 10, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_KTB_FLUSH_VA.PageSize", page_size, 0xa, 0x2, true, 0x47393cb7b4845962, 2, uint64_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTB_FLUSH_VA.Va", va, 0x0, 0x40, true, 0xf1c1e7bcd6fdd94c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTB_FLUSH_VA.VaLong", va_long, 0x0, 0x40, true, 0xee2cc42729fe8ecd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif