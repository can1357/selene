#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBITMAPINFOHEADER.biSize", bi_size, 0x0, 0x20, true, 0x4060bd1ae7c3d814)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagBITMAPINFOHEADER.biWidth", bi_width, 0x20, 0x20, true, 0xec15cb9070db5c60)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagBITMAPINFOHEADER.biHeight", bi_height, 0x40, 0x20, true, 0x695a8a6842e68c27)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagBITMAPINFOHEADER.biPlanes", bi_planes, 0x60, 0x10, true, 0x31f00e8da0f3a687)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagBITMAPINFOHEADER.biBitCount", bi_bit_count, 0x70, 0x10, true, 0x2438217bcaafba1f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBITMAPINFOHEADER.biCompression", bi_compression, 0x80, 0x20, true, 0xbe526bfffcd43d95)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBITMAPINFOHEADER.biSizeImage", bi_size_image, 0xa0, 0x20, true, 0xed8b45be14d69f8d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagBITMAPINFOHEADER.biXPelsPerMeter", bi_x_pels_per_meter, 0xc0, 0x20, true, 0x66755e2f218a96a0)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagBITMAPINFOHEADER.biYPelsPerMeter", bi_y_pels_per_meter, 0xe0, 0x20, true, 0x8174bef24535c3da)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBITMAPINFOHEADER.biClrUsed", bi_clr_used, 0x100, 0x20, true, 0xd6f586fa081bf670)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagBITMAPINFOHEADER.biClrImportant", bi_clr_important, 0x120, 0x20, true, 0xa31d81b75337fc93)
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
#endif