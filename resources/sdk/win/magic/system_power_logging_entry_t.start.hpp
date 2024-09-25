#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_LOGGING_ENTRY.Reason", reason, 0x0, 0x20, true, 0x5fa4097f2a9c3466)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POWER_LOGGING_ENTRY.States", states, 0x20, 0x20, true, 0x4c3dad4069c409f0)
#else
#define _m00
#define _m01
#endif