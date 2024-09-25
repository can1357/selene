#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MI_SYSTEM_CACHE_VIEW_ATTRIBUTES.NumberOfPtes", number_of_ptes, 0x0, 0x6, true, 0x2bbcf0f48d9aa54a, 6, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_MI_SYSTEM_CACHE_VIEW_ATTRIBUTES.PartitionId", partition_id, 0x6, 0xa, true, 0x5e6c653b00b66072, 10, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint48_t), "_MI_SYSTEM_CACHE_VIEW_ATTRIBUTES.SectionOffset", section_offset, 0x10, 0x30, true, 0x8d76b8b8641c33ef, 0, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MI_SYSTEM_CACHE_VIEW_ATTRIBUTES.ViewState", view_state, 0x0, 0x0, false, 0xc6d5a21df6edf517, 2, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif