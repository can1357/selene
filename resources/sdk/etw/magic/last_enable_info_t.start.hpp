#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_LAST_ENABLE_INFO.EnableFlags", enable_flags, 0x0, 0x40, true, 0xba984dd8fac9178)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_LAST_ENABLE_INFO.LoggerId", logger_id, 0x40, 0x10, true, 0x8b70bcd268c70383)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_LAST_ENABLE_INFO.Level", level, 0x50, 0x8, true, 0x73b3d2605b32eb2b)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ETW_LAST_ENABLE_INFO.Enabled", enabled, 0x58, 0x1, true, 0xb9fa17e9851cf8ab, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_ETW_LAST_ENABLE_INFO.InternalFlag", internal_flag, 0x59, 0x7, true, 0x6b05b11ff45dac8f, 7, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif