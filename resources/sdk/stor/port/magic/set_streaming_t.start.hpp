#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SET_STREAMING.OperationCode", operation_code, 0x0, 0x8, true, 0xac43ef85eade34c3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SET_STREAMING.ParameterListLength", parameter_list_length, 0x48, 0x10, true, 0xf248410b3a0e9913)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SET_STREAMING.Control", control, 0x58, 0x8, true, 0x205a9423c2c8d90)
#else
#define _m00
#define _m01
#define _m02
#endif