#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_READ_BLOCK_LIMITS.BlockMaximumSize", block_maximum_size, 0x8, 0x18, true, 0x95b635209350f825)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_READ_BLOCK_LIMITS.BlockMinimumSize", block_minimum_size, 0x20, 0x10, true, 0x31b5ffed20c3be93)
#else
#define _m00
#define _m01
#endif