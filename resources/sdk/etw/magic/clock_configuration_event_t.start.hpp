#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_CLOCK_CONFIGURATION_EVENT.KnownType", known_type, 0x0, 0x20, true, 0x6f4f61c4c98f0977)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_CLOCK_CONFIGURATION_EVENT.Capabilities", capabilities, 0x20, 0x20, true, 0x5556ab752192a33a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::perfinfo_dynamic_tick_disable_reason_t), "_ETW_CLOCK_CONFIGURATION_EVENT.DisableReason", disable_reason, 0x40, 0x20, true, 0x4b6034ad3a6b6fc)
#else
#define _m00
#define _m01
#define _m02
#endif