#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_PROTOCOL_IN.OperationCode", operation_code, 0x0, 0x8, true, 0x9078b66a6d03eddd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_PROTOCOL_IN.SecurityProtocol", security_protocol, 0x8, 0x8, true, 0x8fc0d5175d16e77a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SECURITY_PROTOCOL_IN.SecurityProtocolSpecific", security_protocol_specific, 0x10, 0x10, true, 0x55039793fc8a1f48)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURITY_PROTOCOL_IN.INC_512", inc_512, 0x27, 0x1, true, 0x1f68464531c8f840, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SECURITY_PROTOCOL_IN.AllocationLength", allocation_length, 0x30, 0x20, true, 0x9f04668b71e7306a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_PROTOCOL_IN.Control", control, 0x58, 0x8, true, 0xd9941b432e6ffb32)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif