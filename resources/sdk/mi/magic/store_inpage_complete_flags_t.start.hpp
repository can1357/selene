#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_STORE_INPAGE_COMPLETE_FLAGS.EntireFlags", entire_flags, 0x0, 0x20, true, 0xdc59b9100cb880e)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_STORE_INPAGE_COMPLETE_FLAGS.StoreFault", store_fault, 0x0, 0x1, true, 0x9d9fbdb3282e1e0b, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MI_STORE_INPAGE_COMPLETE_FLAGS.LowResourceFailure", low_resource_failure, 0x1, 0x1, true, 0x5e83a6d1de5e75c6, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_MI_STORE_INPAGE_COMPLETE_FLAGS.RemainingPageCount", remaining_page_count, 0x10, 0x10, true, 0xc6824cbb66b55dcd, 16, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif