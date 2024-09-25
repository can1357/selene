#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagSIZE.cx", cx, 0x0, 0x20, true, 0x1891ed0f980dfcb8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagSIZE.cy", cy, 0x20, 0x20, true, 0xc10c006cc9795e5)
#else
#define _m00
#define _m01
#endif