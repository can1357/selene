#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UPPER_HANDLE_BITS.fullType", full_type, 0x0, 0x8, true, 0xf39695b68973c286)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UPPER_HANDLE_BITS.unique", unique, 0x8, 0x8, true, 0xe217479d14e6c6ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UPPER_HANDLE_BITS.index", index, 0x8, 0x8, true, 0x355a27f5faefb160)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_UPPER_HANDLE_BITS.full", full, 0x0, 0x10, true, 0x7e2cda977bdddfa2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif