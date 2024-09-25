#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hmenu_t*), "tagMDINEXTMENU.hmenuIn", hmenu_in, 0x0, 0x40, true, 0xebb149f97eb9f7e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hmenu_t*), "tagMDINEXTMENU.hmenuNext", hmenu_next, 0x40, 0x40, true, 0x3ad586b9ce50e1c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagMDINEXTMENU.hwndNext", hwnd_next, 0x80, 0x40, true, 0x5f94af1b7490ad01)
#else
#define _m00
#define _m01
#define _m02
#endif