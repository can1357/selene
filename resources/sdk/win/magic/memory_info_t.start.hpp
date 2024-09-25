#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MemoryInfo.MemorySize", memory_size, 0x0, 0x10, true, 0x4b8e082dcea8ff41)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MemoryInfo.MemoryAlignment", memory_alignment, 0x10, 0x10, true, 0x549cc0a62c059ebc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MemoryInfo.WireSize", wire_size, 0x20, 0x10, true, 0xb7d894d01603765)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MemoryInfo.WireAlignment", wire_alignment, 0x30, 0x10, true, 0x45580c39ae3a40b7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif