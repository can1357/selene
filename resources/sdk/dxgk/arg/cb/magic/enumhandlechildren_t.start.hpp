#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_ENUMHANDLECHILDREN.hObject", h_object, 0x0, 0x20, true, 0xad725cfac8e2e138)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_ENUMHANDLECHILDREN.Index", index, 0x20, 0x20, true, 0xc46ce038edb95a21)
#else
#define _m00
#define _m01
#endif