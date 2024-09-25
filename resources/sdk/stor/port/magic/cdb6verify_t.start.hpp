#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6VERIFY.OperationCode", operation_code, 0x0, 0x8, true, 0x12c5f50012d313f8)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB6VERIFY.Fixed", fixed, 0x8, 0x1, true, 0x882fac751ee9a8b, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB6VERIFY.ByteCompare", byte_compare, 0x9, 0x1, true, 0xf629fc509085e2f9, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB6VERIFY.Immediate", immediate, 0xa, 0x1, true, 0xeb71bbbfa48bd806, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CDB6VERIFY.LogicalUnitNumber", logical_unit_number, 0xd, 0x3, true, 0x2ee1017eaedc2b3a, 3, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_CDB6VERIFY.VerificationLength", verification_length, 0x10, 0x18, true, 0xfa9f237d4c69c5a7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6VERIFY.Control", control, 0x28, 0x8, true, 0xaeb330e88b1acc99)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif