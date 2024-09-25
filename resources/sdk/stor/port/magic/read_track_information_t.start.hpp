#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_TRACK_INFORMATION.OperationCode", operation_code, 0x0, 0x8, true, 0x3d9c313b9d0c5e02)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_READ_TRACK_INFORMATION.Track", track, 0x8, 0x2, true, 0x6666796a813f5b32, 2, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_TRACK_INFORMATION.Lun", lun, 0xd, 0x3, true, 0x1a75be35fc433ab4, 3, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_READ_TRACK_INFORMATION.BlockAddress", block_address, 0x10, 0x20, true, 0xa944f39bc6a7cbfc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_READ_TRACK_INFORMATION.AllocationLength", allocation_length, 0x38, 0x10, true, 0x9e2959f81d6e00be)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_TRACK_INFORMATION.Control", control, 0x48, 0x8, true, 0x6e57d76c45a32d76)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif