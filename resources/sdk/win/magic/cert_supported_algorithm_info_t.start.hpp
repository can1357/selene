#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CERT_SUPPORTED_ALGORITHM_INFO.Algorithm", algorithm, 0x0, 0xc0, true, 0xea8d7efede40cc02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CERT_SUPPORTED_ALGORITHM_INFO.IntendedKeyUsage", intended_key_usage, 0xc0, 0xc0, true, 0x13839130079b4ac6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_policies_info_t), "_CERT_SUPPORTED_ALGORITHM_INFO.IntendedCertPolicies", intended_cert_policies, 0x180, 0x80, true, 0x2e7d7eb739301d7a)
#else
#define _m00
#define _m01
#define _m02
#endif