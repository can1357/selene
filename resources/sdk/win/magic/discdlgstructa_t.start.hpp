#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISCDLGSTRUCTA.cbStructure", cb_structure, 0x0, 0x20, true, 0x987a20f1bad0ab45)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "_DISCDLGSTRUCTA.hwndOwner", hwnd_owner, 0x40, 0x40, true, 0x504b5300a9a12871)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_DISCDLGSTRUCTA.lpLocalName", lp_local_name, 0x80, 0x40, true, 0x92b7202e3fec750e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_DISCDLGSTRUCTA.lpRemoteName", lp_remote_name, 0xc0, 0x40, true, 0x7c86fe503c74406)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISCDLGSTRUCTA.dwFlags", dw_flags, 0x100, 0x20, true, 0x630c5e837d4c8243)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif