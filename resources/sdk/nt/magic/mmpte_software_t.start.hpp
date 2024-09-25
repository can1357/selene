#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SOFTWARE.Valid", valid, 0x0, 0x1, true, 0x5c97bd3d94709c43, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SOFTWARE.PageFileReserved", page_file_reserved, 0x1, 0x1, true, 0xec2dc332fe924567, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SOFTWARE.PageFileAllocated", page_file_allocated, 0x2, 0x1, true, 0x28af6ee75006cb1d, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_MMPTE_SOFTWARE.Protection", protection, 0x5, 0x5, true, 0xb2d351a72b183587, 5, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SOFTWARE.Prototype", prototype, 0xa, 0x1, true, 0xcbda6b70ca8ec695, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SOFTWARE.Transition", transition, 0xb, 0x1, true, 0xada3fdc4241cd4f, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MMPTE_SOFTWARE.PageFileLow", page_file_low, 0xc, 0x4, true, 0x8c8b6db8f7580bd3, 4, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_MMPTE_SOFTWARE.UsedPageTableEntries", used_page_table_entries, 0x10, 0xa, true, 0x940f8904ad90253e, 10, uint64_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_MMPTE_SOFTWARE.PageFileHigh", page_file_high, 0x20, 0x20, true, 0x3ac8d77a3065607, 32, uint64_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SOFTWARE.ColdPage", cold_page, 0x3, 0x1, true, 0xb8735c735b2464e8, 1, uint64_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SOFTWARE.SwizzleBit", swizzle_bit, 0x4, 0x1, true, 0x6ba160e14f05b16d, 1, uint64_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SOFTWARE.ShadowStack", shadow_stack, 0x1a, 0x1, true, 0x437b32b62347d71a, 1, uint64_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SOFTWARE.LocalPartition", local_partition, 0x0, 0x0, false, 0xd6413d822026e20b, 1, uint64_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPTE_SOFTWARE.OnStandbyLookaside", on_standby_lookaside, 0x0, 0x0, false, 0x438e0946c6f80e7c, 1, uint64_t)
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
#define _m10
#define _m11
#define _m12
#define _m13
#endif