#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_HASH_MESSAGE_PARA.cbSize", cb_size, 0x0, 0x20, true, 0x4cb7ae83378250b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_HASH_MESSAGE_PARA.dwMsgEncodingType", dw_msg_encoding_type, 0x20, 0x20, true, 0xef73a1f717f48316)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CRYPT_HASH_MESSAGE_PARA.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0x32280b764f3d2887)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CRYPT_HASH_MESSAGE_PARA.HashAlgorithm", hash_algorithm, 0x80, 0xc0, true, 0x7859d07b945fc5a4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CRYPT_HASH_MESSAGE_PARA.pvHashAuxInfo", pv_hash_aux_info, 0x140, 0x40, true, 0xd43e0a796bb86f65)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif