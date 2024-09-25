#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_STRONG_SIGN_SERIALIZED_INFO.dwFlags", dw_flags, 0x0, 0x20, true, 0x3f26521615d2b695)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_STRONG_SIGN_SERIALIZED_INFO.pwszCNGSignHashAlgids", pwsz_cng_sign_hash_algids, 0x40, 0x40, true, 0x6eca69fdf0ce1df)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_STRONG_SIGN_SERIALIZED_INFO.pwszCNGPubKeyMinBitLengths", pwsz_cng_pub_key_min_bit_lengths, 0x80, 0x40, true, 0x77534d9ec10cc3d)
#else
#define _m00
#define _m01
#define _m02
#endif