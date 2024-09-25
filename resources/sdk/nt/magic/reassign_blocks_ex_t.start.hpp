#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_REASSIGN_BLOCKS_EX.Count", count, 0x10, 0x10, true, 0xfc140211f8184099)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 1>), "_REASSIGN_BLOCKS_EX.BlockNumber", block_number, 0x20, 0x40, true, 0x932efbffd12a1af2)
#else
#define _m00
#define _m01
#endif