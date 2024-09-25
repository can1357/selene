#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_ECC_PRIVATE_KEY_INFO.dwVersion", dw_version, 0x0, 0x20, true, 0xd377cd01d56e4e4b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_ECC_PRIVATE_KEY_INFO.PrivateKey", private_key, 0x40, 0x80, true, 0xf30cb40e9e0ce081)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_ECC_PRIVATE_KEY_INFO.szCurveOid", sz_curve_oid, 0xc0, 0x40, true, 0xf230765a50460161)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CRYPT_ECC_PRIVATE_KEY_INFO.PublicKey", public_key, 0x100, 0xc0, true, 0xaf8562fdf2b4bb8b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif