#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_VERIFY_MESSAGE_PARA.cbSize", cb_size, 0x0, 0x20, true, 0xca6249186d7ce86a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_VERIFY_MESSAGE_PARA.dwMsgAndCertEncodingType", dw_msg_and_cert_encoding_type, 0x20, 0x20, true, 0x2b84372dfb37e86)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CRYPT_VERIFY_MESSAGE_PARA.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0x58994d2f18e55d00)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_crypt_get_signer_certificate_t ), "_CRYPT_VERIFY_MESSAGE_PARA.pfnGetSignerCertificate", pfn_get_signer_certificate, 0x80, 0x40, true, 0x8ccbe1b729d5e22a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CRYPT_VERIFY_MESSAGE_PARA.pvGetArg", pv_get_arg, 0xc0, 0x40, true, 0x58fbdac74a5abc54)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif