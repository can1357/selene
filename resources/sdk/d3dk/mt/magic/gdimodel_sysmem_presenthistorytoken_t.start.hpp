#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_GDIMODEL_SYSMEM_PRESENTHISTORYTOKEN.hlsurf", hlsurf, 0x0, 0x40, true, 0xaf989be07ac83791)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GDIMODEL_SYSMEM_PRESENTHISTORYTOKEN.dwDirtyFlags", dw_dirty_flags, 0x40, 0x20, true, 0xa8988ebb10eb4b40)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_GDIMODEL_SYSMEM_PRESENTHISTORYTOKEN.uiCookie", ui_cookie, 0x80, 0x40, true, 0x652032bf4aeb65a3)
#else
#define _m00
#define _m01
#define _m02
#endif