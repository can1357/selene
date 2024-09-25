#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ARM64_NT_NEON128.Low", low, 0x0, 0x40, true, 0xc0b41085582cff8a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_ARM64_NT_NEON128.High", high, 0x40, 0x40, true, 0x2a600823799bddf2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<double, 2>), "_ARM64_NT_NEON128.D", d, 0x0, 0x80, true, 0xad776f18237f636a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<float, 4>), "_ARM64_NT_NEON128.S", s, 0x0, 0x80, true, 0xb89816b178c34358)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 8>), "_ARM64_NT_NEON128.H", h, 0x0, 0x80, true, 0x93cfb86f2d520eac)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_ARM64_NT_NEON128.B", b, 0x0, 0x80, true, 0x7327cf7c58dded1c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif