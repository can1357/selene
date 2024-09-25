#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagBITMAP.bmType", bm_type, 0x0, 0x20, true, 0xb8f7842430c278a1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagBITMAP.bmWidth", bm_width, 0x20, 0x20, true, 0x744e48ee2488f019)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagBITMAP.bmHeight", bm_height, 0x40, 0x20, true, 0x46218e7d9718a926)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagBITMAP.bmWidthBytes", bm_width_bytes, 0x60, 0x20, true, 0x330f36ff05bbca96)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagBITMAP.bmPlanes", bm_planes, 0x80, 0x10, true, 0xd4499518cd102549)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagBITMAP.bmBitsPixel", bm_bits_pixel, 0x90, 0x10, true, 0x6c662cf8b0883433)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "tagBITMAP.bmBits", bm_bits, 0xc0, 0x40, true, 0x4863e208abe348c9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif