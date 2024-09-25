#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPWININFOW.wStructSize", w_struct_size, 0x0, 0x20, true, 0x86735ea432bf5814)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPWININFOW.x", x, 0x20, 0x20, true, 0xdc859f54cc2dabe8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPWININFOW.y", y, 0x40, 0x20, true, 0xfddfc29fc702c3eb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPWININFOW.dx", dx, 0x60, 0x20, true, 0x12e4d8bc7de0d340)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPWININFOW.dy", dy, 0x80, 0x20, true, 0x406a24df1872300e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPWININFOW.wMax", w_max, 0xa0, 0x20, true, 0xfe56cd2f8e0dfc56)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 2>), "tagHELPWININFOW.rgchMember", rgch_member, 0xc0, 0x20, true, 0xd348762066c252b1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif