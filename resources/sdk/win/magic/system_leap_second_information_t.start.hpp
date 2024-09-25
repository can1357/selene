#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_LEAP_SECOND_INFORMATION.Enabled", enabled, 0x0, 0x8, true, 0x37242f55c4463748)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LEAP_SECOND_INFORMATION.Flags", flags, 0x20, 0x20, true, 0xbd31e42b27c13faa)
#else
#define _m00
#define _m01
#endif