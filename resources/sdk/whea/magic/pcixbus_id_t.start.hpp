#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_PCIXBUS_ID.BusNumber", bus_number, 0x0, 0x8, true, 0x330f3dd36ace8f6b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_PCIXBUS_ID.BusSegment", bus_segment, 0x8, 0x8, true, 0xcf2de3a3d22c8354)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_PCIXBUS_ID.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xd522fe6e1449ec91)
#else
#define _m00
#define _m01
#define _m02
#endif