#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagCWPSTRUCT.lParam", l_param, 0x0, 0x40, true, 0x25ebcd9e65714c49)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagCWPSTRUCT.wParam", w_param, 0x40, 0x40, true, 0x1ad73be9ae459c6c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCWPSTRUCT.message", message, 0x80, 0x20, true, 0xeefccdb58bedc5f3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagCWPSTRUCT.hwnd", hwnd, 0xc0, 0x40, true, 0x7f2ecce7e022156e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif