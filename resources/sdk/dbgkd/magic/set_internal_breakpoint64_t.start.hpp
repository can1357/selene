#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_SET_INTERNAL_BREAKPOINT64.BreakpointAddress", breakpoint_address, 0x0, 0x40, true, 0x7579938bd33883ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_SET_INTERNAL_BREAKPOINT64.Flags", flags, 0x40, 0x20, true, 0x9ff03e475c6494d1)
#else
#define _m00
#define _m01
#endif