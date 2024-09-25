#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPWININFOA.wStructSize", w_struct_size, 0x0, 0x20, true, 0x92a3783bf787b64)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPWININFOA.x", x, 0x20, 0x20, true, 0x19c2347389210e26)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPWININFOA.y", y, 0x40, 0x20, true, 0xd92c2a4a9d6c1ae2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPWININFOA.dx", dx, 0x60, 0x20, true, 0x182fd51de50bbc49)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPWININFOA.dy", dy, 0x80, 0x20, true, 0x297b783099b838ba)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagHELPWININFOA.wMax", w_max, 0xa0, 0x20, true, 0x5baf342ef359c0b7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 2>), "tagHELPWININFOA.rgchMember", rgch_member, 0xc0, 0x10, true, 0xd78f1350fd097d4f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif