#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_FORMATTED_CAPACITY_DESCRIPTOR.NumberOfBlocks", number_of_blocks, 0x0, 0x20, true, 0xd5adeb3e0fda481)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FORMATTED_CAPACITY_DESCRIPTOR.Maximum", maximum, 0x20, 0x1, true, 0x2f7c2246b925328a, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FORMATTED_CAPACITY_DESCRIPTOR.Valid", valid, 0x21, 0x1, true, 0xf899e591d83596be, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_FORMATTED_CAPACITY_DESCRIPTOR.FormatType", format_type, 0x22, 0x6, true, 0x728323a43f134f99, 6, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_FORMATTED_CAPACITY_DESCRIPTOR.BlockLength", block_length, 0x28, 0x18, true, 0xbfd76d49774f5b7d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif