#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::information_level_internal_t), "_POWER_INFORMATION_INTERNAL_HEADER.InternalType", internal_type, 0x0, 0x0, false, 0xa05a9d22ba3e60e0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_INFORMATION_INTERNAL_HEADER.Version", version, 0x0, 0x0, false, 0xb867250c52996d8a)
#else
#define _m00
#define _m01
#endif