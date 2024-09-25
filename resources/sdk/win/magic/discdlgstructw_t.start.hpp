#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISCDLGSTRUCTW.cbStructure", cb_structure, 0x0, 0x20, true, 0xe3b688a366bea1b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "_DISCDLGSTRUCTW.hwndOwner", hwnd_owner, 0x40, 0x40, true, 0xe2f982a04a933456)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_DISCDLGSTRUCTW.lpLocalName", lp_local_name, 0x80, 0x40, true, 0x1f40e7216c4e2807)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_DISCDLGSTRUCTW.lpRemoteName", lp_remote_name, 0xc0, 0x40, true, 0xda815498f6845489)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISCDLGSTRUCTW.dwFlags", dw_flags, 0x100, 0x20, true, 0xf4e9f962dd307285)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif