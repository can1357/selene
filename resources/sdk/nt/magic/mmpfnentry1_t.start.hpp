#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MMPFNENTRY1.PageLocation", page_location, 0x0, 0x3, true, 0x44c265113f4b49f4, 3, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFNENTRY1.WriteInProgress", write_in_progress, 0x3, 0x1, true, 0xf4c8015ed9a74c45, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFNENTRY1.Modified", modified, 0x4, 0x1, true, 0xbf1d9ee75973dc81, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPFNENTRY1.ReadInProgress", read_in_progress, 0x5, 0x1, true, 0x2c2ae3c8df16da72, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MMPFNENTRY1.CacheAttribute", cache_attribute, 0x6, 0x2, true, 0x6687be28451cbc5d, 2, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif