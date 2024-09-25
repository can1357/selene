#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagHARDWAREHOOKSTRUCT.hwnd", hwnd, 0x0, 0x40, true, 0x6ed00d0b0b06d645)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagHARDWAREHOOKSTRUCT.message", message, 0x40, 0x20, true, 0x9f5704c57b41a886)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagHARDWAREHOOKSTRUCT.wParam", w_param, 0x80, 0x40, true, 0x4ffb3a4217e46877)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagHARDWAREHOOKSTRUCT.lParam", l_param, 0xc0, 0x40, true, 0x4e2a0d92b09dbd5a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif