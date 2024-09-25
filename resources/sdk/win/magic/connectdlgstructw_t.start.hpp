#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONNECTDLGSTRUCTW.cbStructure", cb_structure, 0x0, 0x20, true, 0xa35e22a8940c3881)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "_CONNECTDLGSTRUCTW.hwndOwner", hwnd_owner, 0x40, 0x40, true, 0xb8d0dfd2940b9f73)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::netresourcew_t*), "_CONNECTDLGSTRUCTW.lpConnRes", lp_conn_res, 0x80, 0x40, true, 0x4934d7a935b231dc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONNECTDLGSTRUCTW.dwFlags", dw_flags, 0xc0, 0x20, true, 0x2ab30681ed887600)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONNECTDLGSTRUCTW.dwDevNum", dw_dev_num, 0xe0, 0x20, true, 0xa2904987e451b365)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif