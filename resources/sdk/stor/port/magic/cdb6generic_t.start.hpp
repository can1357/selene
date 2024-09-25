#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6GENERIC.OperationCode", operation_code, 0x0, 0x8, true, 0x6fad9b0a65c6372)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB6GENERIC.Immediate", immediate, 0x8, 0x1, true, 0xcc13a93446d81f32, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_CDB6GENERIC.CommandUniqueBits", command_unique_bits, 0x9, 0x4, true, 0x77d4fa8f139dcedc, 4, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDB6GENERIC.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0xe72f788bae22ff3, 3, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_CDB6GENERIC.CommandUniqueBytes", command_unique_bytes, 0x10, 0x18, true, 0x9e0c448dd7340688)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB6GENERIC.Link", link, 0x28, 0x1, true, 0xaf36b1dba8e9ed3e, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB6GENERIC.Flag", flag, 0x29, 0x1, true, 0xa180a30f0de0b32, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_CDB6GENERIC.VendorUnique", vendor_unique, 0x2e, 0x2, true, 0x9cdbd669fc5123ec, 2, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif