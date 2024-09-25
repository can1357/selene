#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PRINT.OperationCode", operation_code, 0x0, 0x8, true, 0x2a099b0e1fba7469)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PRINT.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x293a40c02113e58c, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_PRINT.TransferLength", transfer_length, 0x10, 0x18, true, 0x615fbb25bd6ac8fa)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PRINT.Control", control, 0x28, 0x8, true, 0xf90aa62a91272157)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif