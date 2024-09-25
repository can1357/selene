#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_PREFETCH_OPTIONS.LowerPriority", lower_priority, 0x0, 0x1, true, 0x1bfa229e280c222f, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_PREFETCH_OPTIONS.VirtualOffsets", virtual_offsets, 0x1, 0x1, true, 0x51fa38eb323c65bf, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_PREFETCH_OPTIONS.TrickleIOs", trickle_i_os, 0x2, 0x1, true, 0xc4e8e041efa12ad6, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_PREFETCH_OPTIONS.SkipInStorePages", skip_in_store_pages, 0x3, 0x1, true, 0x3a4deb4be3034de0, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_PREFETCH_OPTIONS.PrefetchFilesByVa", prefetch_files_by_va, 0x4, 0x1, true, 0xab5cb591e6ae6ce8, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_PREFETCH_OPTIONS.SkipMemoryStorePages", skip_memory_store_pages, 0x5, 0x1, true, 0x6e30a96d891a7576, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_SYSTEM_PREFETCH_OPTIONS.ScenarioType", scenario_type, 0x8, 0x8, true, 0xeead4e19db0019c7, 8, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif