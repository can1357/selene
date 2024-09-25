#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PERFINFO_KERNELMEMORY_RANGE_USAGE.UsageType", usage_type, 0x0, 0x5, true, 0x8d45e4b8b020f1d2, 5, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_KERNELMEMORY_RANGE_USAGE.VirtualAddress", virtual_address, 0x40, 0x40, true, 0x8b10ee971448b8ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_KERNELMEMORY_RANGE_USAGE.PageCount", page_count, 0x80, 0x40, true, 0xc857fbb112867ab8)
#else
#define _m00
#define _m01
#define _m02
#endif