#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagSWindowData.hWnd", h_wnd, 0x0, 0x40, true, 0x4c277b8b2aa02b3b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSWindowData.wFirstMsg", w_first_msg, 0x40, 0x20, true, 0xccee98d8dd1f77db)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSWindowData.wLastMsg", w_last_msg, 0x60, 0x20, true, 0x9988a58295c44592)
#else
#define _m00
#define _m01
#define _m02
#endif