#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_HEADER.OperationCode", operation_code, 0x0, 0x8, true, 0x7a250af067d883e7)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_HEADER.Msf", msf, 0x9, 0x1, true, 0x39c5ed17f10591b7, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_HEADER.Lun", lun, 0xd, 0x3, true, 0x6186c6066470a811, 3, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_READ_HEADER.LogicalBlockAddress", logical_block_address, 0x10, 0x20, true, 0xab5eb35b7fe5726a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_READ_HEADER.AllocationLength", allocation_length, 0x38, 0x10, true, 0x4ae99a30b17078b0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_HEADER.Control", control, 0x48, 0x8, true, 0x5467e58fb115ac7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif