#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_BUFFER_CAPACITY.OperationCode", operation_code, 0x0, 0x8, true, 0xb1ef06ce34eb46fc)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_BUFFER_CAPACITY.BlockInfo", block_info, 0x8, 0x1, true, 0x1bb4cb7d4a9600f8, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_READ_BUFFER_CAPACITY.AllocationLength", allocation_length, 0x38, 0x10, true, 0x56268f6bb3547020)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_BUFFER_CAPACITY.Control", control, 0x48, 0x8, true, 0x1f9722c248e0fa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif