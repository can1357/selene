#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_LBA.StartingBlockAddress", starting_block_address, 0x0, 0x20, true, 0x2d5418e16892a408)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_LBA.PlayLength", play_length, 0x20, 0x20, true, 0xb1ad6cfea471846b)
#else
#define _m00
#define _m01
#endif