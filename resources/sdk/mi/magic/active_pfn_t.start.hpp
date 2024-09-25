#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_ACTIVE_PFN.Leaf.Tradable", tradable, 0x0, 0x1, true, 0x2cc3e657b4e84ba, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint43_t), "_MI_ACTIVE_PFN.Leaf.NonPagedBuddy", non_paged_buddy, 0x1, 0x2b, true, 0xdb6be40b8d193ca3, 43, uint64_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_leaf_t), "_MI_ACTIVE_PFN.Leaf", leaf, 0x0, 0x40, true, 0x1fe101de523be9f8)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_ACTIVE_PFN.PageTable.Tradable", tradable, 0x0, 0x1, true, 0x437f09b4986b64a5, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MI_ACTIVE_PFN.PageTable.WsleAge", wsle_age, 0x1, 0x3, true, 0xb28a799cf8a2c535, 3, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_MI_ACTIVE_PFN.PageTable.OldestWsleLeafEntries", oldest_wsle_leaf_entries, 0x4, 0xa, true, 0x38516d18bcfb223e, 10, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MI_ACTIVE_PFN.PageTable.OldestWsleLeafAge", oldest_wsle_leaf_age, 0xe, 0x3, true, 0xf1c7a249d3e13302, 3, uint64_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint43_t), "_MI_ACTIVE_PFN.PageTable.NonPagedBuddy", non_paged_buddy, 0x11, 0x2b, true, 0x43ff752e632cf80, 43, uint64_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_page_table_t), "_MI_ACTIVE_PFN.PageTable", page_table, 0x0, 0x40, true, 0x65ea47a3cc53f26f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_ACTIVE_PFN.EntireActiveField", entire_active_field, 0x0, 0x40, true, 0x4337404fa90e0c96)
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