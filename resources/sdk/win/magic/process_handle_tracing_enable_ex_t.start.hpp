#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HANDLE_TRACING_ENABLE_EX.Flags", flags, 0x0, 0x20, true, 0xeccc873cc4f07e7f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HANDLE_TRACING_ENABLE_EX.TotalSlots", total_slots, 0x20, 0x20, true, 0xc2aade944b92d272)
#else
#define _m00
#define _m01
#endif