#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_bit_blob_t), "_CERT_X942_DH_VALIDATION_PARAMS.seed", seed, 0x0, 0xc0, true, 0xc00f93449c8b10b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_X942_DH_VALIDATION_PARAMS.pgenCounter", pgen_counter, 0xc0, 0x20, true, 0x1dbb47c892e6b13)
#else
#define _m00
#define _m01
#endif