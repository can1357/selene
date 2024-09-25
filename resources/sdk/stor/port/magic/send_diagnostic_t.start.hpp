#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEND_DIAGNOSTIC.OperationCode", operation_code, 0x0, 0x8, true, 0x2ba340321dd1663d)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEND_DIAGNOSTIC.UnitOffline", unit_offline, 0x8, 0x1, true, 0x60b491c922af0a39, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEND_DIAGNOSTIC.DeviceOffline", device_offline, 0x9, 0x1, true, 0x632fa8968039a7b1, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEND_DIAGNOSTIC.SelfTest", self_test, 0xa, 0x1, true, 0xff6580213ca0aa72, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEND_DIAGNOSTIC.PageFormat", page_format, 0xc, 0x1, true, 0xe2da866d84797b87, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SEND_DIAGNOSTIC.SelfTestCode", self_test_code, 0xd, 0x3, true, 0x2584bf8caa177c59, 3, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_SEND_DIAGNOSTIC.ParameterListLength", parameter_list_length, 0x18, 0x10, true, 0x793006719f4b133f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEND_DIAGNOSTIC.Control", control, 0x28, 0x8, true, 0x292f460d95ad5415)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif