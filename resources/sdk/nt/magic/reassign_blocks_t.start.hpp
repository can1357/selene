#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REASSIGN_BLOCKS.Count", count, 0x10, 0x10, true, 0x504dd57f1f14ca1b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_REASSIGN_BLOCKS.BlockNumber", block_number, 0x20, 0x20, true, 0xe7abe12eb6c17b09)
#else
#define _m00
#define _m01
#endif