#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEND_OPC_INFORMATION.OperationCode", operation_code, 0x0, 0x8, true, 0x456fe7629d7d5c6d)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEND_OPC_INFORMATION.DoOpc", do_opc, 0x8, 0x1, true, 0x2ec815bf0712cf4f, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEND_OPC_INFORMATION.Exclude0", exclude0, 0x10, 0x1, true, 0xd0a58310827ce125, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEND_OPC_INFORMATION.Exclude1", exclude1, 0x11, 0x1, true, 0xc62c001eb96ba0fb, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SEND_OPC_INFORMATION.ParameterListLength", parameter_list_length, 0x38, 0x10, true, 0x48b2b219fd57db9b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif