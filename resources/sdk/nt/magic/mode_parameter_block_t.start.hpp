#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_PARAMETER_BLOCK.DensityCode", density_code, 0x0, 0x8, true, 0xc4414e75599c87c8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_MODE_PARAMETER_BLOCK.NumberOfBlocks", number_of_blocks, 0x8, 0x18, true, 0xacc4536e806969f1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_MODE_PARAMETER_BLOCK.BlockLength", block_length, 0x28, 0x18, true, 0xb6d03863450c8053)
#else
#define _m00
#define _m01
#define _m02
#endif