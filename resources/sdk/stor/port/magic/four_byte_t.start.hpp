#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FOUR_BYTE.Byte0", byte0, 0x0, 0x8, true, 0x7268057f4305240c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FOUR_BYTE.Byte1", byte1, 0x8, 0x8, true, 0xd4587fb7a7e4bc83)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FOUR_BYTE.Byte2", byte2, 0x10, 0x8, true, 0xa540e4898d9dc477)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FOUR_BYTE.Byte3", byte3, 0x18, 0x8, true, 0xdc2be333351fdbb1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FOUR_BYTE.AsULong", as_u_long, 0x0, 0x20, true, 0x233358bd94cfc45d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif