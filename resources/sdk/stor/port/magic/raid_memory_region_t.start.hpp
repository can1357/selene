#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RAID_MEMORY_REGION.VirtualBase", virtual_base, 0x0, 0x40, true, 0x813a264c9e61737a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_MEMORY_REGION.PhysicalBase", physical_base, 0x40, 0x40, true, 0xdef969b87b948134)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_MEMORY_REGION.Length", length, 0x80, 0x20, true, 0xa6ea864835920aa7)
#else
#define _m00
#define _m01
#define _m02
#endif