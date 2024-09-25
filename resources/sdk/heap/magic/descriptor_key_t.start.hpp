#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_HEAP_DESCRIPTOR_KEY.Key", key, 0x0, 0x20, true, 0x834948816f449100, 0, uint16_t,uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_HEAP_DESCRIPTOR_KEY.EncodedCommittedPageCount", encoded_committed_page_count, 0x0, 0x10, true, 0x8f885d0c8bad587d, 16, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_HEAP_DESCRIPTOR_KEY.LargePageCost", large_page_cost, 0x10, 0x8, true, 0x1568e49c2e03d07e, 8, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_HEAP_DESCRIPTOR_KEY.UnitCount", unit_count, 0x18, 0x8, true, 0xc51a4f73a266dc98, 8, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_DESCRIPTOR_KEY.EncodedCommitCount", encoded_commit_count, 0x0, 0x0, false, 0xb8d62d10e6051406)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_DESCRIPTOR_KEY.PageCount", page_count, 0x0, 0x0, false, 0x35d03799d73d3c51)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif