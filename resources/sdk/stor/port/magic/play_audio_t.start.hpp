#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLAY_AUDIO.OperationCode", operation_code, 0x0, 0x8, true, 0xd570932162aa3d1b)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PLAY_AUDIO.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x4bf137916be7998e, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_PLAY_AUDIO.StartingBlockAddress", starting_block_address, 0x10, 0x20, true, 0xea053b98925b21a4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PLAY_AUDIO.PlayLength", play_length, 0x38, 0x10, true, 0x4df04b9997e961de)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PLAY_AUDIO.Control", control, 0x48, 0x8, true, 0x40acdca7692a90ae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif