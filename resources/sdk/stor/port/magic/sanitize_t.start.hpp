#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SANITIZE.OperationCode", operation_code, 0x0, 0x8, true, 0xc6015819d245595f)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_SANITIZE.ServiceAction", service_action, 0x8, 0x5, true, 0x2356bc19e5cfa097, 5, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SANITIZE.AUSE", ause, 0xd, 0x1, true, 0x910458b737eda81c, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SANITIZE.Immediate", immediate, 0xf, 0x1, true, 0x36f43aaaeca473e5, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SANITIZE.ParameterListLength", parameter_list_length, 0x38, 0x10, true, 0x8c24ae908dc7d868)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SANITIZE.Control", control, 0x48, 0x8, true, 0x40db1716747568c0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif