#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TWO_BYTE.Byte0", byte0, 0x0, 0x8, true, 0xb6e1d56b6aa1385)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TWO_BYTE.Byte1", byte1, 0x8, 0x8, true, 0x68624093c1df9153)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TWO_BYTE.AsUShort", as_u_short, 0x0, 0x10, true, 0xf9930daa80afadb3)
#else
#define _m00
#define _m01
#define _m02
#endif