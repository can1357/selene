#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PUBLICKEYSTRUC.bType", b_type, 0x0, 0x8, true, 0x681478b7a4bd287a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PUBLICKEYSTRUC.bVersion", b_version, 0x8, 0x8, true, 0xb1162b00c2c26a99)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PUBLICKEYSTRUC.aiKeyAlg", ai_key_alg, 0x20, 0x20, true, 0x9773f96b2dd2903)
#else
#define _m00
#define _m01
#define _m02
#endif