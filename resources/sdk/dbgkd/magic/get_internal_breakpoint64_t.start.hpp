#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_GET_INTERNAL_BREAKPOINT64.BreakpointAddress", breakpoint_address, 0x0, 0x40, true, 0x32ac782e70315141)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT64.Flags", flags, 0x40, 0x20, true, 0xcbaf1207592a8b27)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT64.Calls", calls, 0x60, 0x20, true, 0x23bcb8459597f1de)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT64.MaxCallsPerPeriod", max_calls_per_period, 0x80, 0x20, true, 0x2f2d95a2c5c574b2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT64.MinInstructions", min_instructions, 0xa0, 0x20, true, 0xc7993d99050ded73)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT64.MaxInstructions", max_instructions, 0xc0, 0x20, true, 0x6def2b4048e29629)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT64.TotalInstructions", total_instructions, 0xe0, 0x20, true, 0x3c8528cf5cd12207)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif