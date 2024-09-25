#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_OCSP_CERT_ID.HashAlgorithm", hash_algorithm, 0x0, 0xc0, true, 0x920f8e47d0d13cfd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_OCSP_CERT_ID.IssuerNameHash", issuer_name_hash, 0xc0, 0x80, true, 0x40481b65d8e5ac49)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_OCSP_CERT_ID.IssuerKeyHash", issuer_key_hash, 0x140, 0x80, true, 0x86f71ea03ad5407d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_OCSP_CERT_ID.SerialNumber", serial_number, 0x1c0, 0x80, true, 0xdaac0aeca36be69)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif