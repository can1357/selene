#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCBTACTIVATESTRUCT.fMouse", f_mouse, 0x0, 0x20, true, 0x435596f2baf96c10)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagCBTACTIVATESTRUCT.hWndActive", h_wnd_active, 0x40, 0x40, true, 0xa0b9b5ed3ed436b9)
#else
#define _m00
#define _m01
#endif