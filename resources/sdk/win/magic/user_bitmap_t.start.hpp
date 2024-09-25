#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_userBITMAP.bmType", bm_type, 0x0, 0x20, true, 0xc2d5a71e5a6fe2e8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_userBITMAP.bmWidth", bm_width, 0x20, 0x20, true, 0xd9007285812cd155)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_userBITMAP.bmHeight", bm_height, 0x40, 0x20, true, 0x309b18f89fad126a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_userBITMAP.bmWidthBytes", bm_width_bytes, 0x60, 0x20, true, 0x95027a1f6dab9a50)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_userBITMAP.bmPlanes", bm_planes, 0x80, 0x10, true, 0xa1b9186fc6e51349)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_userBITMAP.bmBitsPixel", bm_bits_pixel, 0x90, 0x10, true, 0xffffbb17b2580cf2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_userBITMAP.cbSize", cb_size, 0xa0, 0x20, true, 0x6ad7168d0ad8c8bb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_userBITMAP.pBuffer", p_buffer, 0xc0, 0x8, true, 0xcf438c9d30417f79)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif