#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB32GENERIC.OperationCode", operation_code, 0x0, 0x8, true, 0x5187ee7ec4183769)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB32GENERIC.Control", control, 0x8, 0x8, true, 0x473786e617412129)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_CDB32GENERIC.Group", group, 0x30, 0x5, true, 0x19e616274a3326bd, 5, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB32GENERIC.AdditionalCDBLength", additional_cdb_length, 0x38, 0x8, true, 0xc1660115bb338409)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CDB32GENERIC.ServiceAction", service_action, 0x40, 0x10, true, 0xf369f85b1e3af994)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_CDB32GENERIC.LogicalBlock", logical_block, 0x60, 0x40, true, 0x795decd0b8b86a6d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_CDB32GENERIC.TransferLength", transfer_length, 0xe0, 0x20, true, 0x8ea5274408d686c8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif