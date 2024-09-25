#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_SIGNED_ENCODE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xebf155a83ad7b15c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_SIGNED_ENCODE_INFO.cSigners", c_signers, 0x20, 0x20, true, 0x408cecdb07aec6f5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_signer_encode_info_t*), "_CMSG_SIGNED_ENCODE_INFO.rgSigners", rg_signers, 0x40, 0x40, true, 0xfa1f306ad926ce46)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_SIGNED_ENCODE_INFO.cCertEncoded", c_cert_encoded, 0x80, 0x20, true, 0x5c1509ae926d2caf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t*), "_CMSG_SIGNED_ENCODE_INFO.rgCertEncoded", rg_cert_encoded, 0xc0, 0x40, true, 0x74048fadc9972101)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_SIGNED_ENCODE_INFO.cCrlEncoded", c_crl_encoded, 0x100, 0x20, true, 0xbc108836464b47e9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t*), "_CMSG_SIGNED_ENCODE_INFO.rgCrlEncoded", rg_crl_encoded, 0x140, 0x40, true, 0xe0bdc59594ca71bd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif