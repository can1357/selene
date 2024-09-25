#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_BUFFER_16.OperationCode", operation_code, 0x0, 0x8, true, 0xd17c263f19c22757)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_READ_BUFFER_16.Mode", mode, 0x8, 0x5, true, 0x56f082aa03cbe656, 5, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_BUFFER_16.ModeSpecific", mode_specific, 0xd, 0x3, true, 0x5a35f644e4021581, 3, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_READ_BUFFER_16.BufferOffset", buffer_offset, 0x10, 0x40, true, 0xabae480951ecd9a4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_READ_BUFFER_16.AllocationLength", allocation_length, 0x50, 0x20, true, 0xe6700c049498f156)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_BUFFER_16.BufferId", buffer_id, 0x70, 0x8, true, 0xe6a359b6c4a5ef89)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_BUFFER_16.Control", control, 0x78, 0x8, true, 0xd3358a154d160f6e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif