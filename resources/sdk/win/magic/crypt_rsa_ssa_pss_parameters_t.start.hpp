#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_RSA_SSA_PSS_PARAMETERS.HashAlgorithm", hash_algorithm, 0x0, 0xc0, true, 0x4492f87c2f48e173)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_mask_gen_algorithm_t), "_CRYPT_RSA_SSA_PSS_PARAMETERS.MaskGenAlgorithm", mask_gen_algorithm, 0xc0, 0x0, true, 0x7b9972a628c9ae41)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_RSA_SSA_PSS_PARAMETERS.dwSaltLength", dw_salt_length, 0x1c0, 0x20, true, 0x8b0bbdb5861ed402)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_RSA_SSA_PSS_PARAMETERS.dwTrailerField", dw_trailer_field, 0x1e0, 0x20, true, 0x27467f7bc151ef50)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif