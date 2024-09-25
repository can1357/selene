#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_OID_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xf20f3bb6fc87a3c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_CRYPT_OID_INFO.pszOID", psz_oid, 0x40, 0x40, true, 0xf867b37bf5954992)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_CRYPT_OID_INFO.pwszName", pwsz_name, 0x80, 0x40, true, 0xbea0cb21630c3aaf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_OID_INFO.dwGroupId", dw_group_id, 0xc0, 0x20, true, 0x5d281dbc9b585413)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_OID_INFO.dwValue", dw_value, 0xe0, 0x20, true, 0xd7d294ebe1d5730e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_OID_INFO.Algid", algid, 0xe0, 0x20, true, 0xbb32b3083a53f4ea)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_OID_INFO.dwLength", dw_length, 0xe0, 0x20, true, 0xd46f92ab12ea532)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_OID_INFO.ExtraInfo", extra_info, 0x100, 0x80, true, 0xbd7cc707c8feb14c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif