#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_ECC_CMS_SHARED_INFO.Algorithm", algorithm, 0x0, 0xc0, true, 0xc98346437c480fe5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_ECC_CMS_SHARED_INFO.EntityUInfo", entity_u_info, 0xc0, 0x80, true, 0xde449fc3a38a62f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CRYPT_ECC_CMS_SHARED_INFO.rgbSuppPubInfo", rgb_supp_pub_info, 0x140, 0x20, true, 0x65cfe0ff3fdd6830)
#else
#define _m00
#define _m01
#define _m02
#endif