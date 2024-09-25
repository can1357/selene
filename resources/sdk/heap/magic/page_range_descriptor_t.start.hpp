#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_HEAP_PAGE_RANGE_DESCRIPTOR.TreeNode", tree_node, 0x0, 0xc0, true, 0xee464d79ffd1be9f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_PAGE_RANGE_DESCRIPTOR.TreeSignature", tree_signature, 0x0, 0x20, true, 0x59f04ae6f85a48f7)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_HEAP_PAGE_RANGE_DESCRIPTOR.UnusedBytes", unused_bytes, 0x20, 0x20, true, 0xfd956fbd9e6b17df, 0, uint16_t,uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_PAGE_RANGE_DESCRIPTOR.ExtraPresent", extra_present, 0x40, 0x1, true, 0xfbedc003b775781, 1, uint16_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_HEAP_PAGE_RANGE_DESCRIPTOR.RangeFlags", range_flags, 0xc0, 0x8, true, 0xb2dfce3b859ec3c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct heap::descriptor_key_t), "_HEAP_PAGE_RANGE_DESCRIPTOR.Key", key, 0xe0, 0x20, true, 0xc2245b44becbf2b1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint8_t, sdk::array<uint8_t, 3>>), "_HEAP_PAGE_RANGE_DESCRIPTOR.Align", align, 0xe0, 0x18, true, 0x59acb690ac7a9804)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_PAGE_RANGE_DESCRIPTOR.CommittedPageCount", committed_page_count, 0xc8, 0x8, true, 0xd300862a7731ba5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_PAGE_RANGE_DESCRIPTOR.UnitOffset", unit_offset, 0xf8, 0x8, true, 0x492292c0434b0bff)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_PAGE_RANGE_DESCRIPTOR.UnitSize", unit_size, 0xf8, 0x8, true, 0xcff02a2eca45295a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_PAGE_RANGE_DESCRIPTOR.Offset", offset, 0x0, 0x0, false, 0x2e335330442b25ed)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_PAGE_RANGE_DESCRIPTOR.Size", size, 0x0, 0x0, false, 0x2cd5c09cbd311c81)
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