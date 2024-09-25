#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT32.BreakpointAddress", breakpoint_address, 0x0, 0x20, true, 0x4ed8d704e53deab2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT32.Flags", flags, 0x20, 0x20, true, 0x633876ea22553616)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT32.Calls", calls, 0x40, 0x20, true, 0xdd37fe17f986abeb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT32.MaxCallsPerPeriod", max_calls_per_period, 0x60, 0x20, true, 0xcdaa4c881abf0a17)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT32.MinInstructions", min_instructions, 0x80, 0x20, true, 0x667a63b51db7b4db)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT32.MaxInstructions", max_instructions, 0xa0, 0x20, true, 0xc5e3f5a4f356c8fe)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_INTERNAL_BREAKPOINT32.TotalInstructions", total_instructions, 0xc0, 0x20, true, 0x64776d2d258f343a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif