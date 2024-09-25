#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagRGBQUAD.rgbBlue", rgb_blue, 0x0, 0x8, true, 0x39c74fb7ffe92ee2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagRGBQUAD.rgbGreen", rgb_green, 0x8, 0x8, true, 0x97bdaa3eb7cab688)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagRGBQUAD.rgbRed", rgb_red, 0x10, 0x8, true, 0x615d5acb966288d9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagRGBQUAD.rgbReserved", rgb_reserved, 0x18, 0x8, true, 0x8b8ccc987c00ed51)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif