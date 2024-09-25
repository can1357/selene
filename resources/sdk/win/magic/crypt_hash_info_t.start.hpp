#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_HASH_INFO.HashAlgorithm", hash_algorithm, 0x0, 0xc0, true, 0x33a284ad588f9c06)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_HASH_INFO.Hash", hash, 0xc0, 0x80, true, 0x84c8e1d084ebd8fc)
#else
#define _m00
#define _m01
#endif