#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_SET_INTERNAL_BREAKPOINT32.BreakpointAddress", breakpoint_address, 0x0, 0x20, true, 0x77fe93d0b88c26d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_SET_INTERNAL_BREAKPOINT32.Flags", flags, 0x20, 0x20, true, 0x4301b1aee6399a9)
#else
#define _m00
#define _m01
#endif