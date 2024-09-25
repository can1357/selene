#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DataStream.Length", length, 0x0, 0x10, true, 0x255931c6aadf7130)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DataStream.Flags", flags, 0x10, 0x10, true, 0xb44000da4d52422b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DataStream.Vdl", vdl, 0x40, 0x40, true, 0xd4aa09ca571fca08)
#else
#define _m00
#define _m01
#define _m02
#endif