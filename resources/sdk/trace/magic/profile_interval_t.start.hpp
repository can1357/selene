#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_PROFILE_INTERVAL.Source", source, 0x0, 0x20, true, 0xac6e95e88667fea8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_PROFILE_INTERVAL.Interval", interval, 0x20, 0x20, true, 0x5c3fa31416c4a4fc)
#else
#define _m00
#define _m01
#endif