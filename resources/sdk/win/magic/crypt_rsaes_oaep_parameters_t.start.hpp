#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_RSAES_OAEP_PARAMETERS.HashAlgorithm", hash_algorithm, 0x0, 0xc0, true, 0x2ab02ca3fcce9b4f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_mask_gen_algorithm_t), "_CRYPT_RSAES_OAEP_PARAMETERS.MaskGenAlgorithm", mask_gen_algorithm, 0xc0, 0x0, true, 0x551d326bb4001db1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_psource_algorithm_t), "_CRYPT_RSAES_OAEP_PARAMETERS.PSourceAlgorithm", p_source_algorithm, 0x1c0, 0xc0, true, 0xc71e4b98dc29fe09)
#else
#define _m00
#define _m01
#define _m02
#endif