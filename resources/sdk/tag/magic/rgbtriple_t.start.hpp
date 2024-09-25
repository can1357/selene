#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagRGBTRIPLE.rgbtBlue", rgbt_blue, 0x0, 0x8, true, 0x53eae844d05935d1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagRGBTRIPLE.rgbtGreen", rgbt_green, 0x8, 0x8, true, 0xc20955a8c219db3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagRGBTRIPLE.rgbtRed", rgbt_red, 0x10, 0x8, true, 0x3313714339cd590e)
#else
#define _m00
#define _m01
#define _m02
#endif