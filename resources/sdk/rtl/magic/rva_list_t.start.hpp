#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_RVA_LIST.RvaCount", rva_count, 0x0, 0x40, true, 0x781bcf82514a59be)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_RVA_LIST.StateBitsPerRva", state_bits_per_rva, 0x40, 0x20, true, 0x7cfb4dc103e5d991)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RTL_RVA_LIST.CompressedBuffer", compressed_buffer, 0x80, 0x40, true, 0xbc3c3d2ce1a88235)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_RVA_LIST.CompressedBufferSize", compressed_buffer_size, 0xc0, 0x40, true, 0x949c04fe513d4f67)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_ex_t), "_RTL_RVA_LIST.RvaStateBitMap", rva_state_bit_map, 0x100, 0x80, true, 0x61113fce60aac7a8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RTL_RVA_LIST.StateBitValueMap", state_bit_value_map, 0x180, 0x40, true, 0x34c45c6042ce18e3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_RVA_LIST.ExtensionBuffer", extension_buffer, 0x1c0, 0x40, true, 0xdf88c4e5e38f46c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif