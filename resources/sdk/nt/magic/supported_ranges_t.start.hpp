#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SUPPORTED_RANGES.Version", version, 0x0, 0x10, true, 0x757840186eb54424)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SUPPORTED_RANGES.Sorted", sorted, 0x10, 0x8, true, 0x24352be1ab78d8dd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUPPORTED_RANGES.NoIO", no_io, 0x20, 0x20, true, 0x1c1e4cc2b6f5ae70)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::supported_range_t), "_SUPPORTED_RANGES.IO", io, 0x40, 0x40, true, 0xd93fb165a3004b0c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUPPORTED_RANGES.NoMemory", no_memory, 0x180, 0x20, true, 0x76f26153afeece37)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::supported_range_t), "_SUPPORTED_RANGES.Memory", memory, 0x1c0, 0x40, true, 0x9db815547030ac27)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUPPORTED_RANGES.NoPrefetchMemory", no_prefetch_memory, 0x300, 0x20, true, 0x45c9b2c18620d97f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::supported_range_t), "_SUPPORTED_RANGES.PrefetchMemory", prefetch_memory, 0x340, 0x40, true, 0x793dabf032d2a38f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUPPORTED_RANGES.NoDma", no_dma, 0x480, 0x20, true, 0x7c43f435e2528c05)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::supported_range_t), "_SUPPORTED_RANGES.Dma", dma, 0x4c0, 0x40, true, 0xcb20a72a32f7d568)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif