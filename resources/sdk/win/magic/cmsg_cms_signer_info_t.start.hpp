#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_CMS_SIGNER_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0x1e3904b4aa5e558c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_id_t), "_CMSG_CMS_SIGNER_INFO.SignerId", signer_id, 0x40, 0x40, true, 0x418519cd587478d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_CMS_SIGNER_INFO.HashAlgorithm", hash_algorithm, 0x180, 0xc0, true, 0xbd4fc736e15f8932)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_CMS_SIGNER_INFO.HashEncryptionAlgorithm", hash_encryption_algorithm, 0x240, 0xc0, true, 0x944f3ebe0a619d44)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_CMS_SIGNER_INFO.EncryptedHash", encrypted_hash, 0x300, 0x80, true, 0xe08d74e925707754)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attributes_t), "_CMSG_CMS_SIGNER_INFO.AuthAttrs", auth_attrs, 0x380, 0x80, true, 0x4465a52992147b5a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attributes_t), "_CMSG_CMS_SIGNER_INFO.UnauthAttrs", unauth_attrs, 0x400, 0x80, true, 0xe95b76902e1e7e89)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif