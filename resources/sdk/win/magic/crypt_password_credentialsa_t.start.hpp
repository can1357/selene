#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_PASSWORD_CREDENTIALSA.cbSize", cb_size, 0x0, 0x20, true, 0x604b81e166d2f860)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_PASSWORD_CREDENTIALSA.pszUsername", psz_username, 0x40, 0x40, true, 0xe235624c46327929)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_PASSWORD_CREDENTIALSA.pszPassword", psz_password, 0x80, 0x40, true, 0x644710eb95127e4a)
#else
#define _m00
#define _m01
#define _m02
#endif