#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_BASIC_RESPONSE_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0x2d189301e80b1a36)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_BASIC_RESPONSE_INFO.dwResponderIdChoice", dw_responder_id_choice, 0x20, 0x20, true, 0xedf0fca21e297f9a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_OCSP_BASIC_RESPONSE_INFO.ByNameResponderId", by_name_responder_id, 0x40, 0x80, true, 0x99eec0fde3e2a51a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_OCSP_BASIC_RESPONSE_INFO.ByKeyResponderId", by_key_responder_id, 0x40, 0x80, true, 0xe187220dece444c8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_OCSP_BASIC_RESPONSE_INFO.ProducedAt", produced_at, 0xc0, 0x40, true, 0xa149cfc507eafa83)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_BASIC_RESPONSE_INFO.cResponseEntry", c_response_entry, 0x100, 0x20, true, 0xdf7ac360984500b6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ocsp_basic_response_entry_t*), "_OCSP_BASIC_RESPONSE_INFO.rgResponseEntry", rg_response_entry, 0x140, 0x40, true, 0x73ab61726ddecef3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_BASIC_RESPONSE_INFO.cExtension", c_extension, 0x180, 0x20, true, 0xd0f6af4c273958d1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_OCSP_BASIC_RESPONSE_INFO.rgExtension", rg_extension, 0x1c0, 0x40, true, 0x64530ae0f708828)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif