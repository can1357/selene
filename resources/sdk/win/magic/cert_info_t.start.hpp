#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0x63dcdb093e7a3ff7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_INFO.SerialNumber", serial_number, 0x40, 0x80, true, 0x4c14140495018be6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CERT_INFO.SignatureAlgorithm", signature_algorithm, 0xc0, 0xc0, true, 0xd071cd26053781c3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_INFO.Issuer", issuer, 0x180, 0x80, true, 0xe9e472d6fcbb5552)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CERT_INFO.NotBefore", not_before, 0x200, 0x40, true, 0x1f863add1c289553)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CERT_INFO.NotAfter", not_after, 0x240, 0x40, true, 0x1a9238b4843cceb8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CERT_INFO.Subject", subject, 0x280, 0x80, true, 0x2477b16da5830bd7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_public_key_info_t), "_CERT_INFO.SubjectPublicKeyInfo", subject_public_key_info, 0x300, 0x80, true, 0x4f739f868e1c3fd2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CERT_INFO.IssuerUniqueId", issuer_unique_id, 0x480, 0xc0, true, 0xe5eb4c271e5f04be)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CERT_INFO.SubjectUniqueId", subject_unique_id, 0x540, 0xc0, true, 0xd71b72af3a89590f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_INFO.cExtension", c_extension, 0x600, 0x20, true, 0xf5f2759c812a19cb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_extension_t*), "_CERT_INFO.rgExtension", rg_extension, 0x640, 0x40, true, 0xc788019e4c5c7390)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif