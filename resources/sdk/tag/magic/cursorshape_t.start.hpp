#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCURSORSHAPE.xHotSpot", x_hot_spot, 0x0, 0x20, true, 0xdd111e8a5fe10a1f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCURSORSHAPE.yHotSpot", y_hot_spot, 0x20, 0x20, true, 0x42d89db24afcc6d6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCURSORSHAPE.cx", cx, 0x40, 0x20, true, 0xfb95e2c8a5ac3d95)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCURSORSHAPE.cy", cy, 0x60, 0x20, true, 0xcc322dcd79e4c046)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCURSORSHAPE.cbWidth", cb_width, 0x80, 0x20, true, 0x94de08588bf3f92b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "tagCURSORSHAPE.Planes", planes, 0xa0, 0x8, true, 0x5b0930cd4c002267)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "tagCURSORSHAPE.BitsPixel", bits_pixel, 0xa8, 0x8, true, 0xa090338b0e900811)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif