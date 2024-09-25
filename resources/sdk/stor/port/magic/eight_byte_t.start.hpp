#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EIGHT_BYTE.Byte0", byte0, 0x0, 0x8, true, 0xc6b9723e1600466)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EIGHT_BYTE.Byte1", byte1, 0x8, 0x8, true, 0x205db5ea8db6a390)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EIGHT_BYTE.Byte2", byte2, 0x10, 0x8, true, 0x13661b97d053ee5f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EIGHT_BYTE.Byte3", byte3, 0x18, 0x8, true, 0xb3232758d4e6a917)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EIGHT_BYTE.Byte4", byte4, 0x20, 0x8, true, 0xccd95f4565a85400)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EIGHT_BYTE.Byte5", byte5, 0x28, 0x8, true, 0x232384ecd3fab495)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EIGHT_BYTE.Byte6", byte6, 0x30, 0x8, true, 0x8d931c451743f301)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EIGHT_BYTE.Byte7", byte7, 0x38, 0x8, true, 0xecd719209da79469)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_EIGHT_BYTE.AsULongLong", as_u_long_long, 0x0, 0x40, true, 0xba2a126e1ddd3a05)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif