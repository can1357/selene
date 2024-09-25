#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagMOUSEHOOKSTRUCT.pt", pt, 0x0, 0x40, true, 0xb4c675ae6732325e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagMOUSEHOOKSTRUCT.hwnd", hwnd, 0x40, 0x40, true, 0x538c8b18286828b4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEHOOKSTRUCT.wHitTestCode", w_hit_test_code, 0x80, 0x20, true, 0xfd3c2c6e89345979)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMOUSEHOOKSTRUCT.dwExtraInfo", dw_extra_info, 0xc0, 0x40, true, 0x5fb6b0eb943d2526)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif