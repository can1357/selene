#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_OCSP_SIGNATURE_INFO.SignatureAlgorithm", signature_algorithm, 0x0, 0xc0, true, 0x9688fa9e42ba8d5d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_OCSP_SIGNATURE_INFO.Signature", signature, 0xc0, 0xc0, true, 0x6bc8cb50f1e40848)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OCSP_SIGNATURE_INFO.cCertEncoded", c_cert_encoded, 0x180, 0x20, true, 0xc94a2010a1cfceb8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t*), "_OCSP_SIGNATURE_INFO.rgCertEncoded", rg_cert_encoded, 0x1c0, 0x40, true, 0x1e5d2983311dde0f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif