#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_SIGNED_CONTENT_INFO.ToBeSigned", to_be_signed, 0x0, 0x80, true, 0x6e63aa9e29d9cfd6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CERT_SIGNED_CONTENT_INFO.SignatureAlgorithm", signature_algorithm, 0x80, 0xc0, true, 0xeb82c195a232316b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CERT_SIGNED_CONTENT_INFO.Signature", signature, 0x140, 0xc0, true, 0x3eeb8b147acf33c6)
#else
#define _m00
#define _m01
#define _m02
#endif