#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CERT_HASHED_URL.HashAlgorithm", hash_algorithm, 0x0, 0xc0, true, 0x16a77db2cf481d76)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_HASHED_URL.Hash", hash, 0xc0, 0x80, true, 0xef4b4da69937049e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CERT_HASHED_URL.pwszUrl", pwsz_url, 0x140, 0x40, true, 0x7f8f0d40fac5e4ca)
#else
#define _m00
#define _m01
#define _m02
#endif