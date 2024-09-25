#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONNECTDLGSTRUCTA.cbStructure", cb_structure, 0x0, 0x20, true, 0xa864d074c184acea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "_CONNECTDLGSTRUCTA.hwndOwner", hwnd_owner, 0x40, 0x40, true, 0xa2f010826c666232)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::netresourcea_t*), "_CONNECTDLGSTRUCTA.lpConnRes", lp_conn_res, 0x80, 0x40, true, 0x1d15dfb4afd92685)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONNECTDLGSTRUCTA.dwFlags", dw_flags, 0xc0, 0x20, true, 0x18150dc28a68d663)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONNECTDLGSTRUCTA.dwDevNum", dw_dev_num, 0xe0, 0x20, true, 0xc6b233ff173933ba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif