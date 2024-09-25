#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_SIGNER_ENCODE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x9531ab08e0f5d7b4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_info_t*), "_CMSG_SIGNER_ENCODE_INFO.pCertInfo", p_cert_info, 0x40, 0x40, true, 0xfdfb7d38c5be3fbc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_SIGNER_ENCODE_INFO.hCryptProv", h_crypt_prov, 0x80, 0x40, true, 0xcb28b8a9c144d02c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_SIGNER_ENCODE_INFO.hNCryptKey", h_n_crypt_key, 0x80, 0x40, true, 0x3b473b07b9c547c9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_SIGNER_ENCODE_INFO.dwKeySpec", dw_key_spec, 0xc0, 0x20, true, 0x570ae2a1b3b73407)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_SIGNER_ENCODE_INFO.HashAlgorithm", hash_algorithm, 0x100, 0xc0, true, 0xae5fcb4071f3a85e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_SIGNER_ENCODE_INFO.pvHashAuxInfo", pv_hash_aux_info, 0x1c0, 0x40, true, 0x2176c83ae4f07e1b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_SIGNER_ENCODE_INFO.cAuthAttr", c_auth_attr, 0x200, 0x20, true, 0xef7a3661e2bc9eda)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_t*), "_CMSG_SIGNER_ENCODE_INFO.rgAuthAttr", rg_auth_attr, 0x240, 0x40, true, 0xa996112a4c0d2b0c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_SIGNER_ENCODE_INFO.cUnauthAttr", c_unauth_attr, 0x280, 0x20, true, 0xf9558d39ea4ceb3b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_t*), "_CMSG_SIGNER_ENCODE_INFO.rgUnauthAttr", rg_unauth_attr, 0x2c0, 0x40, true, 0xdb80ca302b82133a)
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
#endif