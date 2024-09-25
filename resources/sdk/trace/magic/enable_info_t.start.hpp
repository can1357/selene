#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_ENABLE_INFO.IsEnabled", is_enabled, 0x0, 0x20, true, 0x2c0a8a7053d98c19)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_ENABLE_INFO.Level", level, 0x20, 0x8, true, 0x2997e87380cd70a8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRACE_ENABLE_INFO.LoggerId", logger_id, 0x30, 0x10, true, 0x56e5fcb4bae482cb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_ENABLE_INFO.EnableProperty", enable_property, 0x40, 0x20, true, 0xd72da12d9ab79647)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TRACE_ENABLE_INFO.MatchAnyKeyword", match_any_keyword, 0x80, 0x40, true, 0x318531057f8980e2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_TRACE_ENABLE_INFO.MatchAllKeyword", match_all_keyword, 0xc0, 0x40, true, 0x2c95add16db1ec85)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif