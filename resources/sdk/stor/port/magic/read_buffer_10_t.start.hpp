#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_BUFFER_10.OperationCode", operation_code, 0x0, 0x8, true, 0x94117a469d274faf)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_READ_BUFFER_10.Mode", mode, 0x8, 0x5, true, 0x15217725a9d6d7d3, 5, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_BUFFER_10.ModeSpecific", mode_specific, 0xd, 0x3, true, 0x3683e9c013deb025, 3, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_BUFFER_10.BufferId", buffer_id, 0x10, 0x8, true, 0x43a18a3df756dfe)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_READ_BUFFER_10.BufferOffset", buffer_offset, 0x18, 0x18, true, 0xb15e5c87a1c8e60)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_READ_BUFFER_10.AllocationLength", allocation_length, 0x30, 0x18, true, 0xfe1d0ee151181e2e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_BUFFER_10.Control", control, 0x48, 0x8, true, 0x27d468b4b46b5e3e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif