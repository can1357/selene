#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5Size", b_v5_size, 0x0, 0x20, true, 0x296852285ab3a151)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "BITMAPV5HEADER.bV5Width", b_v5_width, 0x20, 0x20, true, 0xdf817e44282615a2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "BITMAPV5HEADER.bV5Height", b_v5_height, 0x40, 0x20, true, 0xacefea1a4f3ce311)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "BITMAPV5HEADER.bV5Planes", b_v5_planes, 0x60, 0x10, true, 0xc50ee590f19e7338)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "BITMAPV5HEADER.bV5BitCount", b_v5_bit_count, 0x70, 0x10, true, 0x4bca751fea226228)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5Compression", b_v5_compression, 0x80, 0x20, true, 0x1c9e17a584cb7608)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5SizeImage", b_v5_size_image, 0xa0, 0x20, true, 0x778bc86c5b0823ed)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "BITMAPV5HEADER.bV5XPelsPerMeter", b_v5x_pels_per_meter, 0xc0, 0x20, true, 0xba4571ece44f1fc2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "BITMAPV5HEADER.bV5YPelsPerMeter", b_v5y_pels_per_meter, 0xe0, 0x20, true, 0x8687bd1b65f9107c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5ClrUsed", b_v5_clr_used, 0x100, 0x20, true, 0xefb17dbde3806a15)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5ClrImportant", b_v5_clr_important, 0x120, 0x20, true, 0x86a465bdb3b701fe)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5RedMask", b_v5_red_mask, 0x140, 0x20, true, 0xd4711c483fffceb1)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5GreenMask", b_v5_green_mask, 0x160, 0x20, true, 0x3f7ea5de77e4f38e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5BlueMask", b_v5_blue_mask, 0x180, 0x20, true, 0xd1bfa4c354393cca)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5AlphaMask", b_v5_alpha_mask, 0x1a0, 0x20, true, 0xd6130bd354627e51)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5CSType", b_v5cs_type, 0x1c0, 0x20, true, 0x5f5398ee7ff1115d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::icexyztriple_t), "BITMAPV5HEADER.bV5Endpoints", b_v5_endpoints, 0x1e0, 0x20, true, 0x6a016aa9864c2c35)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5GammaRed", b_v5_gamma_red, 0x300, 0x20, true, 0x78b21e259b73e009)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5GammaGreen", b_v5_gamma_green, 0x320, 0x20, true, 0x37ed2f12dc78f7f)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5GammaBlue", b_v5_gamma_blue, 0x340, 0x20, true, 0x4d496a0800116a1e)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5Intent", b_v5_intent, 0x360, 0x20, true, 0x97a5cd0cf0fc1b16)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5ProfileData", b_v5_profile_data, 0x380, 0x20, true, 0x8e38843eeb802de3)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5ProfileSize", b_v5_profile_size, 0x3a0, 0x20, true, 0xe926a93a87a7cc4)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "BITMAPV5HEADER.bV5Reserved", b_v5_reserved, 0x3c0, 0x20, true, 0xb235b40439c73f46)
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
#define _m20
#define _m21
#define _m22
#define _m23
#endif