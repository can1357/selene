#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_RTL_PROCESS_BACKTRACE_INFORMATION.SymbolicBackTrace", symbolic_back_trace, 0x0, 0x40, true, 0xa40df5585cc7c462)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_BACKTRACE_INFORMATION.TraceCount", trace_count, 0x40, 0x20, true, 0x1cb7b3450b5ef10a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_PROCESS_BACKTRACE_INFORMATION.Index", index, 0x60, 0x10, true, 0x3b699ce3b2f91e66)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_PROCESS_BACKTRACE_INFORMATION.Depth", depth, 0x70, 0x10, true, 0xb1e1338db52a446c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 32>), "_RTL_PROCESS_BACKTRACE_INFORMATION.BackTrace", back_trace, 0x80, 0x0, true, 0x305ddd210dd121fa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif