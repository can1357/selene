#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_INFORMATION.MaxIdlenessAllowed", max_idleness_allowed, 0x0, 0x20, true, 0x70536d8bcc5e6a61)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_INFORMATION.Idleness", idleness, 0x20, 0x20, true, 0xaf1b4ece5834acfa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_INFORMATION.TimeRemaining", time_remaining, 0x40, 0x20, true, 0x882ec1f178f86a7a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_POWER_INFORMATION.CoolingMode", cooling_mode, 0x60, 0x8, true, 0xa76450cdaf76398d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif