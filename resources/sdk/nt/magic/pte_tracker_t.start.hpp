#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PTE_TRACKER.ListEntry", list_entry, 0x0, 0x80, true, 0x4e5608ae7554d02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_PTE_TRACKER.Mdl", mdl, 0x80, 0x40, true, 0xacbf37cd918f4c9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PTE_TRACKER.Count", count, 0xc0, 0x40, true, 0xe99858e6d8359ad1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PTE_TRACKER.SystemVa", system_va, 0x100, 0x40, true, 0x58973bac20db6fd4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PTE_TRACKER.StartVa", start_va, 0x140, 0x40, true, 0xa5f099897be3b2c8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PTE_TRACKER.Offset", offset, 0x180, 0x20, true, 0xf856e15e09d827f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PTE_TRACKER.Length", length, 0x1a0, 0x20, true, 0x84b4c717d2c7de42)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PTE_TRACKER.Page", page, 0x1c0, 0x40, true, 0x5c0d14acf295e8c3)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PTE_TRACKER.IoMapping", io_mapping, 0x200, 0x1, true, 0x1691973424e3f297, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PTE_TRACKER.Matched", matched, 0x201, 0x1, true, 0x7821777056f12ab6, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PTE_TRACKER.CacheAttribute", cache_attribute, 0x202, 0x2, true, 0x53f0cd9ea572be68, 2, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PTE_TRACKER.GuardPte", guard_pte, 0x204, 0x1, true, 0x21f1c4221fd93f84, 1, uint32_t)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 7>), "_PTE_TRACKER.StackTrace", stack_trace, 0x240, 0xc0, true, 0x13efc19d3870bb23)
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
#endif