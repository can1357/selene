#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CONTENT_ENCRYPT_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x93c5e1d667c72c36)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_CONTENT_ENCRYPT_INFO.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0xc9216869e3b8239d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_CONTENT_ENCRYPT_INFO.ContentEncryptionAlgorithm", content_encryption_algorithm, 0x80, 0xc0, true, 0xa2bf76c280ab6cc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_CONTENT_ENCRYPT_INFO.pvEncryptionAuxInfo", pv_encryption_aux_info, 0x140, 0x40, true, 0x4ccf04b137afc422)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CONTENT_ENCRYPT_INFO.cRecipients", c_recipients, 0x180, 0x20, true, 0x90d8ae5f97a2c246)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_recipient_encode_info_t*), "_CMSG_CONTENT_ENCRYPT_INFO.rgCmsRecipients", rg_cms_recipients, 0x1c0, 0x40, true, 0x848a0b90acb946b2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint64_t)>*), "_CMSG_CONTENT_ENCRYPT_INFO.pfnAlloc", pfn_alloc, 0x200, 0x40, true, 0xc4596f4330d3c7f8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_CMSG_CONTENT_ENCRYPT_INFO.pfnFree", pfn_free, 0x240, 0x40, true, 0x778ad9a01c84a457)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CONTENT_ENCRYPT_INFO.dwEncryptFlags", dw_encrypt_flags, 0x280, 0x20, true, 0x74a57094dc695bcd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_CONTENT_ENCRYPT_INFO.hContentEncryptKey", h_content_encrypt_key, 0x2c0, 0x40, true, 0x53c475f27bbb0d04)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_CONTENT_ENCRYPT_INFO.hCNGContentEncryptKey", h_cng_content_encrypt_key, 0x2c0, 0x40, true, 0xa877b83bb1d285e4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CONTENT_ENCRYPT_INFO.dwFlags", dw_flags, 0x300, 0x20, true, 0x2da1dcbc4defb235)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CMSG_CONTENT_ENCRYPT_INFO.fCNG", f_cng, 0x320, 0x20, true, 0x2101607deb469c16)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CMSG_CONTENT_ENCRYPT_INFO.pbCNGContentEncryptKeyObject", pb_cng_content_encrypt_key_object, 0x340, 0x40, true, 0x7210736199ad6c5)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CMSG_CONTENT_ENCRYPT_INFO.pbContentEncryptKey", pb_content_encrypt_key, 0x380, 0x40, true, 0x48cc59c53ae99)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CONTENT_ENCRYPT_INFO.cbContentEncryptKey", cb_content_encrypt_key, 0x3c0, 0x20, true, 0x7b700ffb41bac540)
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
#define _m15
#endif