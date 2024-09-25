#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CNG_CONTENT_DECRYPT_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xb1eda8556346633f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_CNG_CONTENT_DECRYPT_INFO.ContentEncryptionAlgorithm", content_encryption_algorithm, 0x40, 0xc0, true, 0x6423cfde18a0dd59)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint64_t)>*), "_CMSG_CNG_CONTENT_DECRYPT_INFO.pfnAlloc", pfn_alloc, 0x100, 0x40, true, 0xd11852b01e4eed93)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_CMSG_CNG_CONTENT_DECRYPT_INFO.pfnFree", pfn_free, 0x140, 0x40, true, 0x4a64a4f95eae918f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_CNG_CONTENT_DECRYPT_INFO.hNCryptKey", h_n_crypt_key, 0x180, 0x40, true, 0xd85b181a4036f6a3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CMSG_CNG_CONTENT_DECRYPT_INFO.pbContentEncryptKey", pb_content_encrypt_key, 0x1c0, 0x40, true, 0x50f821d2a2773850)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CNG_CONTENT_DECRYPT_INFO.cbContentEncryptKey", cb_content_encrypt_key, 0x200, 0x20, true, 0x3e1c30c6af5c80d1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_CNG_CONTENT_DECRYPT_INFO.hCNGContentEncryptKey", h_cng_content_encrypt_key, 0x240, 0x40, true, 0xf12bbf04ba9626dd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CMSG_CNG_CONTENT_DECRYPT_INFO.pbCNGContentEncryptKeyObject", pb_cng_content_encrypt_key_object, 0x280, 0x40, true, 0x9707489c6d81aeed)
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
#endif