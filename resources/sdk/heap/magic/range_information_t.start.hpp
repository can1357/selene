#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_RANGE_INFORMATION.Address", address, 0x0, 0x40, true, 0x945298b412b4376)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_RANGE_INFORMATION.Size", size, 0x40, 0x40, true, 0x898b7bfdd88123ae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_RANGE_INFORMATION.Type", type, 0x80, 0x20, true, 0xed2445e1c35f2dfa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_RANGE_INFORMATION.Protection", protection, 0xa0, 0x20, true, 0xfa904b29110ad81)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_RANGE_INFORMATION.FirstBlockInformationOffset", first_block_information_offset, 0xc0, 0x40, true, 0xe44c3175437b845f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_RANGE_INFORMATION.NextRangeInformationOffset", next_range_information_offset, 0x100, 0x40, true, 0x78df11b80f02945d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif