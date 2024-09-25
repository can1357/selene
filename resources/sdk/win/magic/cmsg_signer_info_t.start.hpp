#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_SIGNER_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0x1b56bcf852866287)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_SIGNER_INFO.Issuer", issuer, 0x40, 0x80, true, 0x70a7b2681bdf6b16)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_SIGNER_INFO.SerialNumber", serial_number, 0xc0, 0x80, true, 0x2fbc19cec783a262)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_SIGNER_INFO.HashAlgorithm", hash_algorithm, 0x140, 0xc0, true, 0x1f45f4cfee41d7f7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_SIGNER_INFO.HashEncryptionAlgorithm", hash_encryption_algorithm, 0x200, 0xc0, true, 0x253db75ba7632254)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMSG_SIGNER_INFO.EncryptedHash", encrypted_hash, 0x2c0, 0x80, true, 0xfdfa033e4db750b7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attributes_t), "_CMSG_SIGNER_INFO.AuthAttrs", auth_attrs, 0x340, 0x80, true, 0x9e77b68b66b6a63b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attributes_t), "_CMSG_SIGNER_INFO.UnauthAttrs", unauth_attrs, 0x3c0, 0x80, true, 0x29edcdf6149822a2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif