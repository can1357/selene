#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_FORMATTED_CAPACITIES.OperationCode", operation_code, 0x0, 0x8, true, 0x80bba5d78c9c2e1b)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_READ_FORMATTED_CAPACITIES.Lun", lun, 0xd, 0x3, true, 0xd6a9c8f5382752d4, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_READ_FORMATTED_CAPACITIES.AllocationLength", allocation_length, 0x38, 0x10, true, 0x5372a293f4b902ed)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_FORMATTED_CAPACITIES.Control", control, 0x48, 0x8, true, 0x1342eb2b2183ab78)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif