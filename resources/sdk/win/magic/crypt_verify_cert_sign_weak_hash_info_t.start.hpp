#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO.cCNGHashAlgid", c_cng_hash_algid, 0x0, 0x20, true, 0xac364198b69f4961)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t**), "_CRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO.rgpwszCNGHashAlgid", rgpwsz_cng_hash_algid, 0x40, 0x40, true, 0xbb00e10d64a6d342)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_VERIFY_CERT_SIGN_WEAK_HASH_INFO.dwWeakIndex", dw_weak_index, 0x80, 0x20, true, 0x7a56da91c4f3a621)
#else
#define _m00
#define _m01
#define _m02
#endif