#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_ALGORITHM_INFO.Identifier", identifier, 0x0, 0x20, true, 0xd78760e9516f15f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_ALGORITHM_INFO.KeyLength", key_length, 0x20, 0x20, true, 0xc53f10be34e9aa08)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_ALGORITHM_INFO.KeyOffsetBytes", key_offset_bytes, 0x40, 0x20, true, 0xf79bf014b8f26903)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_ALGORITHM_INFO.AdditionalInfo", additional_info, 0x60, 0x20, true, 0xc4e2b203525bf016)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif