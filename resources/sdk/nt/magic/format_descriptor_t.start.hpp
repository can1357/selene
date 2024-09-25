#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_FORMAT_DESCRIPTOR.NumberOfBlocks", number_of_blocks, 0x0, 0x20, true, 0xd917cc7d614fd7d1)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_FORMAT_DESCRIPTOR.FormatSubType", format_sub_type, 0x20, 0x2, true, 0x1721435bdc00c770, 2, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_FORMAT_DESCRIPTOR.FormatType", format_type, 0x22, 0x6, true, 0xb982b79401e85933, 6, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_FORMAT_DESCRIPTOR.BlockLength", block_length, 0x28, 0x18, true, 0x84044ad5b25a40aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif