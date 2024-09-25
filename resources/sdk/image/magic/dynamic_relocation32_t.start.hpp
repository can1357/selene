#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION32.Symbol", symbol, 0x0, 0x20, true, 0x9dfd79a8779ba99c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION32.BaseRelocSize", base_reloc_size, 0x20, 0x20, true, 0xd35018af5af02392)
#else
#define _m00
#define _m01
#endif