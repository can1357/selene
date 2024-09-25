#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_MASK_GEN_ALGORITHM.pszObjId", psz_obj_id, 0x0, 0x40, true, 0x9ed3bec1b9cc2d71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_MASK_GEN_ALGORITHM.HashAlgorithm", hash_algorithm, 0x40, 0xc0, true, 0x4af350985dfe1740)
#else
#define _m00
#define _m01
#endif