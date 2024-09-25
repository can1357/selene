#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ldiv_t.quot", quot, 0x0, 0x20, true, 0x8f0b01eb3e7eebc8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ldiv_t.rem", rem, 0x20, 0x20, true, 0xdf46d019908ed195)
#else
#define _m00
#define _m01
#endif