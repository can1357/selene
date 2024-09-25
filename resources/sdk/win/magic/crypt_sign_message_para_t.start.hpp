#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_SIGN_MESSAGE_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x8b79df9b9429db10)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_SIGN_MESSAGE_PARA.dwMsgEncodingType", dw_msg_encoding_type, 0x20, 0x20, true, 0xe39a66a94913c46e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_context_t*), "_CRYPT_SIGN_MESSAGE_PARA.pSigningCert", p_signing_cert, 0x40, 0x40, true, 0xccc4366825a6a202)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_SIGN_MESSAGE_PARA.HashAlgorithm", hash_algorithm, 0x80, 0xc0, true, 0xd9bf97ea4942662a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CRYPT_SIGN_MESSAGE_PARA.pvHashAuxInfo", pv_hash_aux_info, 0x140, 0x40, true, 0x6f638aa0069072c3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_SIGN_MESSAGE_PARA.cMsgCert", c_msg_cert, 0x180, 0x20, true, 0x4c490c01a28680c4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_context_t**), "_CRYPT_SIGN_MESSAGE_PARA.rgpMsgCert", rgp_msg_cert, 0x1c0, 0x40, true, 0xb331a16cb5090d3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_SIGN_MESSAGE_PARA.cMsgCrl", c_msg_crl, 0x200, 0x20, true, 0xbe92dd44f5bc6272)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::crl_context_t**), "_CRYPT_SIGN_MESSAGE_PARA.rgpMsgCrl", rgp_msg_crl, 0x240, 0x40, true, 0x5aafbdc5a94d8a4c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_SIGN_MESSAGE_PARA.cAuthAttr", c_auth_attr, 0x280, 0x20, true, 0x67d9e9c6baf7cbbc)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_t*), "_CRYPT_SIGN_MESSAGE_PARA.rgAuthAttr", rg_auth_attr, 0x2c0, 0x40, true, 0xd041572f06206038)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_SIGN_MESSAGE_PARA.cUnauthAttr", c_unauth_attr, 0x300, 0x20, true, 0xfc0570073665dcf5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attribute_t*), "_CRYPT_SIGN_MESSAGE_PARA.rgUnauthAttr", rg_unauth_attr, 0x340, 0x40, true, 0x971bccadc13f1251)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_SIGN_MESSAGE_PARA.dwFlags", dw_flags, 0x380, 0x20, true, 0x218c94a56724c0be)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_SIGN_MESSAGE_PARA.dwInnerContentType", dw_inner_content_type, 0x3a0, 0x20, true, 0x80f48959eae913a6)
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
#define _m12
#define _m13
#define _m14
#endif