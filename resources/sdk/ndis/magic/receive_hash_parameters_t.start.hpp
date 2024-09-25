#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_RECEIVE_HASH_PARAMETERS.Header", header, 0x0, 0x20, true, 0xe9d16b9ab10d9d20)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_HASH_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xe866372872118a04)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_HASH_PARAMETERS.HashInformation", hash_information, 0x40, 0x20, true, 0x7db6e4f84445ac7c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_RECEIVE_HASH_PARAMETERS.HashSecretKeySize", hash_secret_key_size, 0x60, 0x10, true, 0x3fd042a9e66b0375)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_RECEIVE_HASH_PARAMETERS.HashSecretKeyOffset", hash_secret_key_offset, 0x80, 0x20, true, 0x8a449d6b777a5307)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif