#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_CREDENTIALS.cbSize", cb_size, 0x0, 0x20, true, 0x1ddb7c96c31e4134)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_CRYPT_CREDENTIALS.pszCredentialsOid", psz_credentials_oid, 0x40, 0x40, true, 0xa6dd78c1aef7c89b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CRYPT_CREDENTIALS.pvCredentials", pv_credentials, 0x80, 0x40, true, 0x7bfceae03db7a2)
#else
#define _m00
#define _m01
#define _m02
#endif