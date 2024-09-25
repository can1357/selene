#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagANIMATIONINFO.cbSize", cb_size, 0x0, 0x20, true, 0xd45324d7f6daa5d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagANIMATIONINFO.iMinAnimate", i_min_animate, 0x20, 0x20, true, 0xbd477e0c6f39b64e)
#else
#define _m00
#define _m01
#endif