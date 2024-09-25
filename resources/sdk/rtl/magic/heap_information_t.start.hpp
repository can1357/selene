#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_HEAP_INFORMATION.BaseAddress", base_address, 0x0, 0x40, true, 0xfa27f6b4acf71295)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_INFORMATION.Flags", flags, 0x40, 0x20, true, 0xb4879359159d3962)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_INFORMATION.EntryOverhead", entry_overhead, 0x60, 0x10, true, 0x39deeb0f624fb612)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_INFORMATION.CreatorBackTraceIndex", creator_back_trace_index, 0x70, 0x10, true, 0x156399938de94d6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_INFORMATION.BytesAllocated", bytes_allocated, 0x80, 0x40, true, 0xa88df5f71df4dc85)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_INFORMATION.BytesCommitted", bytes_committed, 0xc0, 0x40, true, 0xc639eed1a508a94f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_INFORMATION.NumberOfTags", number_of_tags, 0x100, 0x20, true, 0x949b41ec8dc49a3a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_INFORMATION.NumberOfEntries", number_of_entries, 0x120, 0x20, true, 0x4817be603f59ea28)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_INFORMATION.NumberOfPseudoTags", number_of_pseudo_tags, 0x140, 0x20, true, 0xba80f1424fe27ca6)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_INFORMATION.PseudoTagGranularity", pseudo_tag_granularity, 0x160, 0x20, true, 0x81b22cd8a67ad656)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::heap_tag_t*), "_RTL_HEAP_INFORMATION.Tags", tags, 0x240, 0x40, true, 0x3d0f1439b17b157c)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::heap_entry_t*), "_RTL_HEAP_INFORMATION.Entries", entries, 0x280, 0x40, true, 0xb404b21fe230f2b0)
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
#endif