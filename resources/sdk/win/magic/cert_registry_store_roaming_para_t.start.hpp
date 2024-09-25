#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hkey_t*), "_CERT_REGISTRY_STORE_ROAMING_PARA.hKey", h_key, 0x0, 0x40, true, 0x2c97caee4a3193c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_REGISTRY_STORE_ROAMING_PARA.pwszStoreDirectory", pwsz_store_directory, 0x40, 0x40, true, 0xb3f65f4672bda3c9)
#else
#define _m00
#define _m01
#endif