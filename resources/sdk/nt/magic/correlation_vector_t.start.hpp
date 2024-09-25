#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "CORRELATION_VECTOR.Version", version, 0x0, 0x8, true, 0x18b0b20a80a7a933)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 129>), "CORRELATION_VECTOR.Vector", vector, 0x8, 0x8, true, 0xbc0e9e049d0112e)
#else
#define _m00
#define _m01
#endif