#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_BCRYPT_PSS_PADDING_INFO.pszAlgId", psz_alg_id, 0x0, 0x40, true, 0xa67806560fca67f2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_PSS_PADDING_INFO.cbSalt", cb_salt, 0x40, 0x20, true, 0x7f39ae561d071108)
#else
#define _m00
#define _m01
#endif