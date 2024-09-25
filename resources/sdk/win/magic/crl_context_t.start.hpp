#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRL_CONTEXT.dwCertEncodingType", dw_cert_encoding_type, 0x0, 0x20, true, 0xaf5a2eb856969572)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CRL_CONTEXT.pbCrlEncoded", pb_crl_encoded, 0x40, 0x40, true, 0x82f2bcf4168b2fee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRL_CONTEXT.cbCrlEncoded", cb_crl_encoded, 0x80, 0x20, true, 0x152b77166d272657)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crl_info_t*), "_CRL_CONTEXT.pCrlInfo", p_crl_info, 0xc0, 0x40, true, 0xb49db6a4152cfe10)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CRL_CONTEXT.hCertStore", h_cert_store, 0x100, 0x40, true, 0x38c9e8b3666cb1c5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif