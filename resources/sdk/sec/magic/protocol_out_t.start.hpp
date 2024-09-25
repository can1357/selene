#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_PROTOCOL_OUT.OperationCode", operation_code, 0x0, 0x8, true, 0xfb54f12f0bb7126f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_PROTOCOL_OUT.SecurityProtocol", security_protocol, 0x8, 0x8, true, 0xd4e78f00f3876294)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SECURITY_PROTOCOL_OUT.SecurityProtocolSpecific", security_protocol_specific, 0x10, 0x10, true, 0xe727c2b424b780fd)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SECURITY_PROTOCOL_OUT.INC_512", inc_512, 0x27, 0x1, true, 0x4c904e0673486caa, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SECURITY_PROTOCOL_OUT.AllocationLength", allocation_length, 0x30, 0x20, true, 0x7e005c7cc8680365)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_PROTOCOL_OUT.Control", control, 0x58, 0x8, true, 0xefe6533e26dafde7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif