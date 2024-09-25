#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IMAGE_DYNAMIC_RELOCATION.Symbol", symbol, 0x0, 0x0, false, 0xf645cd4ffaf361c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION.BaseRelocSize", base_reloc_size, 0x0, 0x0, false, 0x1b1cc4e9e37370b4)
#else
#define _m00
#define _m01
#endif