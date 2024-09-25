#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_BREAKPOINTEX.BreakPointCount", break_point_count, 0x0, 0x20, true, 0xc022b9df1a590f78)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_DBGKD_BREAKPOINTEX.ContinueStatus", continue_status, 0x20, 0x20, true, 0x7edc1a043c6f9fb0)
#else
#define _m00
#define _m01
#endif