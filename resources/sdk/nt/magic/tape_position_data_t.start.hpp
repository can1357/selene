#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TAPE_POSITION_DATA.BlockPositionUnsupported", block_position_unsupported, 0x2, 0x1, true, 0xe562f1e5f9949987, 1, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TAPE_POSITION_DATA.EndOfPartition", end_of_partition, 0x6, 0x1, true, 0xf009a06a335bcf16, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_TAPE_POSITION_DATA.BeginningOfPartition", beginning_of_partition, 0x7, 0x1, true, 0x9fd821e07a884ce6, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_POSITION_DATA.PartitionNumber", partition_number, 0x8, 0x8, true, 0xd74413d92e748767)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TAPE_POSITION_DATA.FirstBlock", first_block, 0x20, 0x20, true, 0xc12e0d9a5eb7dd1e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TAPE_POSITION_DATA.LastBlock", last_block, 0x40, 0x20, true, 0x25168cf5c2e4317c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_TAPE_POSITION_DATA.NumberOfBlocks", number_of_blocks, 0x68, 0x18, true, 0x128e715f464e39ed)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TAPE_POSITION_DATA.NumberOfBytes", number_of_bytes, 0x80, 0x20, true, 0xc0dd94013dd46670)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif