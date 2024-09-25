#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_PASSWORD_CREDENTIALSW.cbSize", cb_size, 0x0, 0x20, true, 0x5de6b2640e037e0b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_PASSWORD_CREDENTIALSW.pszUsername", psz_username, 0x40, 0x40, true, 0xbd41941f6859dff6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_PASSWORD_CREDENTIALSW.pszPassword", psz_password, 0x80, 0x40, true, 0x7553fa6562016677)
#else
#define _m00
#define _m01
#define _m02
#endif