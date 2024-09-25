#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_HEAP_LARGE_ALLOC_DATA.TreeNode", tree_node, 0x0, 0xc0, true, 0x6e4b784d5b79e988)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_LARGE_ALLOC_DATA.VirtualAddress", virtual_address, 0xc0, 0x40, true, 0x6d7747621aed8104)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_HEAP_LARGE_ALLOC_DATA.UnusedBytes", unused_bytes, 0xc0, 0x10, true, 0x5f1477701e480cf2, 16, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_LARGE_ALLOC_DATA.ExtraPresent", extra_present, 0x100, 0x1, true, 0x9af61e9dcacf01a4, 1, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint52_t), "_HEAP_LARGE_ALLOC_DATA.AllocatedPages", allocated_pages, 0x10c, 0x34, true, 0x7baf631caa8b399a, 52, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_LARGE_ALLOC_DATA.GuardPageCount", guard_page_count, 0x101, 0x1, true, 0x6ec578dee3453833, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_HEAP_LARGE_ALLOC_DATA.GuardPageAlignment", guard_page_alignment, 0x102, 0x6, true, 0x58b0bc710ada7bfb, 6, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif