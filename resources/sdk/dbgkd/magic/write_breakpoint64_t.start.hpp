#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_WRITE_BREAKPOINT64.BreakPointAddress", break_point_address, 0x0, 0x40, true, 0xa58e1ec104b76a85)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_WRITE_BREAKPOINT64.BreakPointHandle", break_point_handle, 0x40, 0x20, true, 0x80a4048cd6acc065)
#else
#define _m00
#define _m01
#endif