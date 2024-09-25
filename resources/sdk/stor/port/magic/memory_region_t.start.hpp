#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MEMORY_REGION.VirtualBase", virtual_base, 0x0, 0x40, true, 0xb576cc125daa5433)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MEMORY_REGION.PhysicalBase", physical_base, 0x40, 0x40, true, 0x78b561ab771c5301)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_REGION.Length", length, 0x80, 0x20, true, 0x3bc16062b25901f8)
#else
#define _m00
#define _m01
#define _m02
#endif