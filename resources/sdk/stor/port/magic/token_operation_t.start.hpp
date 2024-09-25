#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TOKEN_OPERATION.OperationCode", operation_code, 0x0, 0x8, true, 0x9ea2fde742035ab5)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_TOKEN_OPERATION.ServiceAction", service_action, 0x8, 0x5, true, 0x8db99ea795e735fd, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TOKEN_OPERATION.ListIdentifier", list_identifier, 0x30, 0x20, true, 0x51ae39534d6cd4b9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_TOKEN_OPERATION.ParameterListLength", parameter_list_length, 0x50, 0x20, true, 0xbf6d29be80fea7f4)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_TOKEN_OPERATION.GroupNumber", group_number, 0x70, 0x5, true, 0xbd1cb4f42da68faf, 5, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TOKEN_OPERATION.Control", control, 0x78, 0x8, true, 0x582d504f4584fd0e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif