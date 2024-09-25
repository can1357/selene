#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_PRIVATE_KEY_INFO.Version", version, 0x0, 0x20, true, 0x328477b9978db9c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_PRIVATE_KEY_INFO.Algorithm", algorithm, 0x40, 0xc0, true, 0xd429078617154586)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_PRIVATE_KEY_INFO.PrivateKey", private_key, 0x100, 0x80, true, 0x6fba27ef5cbb2e37)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_attributes_t*), "_CRYPT_PRIVATE_KEY_INFO.pAttributes", p_attributes, 0x180, 0x40, true, 0x1d956e01a8855c0c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif