#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOLYTEXTW.x", x, 0x0, 0x20, true, 0x4fbedfb36220218a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagPOLYTEXTW.y", y, 0x20, 0x20, true, 0xa1e0437abb9ad937)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOLYTEXTW.n", n, 0x40, 0x20, true, 0xa84395c1d89603b3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagPOLYTEXTW.lpstr", lpstr, 0x80, 0x40, true, 0xf5b4e0d7a22a33b2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPOLYTEXTW.uiFlags", ui_flags, 0xc0, 0x20, true, 0x3e8fc0908455ccdf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagPOLYTEXTW.rcl", rcl, 0xe0, 0x80, true, 0x8995651e201592e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t*), "tagPOLYTEXTW.pdx", pdx, 0x180, 0x40, true, 0xaf94cd8d7d645ce1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif