#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_OCSP_SIGNED_REQUEST_INFO.ToBeSigned", to_be_signed, 0x0, 0x80, true, 0x6db73a784f9ec7f4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ocsp_signature_info_t*), "_OCSP_SIGNED_REQUEST_INFO.pOptionalSignatureInfo", p_optional_signature_info, 0x80, 0x40, true, 0x29203a8c66531667)
#else
#define _m00
#define _m01
#endif