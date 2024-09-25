#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_PHYSICAL_STORE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x4f5d8a997f9404c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CERT_PHYSICAL_STORE_INFO.pszOpenStoreProvider", psz_open_store_provider, 0x40, 0x40, true, 0x8b06848f8501abca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_PHYSICAL_STORE_INFO.dwOpenEncodingType", dw_open_encoding_type, 0x80, 0x20, true, 0x69869babba5e889)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_PHYSICAL_STORE_INFO.dwOpenFlags", dw_open_flags, 0xa0, 0x20, true, 0xafbca94c1c5b6431)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_PHYSICAL_STORE_INFO.OpenParameters", open_parameters, 0xc0, 0x80, true, 0x7eb1eb44229e5827)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_PHYSICAL_STORE_INFO.dwFlags", dw_flags, 0x140, 0x20, true, 0xbe101f7e9eff77f6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_PHYSICAL_STORE_INFO.dwPriority", dw_priority, 0x160, 0x20, true, 0x26ca4d57c624007d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif