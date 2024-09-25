#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CRYPT_PSOURCE_ALGORITHM.pszObjId", psz_obj_id, 0x0, 0x40, true, 0x6a91d5c8e0c4cc85)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CRYPT_PSOURCE_ALGORITHM.EncodingParameters", encoding_parameters, 0x40, 0x80, true, 0x4e08d8f598b27282)
#else
#define _m00
#define _m01
#endif