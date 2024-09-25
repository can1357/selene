#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMSG_HASHED_ENCODE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x2c69191bee1fd842)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CMSG_HASHED_ENCODE_INFO.hCryptProv", h_crypt_prov, 0x40, 0x40, true, 0xe9568b99f4c10ba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_algorithm_identifier_t), "_CMSG_HASHED_ENCODE_INFO.HashAlgorithm", hash_algorithm, 0x80, 0xc0, true, 0x3eb83d0c8aa50e94)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CMSG_HASHED_ENCODE_INFO.pvHashAuxInfo", pv_hash_aux_info, 0x140, 0x40, true, 0x6ed3237438aa363f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif