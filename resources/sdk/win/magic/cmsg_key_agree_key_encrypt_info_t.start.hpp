#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_KEY_AGREE_KEY_ENCRYPT_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x85d2bfdf20cd74ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_KEY_AGREE_KEY_ENCRYPT_INFO.EncryptedKey", encrypted_key, 0x40, 0x80, true, 0x7a25c3ad77013401)
#else
#define _m00
#define _m01
#endif