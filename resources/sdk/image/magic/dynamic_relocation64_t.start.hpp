#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_DYNAMIC_RELOCATION64.Symbol", symbol, 0x0, 0x40, true, 0x9d9fc84e478ea5e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DYNAMIC_RELOCATION64.BaseRelocSize", base_reloc_size, 0x40, 0x20, true, 0x20e94b8c994dcd47)
#else
#define _m00
#define _m01
#endif