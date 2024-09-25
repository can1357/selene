#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "tagMOUSEHOOKSTRUCTEX.pt", pt, 0x0, 0x40, true, 0x87d58dcbd768a618)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagMOUSEHOOKSTRUCTEX.hwnd", hwnd, 0x40, 0x40, true, 0x9fb26236b4991b04)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEHOOKSTRUCTEX.wHitTestCode", w_hit_test_code, 0x80, 0x20, true, 0x3bf1eb251398f79b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagMOUSEHOOKSTRUCTEX.dwExtraInfo", dw_extra_info, 0xc0, 0x40, true, 0x729c445e7d2088f1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMOUSEHOOKSTRUCTEX.mouseData", mouse_data, 0x100, 0x20, true, 0xd4a7c93cf6505c36)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif