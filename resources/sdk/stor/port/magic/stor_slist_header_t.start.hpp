#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_SLIST_HEADER.Alignment", alignment, 0x0, 0x40, true, 0xd55fb381c274f6fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_SLIST_HEADER.Region", region, 0x40, 0x40, true, 0x3c37a1029dc33f56)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_STOR_SLIST_HEADER.Header8.Depth", depth, 0x0, 0x10, true, 0xc05f9156401e89b, 16, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint9_t), "_STOR_SLIST_HEADER.Header8.Sequence", sequence, 0x10, 0x9, true, 0x5b98c2eb95dd122f, 9, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint39_t), "_STOR_SLIST_HEADER.Header8.NextEntry", next_entry, 0x19, 0x27, true, 0x481ef674dd05baa5, 39, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_SLIST_HEADER.Header8.HeaderType", header_type, 0x40, 0x1, true, 0x7d8765ad9c252e90, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_SLIST_HEADER.Header8.Init", init, 0x41, 0x1, true, 0xe52caa173e630c8e, 1, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_STOR_SLIST_HEADER.Header8.Region", region, 0x7d, 0x3, true, 0x99ba3ce15565bed3, 3, uint64_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_header8_t), "_STOR_SLIST_HEADER.Header8", header8, 0x0, 0x80, true, 0x2d1aeee7a327e412)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_STOR_SLIST_HEADER.Header16.Depth", depth, 0x0, 0x10, true, 0x702c9d0b437c0e82, 16, uint64_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint48_t), "_STOR_SLIST_HEADER.Header16.Sequence", sequence, 0x10, 0x30, true, 0x1dbedfe62635bfea, 48, uint64_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_SLIST_HEADER.Header16.HeaderType", header_type, 0x40, 0x1, true, 0x6f79ee0df71804f7, 1, uint64_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_SLIST_HEADER.Header16.Init", init, 0x41, 0x1, true, 0xf2598d134b464821, 1, uint64_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint60_t), "_STOR_SLIST_HEADER.Header16.NextEntry", next_entry, 0x44, 0x3c, true, 0x1f59c513548a4dbd, 60, uint64_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_header16_t), "_STOR_SLIST_HEADER.Header16", header16, 0x0, 0x80, true, 0x28e6d93a73a3633e)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_STOR_SLIST_HEADER.HeaderX64.Depth", depth, 0x0, 0x10, true, 0x2cefb1316dad5906, 16, uint64_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint48_t), "_STOR_SLIST_HEADER.HeaderX64.Sequence", sequence, 0x10, 0x30, true, 0x3beb6e1e1ae3dd98, 48, uint64_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_STOR_SLIST_HEADER.HeaderX64.HeaderType", header_type, 0x40, 0x1, true, 0xedf0f14d79b97c26, 1, uint64_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint60_t), "_STOR_SLIST_HEADER.HeaderX64.NextEntry", next_entry, 0x44, 0x3c, true, 0xa3a4579369d97a28, 60, uint64_t)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_header_x64_t), "_STOR_SLIST_HEADER.HeaderX64", header_x64, 0x0, 0x80, true, 0x545a5724c82f60f7)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif