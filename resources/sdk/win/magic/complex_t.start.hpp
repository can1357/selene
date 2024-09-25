#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_complex.x", x, 0x0, 0x40, true, 0xb710d5201baf3983)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_complex.y", y, 0x40, 0x40, true, 0x4d48b89d90e0750d)
#else
#define _m00
#define _m01
#endif