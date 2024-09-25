#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hkey_t*), "_CERT_SYSTEM_STORE_RELOCATE_PARA.hKeyBase", h_key_base, 0x0, 0x40, true, 0xd0bf312e47c3e6aa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_SYSTEM_STORE_RELOCATE_PARA.pvBase", pv_base, 0x0, 0x40, true, 0xfc93a10ec3c76b2b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_SYSTEM_STORE_RELOCATE_PARA.pvSystemStore", pv_system_store, 0x40, 0x40, true, 0x410115d75214f405)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_CERT_SYSTEM_STORE_RELOCATE_PARA.pszSystemStore", psz_system_store, 0x40, 0x40, true, 0xc2e31501094113da)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_CERT_SYSTEM_STORE_RELOCATE_PARA.pwszSystemStore", pwsz_system_store, 0x40, 0x40, true, 0x9b5724fc480b1b11)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif