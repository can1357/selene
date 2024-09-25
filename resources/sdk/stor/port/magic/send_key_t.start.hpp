#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEND_KEY.OperationCode", operation_code, 0x0, 0x8, true, 0x160cf6546f0a76a)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SEND_KEY.Lun", lun, 0xd, 0x3, true, 0x7425aaa8586653d9, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SEND_KEY.ParameterListLength", parameter_list_length, 0x40, 0x10, true, 0xf4168bf46e94e854)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_SEND_KEY.KeyFormat", key_format, 0x50, 0x6, true, 0xf079709020cb9f4b, 6, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_SEND_KEY.AGID", agid, 0x56, 0x2, true, 0xd4c903bd51298c2d, 2, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEND_KEY.Control", control, 0x58, 0x8, true, 0xdd6b1c7d7274a30b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif