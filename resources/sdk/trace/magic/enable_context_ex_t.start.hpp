#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TRACE_ENABLE_CONTEXT_EX.LoggerId", logger_id, 0x0, 0x10, true, 0x878da07ebf8f92e6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_ENABLE_CONTEXT_EX.Level", level, 0x10, 0x8, true, 0x36e5e4abe54b7001)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_ENABLE_CONTEXT_EX.InternalFlag", internal_flag, 0x18, 0x8, true, 0xd14eedd9745c5a6b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_ENABLE_CONTEXT_EX.EnableFlags", enable_flags, 0x20, 0x20, true, 0x37aaba6f4b1a549b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_ENABLE_CONTEXT_EX.EnableFlagsHigh", enable_flags_high, 0x40, 0x20, true, 0x1361c83b528818aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif