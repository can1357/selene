#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOINT.x", x, 0x0, 0x20, true, 0xc951c9ecf369fec1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOINT.y", y, 0x20, 0x20, true, 0x38ed6e90531a5a2e)
#else
#define _m00
#define _m01
#endif