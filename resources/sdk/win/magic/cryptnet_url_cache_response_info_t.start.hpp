#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPTNET_URL_CACHE_RESPONSE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x7ea4b83264440c69)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CRYPTNET_URL_CACHE_RESPONSE_INFO.wResponseType", w_response_type, 0x20, 0x10, true, 0x8fdace43c913d8aa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CRYPTNET_URL_CACHE_RESPONSE_INFO.wResponseFlags", w_response_flags, 0x30, 0x10, true, 0xc6c7810f1a86de75)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CRYPTNET_URL_CACHE_RESPONSE_INFO.LastModifiedTime", last_modified_time, 0x40, 0x40, true, 0x899c1164fd900de8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPTNET_URL_CACHE_RESPONSE_INFO.dwMaxAge", dw_max_age, 0x80, 0x20, true, 0xca1e3f911194261b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_CRYPTNET_URL_CACHE_RESPONSE_INFO.pwszETag", pwsz_e_tag, 0xc0, 0x40, true, 0x7474889c931ffb57)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPTNET_URL_CACHE_RESPONSE_INFO.dwProxyId", dw_proxy_id, 0x100, 0x20, true, 0xfae76d7e27358c0a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif