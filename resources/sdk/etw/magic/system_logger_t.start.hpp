#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_SYSTEM_LOGGER.LoggerId", logger_id, 0x0, 0x8, true, 0x8f2763f597428e71)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_SYSTEM_LOGGER.ClockType", clock_type, 0x8, 0x8, true, 0x1c463fb88374dad8)
#else
#define _m00
#define _m01
#endif