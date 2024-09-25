#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_BLOCK_EXTRA_INFORMATION.Next", next, 0x0, 0x8, true, 0x5c32c66e355d2ea7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_BLOCK_EXTRA_INFORMATION.Type", type, 0x20, 0x20, true, 0x69d7ecdf5cb60d13)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_BLOCK_EXTRA_INFORMATION.Size", size, 0x40, 0x40, true, 0xc2814e0467992517)
#else
#define _m00
#define _m01
#define _m02
#endif