#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PSEUDO_TAG_ENTRY.Allocs", allocs, 0x0, 0x20, true, 0xf9b66829d3f400bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PSEUDO_TAG_ENTRY.Frees", frees, 0x20, 0x20, true, 0x29bef93d9788bed0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_PSEUDO_TAG_ENTRY.Size", size, 0x40, 0x40, true, 0xeb232588f937c159)
#else
#define _m00
#define _m01
#define _m02
#endif