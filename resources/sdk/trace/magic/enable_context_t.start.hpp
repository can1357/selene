#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRACE_ENABLE_CONTEXT.LoggerId", logger_id, 0x0, 0x10, true, 0x38222d136f27344e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_ENABLE_CONTEXT.Level", level, 0x10, 0x8, true, 0x6329fc2469c8b45)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_ENABLE_CONTEXT.InternalFlag", internal_flag, 0x18, 0x8, true, 0x152b50d494563c0e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_ENABLE_CONTEXT.EnableFlags", enable_flags, 0x20, 0x20, true, 0xd0923caba2014711)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif