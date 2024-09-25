#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_ENCRYPTED_PRIVATE_KEY_INFO.EncryptionAlgorithm", encryption_algorithm, 0x0, 0xc0, true, 0xede804cc1169f639)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_ENCRYPTED_PRIVATE_KEY_INFO.EncryptedPrivateKey", encrypted_private_key, 0xc0, 0x80, true, 0xa116f4f0dd28ffe7)
#else
#define _m00
#define _m01
#endif