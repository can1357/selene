#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_WRITE_BREAKPOINT32.BreakPointAddress", break_point_address, 0x0, 0x20, true, 0xe665e6d38e723d58)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_WRITE_BREAKPOINT32.BreakPointHandle", break_point_handle, 0x20, 0x20, true, 0x4719a49dca6fd270)
#else
#define _m00
#define _m01
#endif