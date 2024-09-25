#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_OCSP_BASIC_SIGNED_RESPONSE_INFO.ToBeSigned", to_be_signed, 0x0, 0x80, true, 0xe77c2cd444cd7006)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ocsp_signature_info_t), "_OCSP_BASIC_SIGNED_RESPONSE_INFO.SignatureInfo", signature_info, 0x80, 0x0, true, 0x4c1bbda6271b8c97)
#else
#define _m00
#define _m01
#endif