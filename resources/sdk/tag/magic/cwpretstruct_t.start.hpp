#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagCWPRETSTRUCT.lResult", l_result, 0x0, 0x40, true, 0x8f3120f67d7928d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagCWPRETSTRUCT.lParam", l_param, 0x40, 0x40, true, 0xe38dac0b8e903667)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagCWPRETSTRUCT.wParam", w_param, 0x80, 0x40, true, 0xc78375d7f6886245)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCWPRETSTRUCT.message", message, 0xc0, 0x20, true, 0x767e2ab4f24646d6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagCWPRETSTRUCT.hwnd", hwnd, 0x100, 0x40, true, 0x9c73b1cf810816b2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif