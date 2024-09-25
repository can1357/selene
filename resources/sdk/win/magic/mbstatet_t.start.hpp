#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_Mbstatet._Wchar", wchar, 0x0, 0x20, true, 0x44704704bf508bab)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_Mbstatet._Byte", byte, 0x20, 0x10, true, 0xa677d0a8259c3694)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_Mbstatet._State", state, 0x30, 0x10, true, 0xd65b23b8ecdb959a)
#else
#define _m00
#define _m01
#define _m02
#endif