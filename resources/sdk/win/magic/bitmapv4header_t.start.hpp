#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4Size", b_v4_size, 0x0, 0x20, true, 0x66a32f7bd8dc9887)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "BITMAPV4HEADER.bV4Width", b_v4_width, 0x20, 0x20, true, 0x8a365bd7383b619d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "BITMAPV4HEADER.bV4Height", b_v4_height, 0x40, 0x20, true, 0xdf13883e12cac3e3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "BITMAPV4HEADER.bV4Planes", b_v4_planes, 0x60, 0x10, true, 0x6db4c5fba804cd51)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "BITMAPV4HEADER.bV4BitCount", b_v4_bit_count, 0x70, 0x10, true, 0xf9d658f41edaa2ae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4V4Compression", b_v4v4_compression, 0x80, 0x20, true, 0x924430688347753a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4SizeImage", b_v4_size_image, 0xa0, 0x20, true, 0xd25092fe24be7491)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "BITMAPV4HEADER.bV4XPelsPerMeter", b_v4x_pels_per_meter, 0xc0, 0x20, true, 0xf41482cf19921d28)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "BITMAPV4HEADER.bV4YPelsPerMeter", b_v4y_pels_per_meter, 0xe0, 0x20, true, 0xa698bb97e22cd8a9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4ClrUsed", b_v4_clr_used, 0x100, 0x20, true, 0x3bc80e32bbb499d5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4ClrImportant", b_v4_clr_important, 0x120, 0x20, true, 0xc68007edf73c973)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4RedMask", b_v4_red_mask, 0x140, 0x20, true, 0xb318dbdb8bd69f93)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4GreenMask", b_v4_green_mask, 0x160, 0x20, true, 0x29d93ab87a3d75c1)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4BlueMask", b_v4_blue_mask, 0x180, 0x20, true, 0x4fa1176af6f5c53a)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4AlphaMask", b_v4_alpha_mask, 0x1a0, 0x20, true, 0xca97d9b5ce8e4e7b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4CSType", b_v4cs_type, 0x1c0, 0x20, true, 0xbda29ee408e0119f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::icexyztriple_t), "BITMAPV4HEADER.bV4Endpoints", b_v4_endpoints, 0x1e0, 0x20, true, 0xfd7aa9a2380f9e4d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4GammaRed", b_v4_gamma_red, 0x300, 0x20, true, 0xb349bd963e712e7f)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4GammaGreen", b_v4_gamma_green, 0x320, 0x20, true, 0x669c3484887c8fc8)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV4HEADER.bV4GammaBlue", b_v4_gamma_blue, 0x340, 0x20, true, 0xe958835b1a060b70)
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