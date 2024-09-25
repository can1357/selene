#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_BCRYPT_OAEP_PADDING_INFO.pszAlgId", psz_alg_id, 0x0, 0x40, true, 0xd018015ccd31af37)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_BCRYPT_OAEP_PADDING_INFO.pbLabel", pb_label, 0x40, 0x40, true, 0xd10c5bbb82f2030e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_OAEP_PADDING_INFO.cbLabel", cb_label, 0x80, 0x20, true, 0xe5d0537db404ae2a)
#else
#define _m00
#define _m01
#define _m02
#endif