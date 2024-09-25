#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SET_TIMESTAMP.OperationCode", operation_code, 0x0, 0x8, true, 0xe3a539703e924e36)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_SET_TIMESTAMP.ServiceAction", service_action, 0x8, 0x5, true, 0xf3962d4b10cd43e9, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SET_TIMESTAMP.ParameterListLength", parameter_list_length, 0x30, 0x20, true, 0x4d6797e3c0d51efd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SET_TIMESTAMP.Control", control, 0x58, 0x8, true, 0x85d4ad3acc9a82ba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif