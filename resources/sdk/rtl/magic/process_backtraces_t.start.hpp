#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_RTL_PROCESS_BACKTRACES.CommittedMemory", committed_memory, 0x0, 0x40, true, 0xdace9dd3321bce1b, 0, uint32_t,uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_RTL_PROCESS_BACKTRACES.ReservedMemory", reserved_memory, 0x40, 0x40, true, 0xa8a7e1770afbbd66, 0, uint32_t,uint64_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_BACKTRACES.NumberOfBackTraceLookups", number_of_back_trace_lookups, 0x80, 0x20, true, 0x14d2d1d5315deb97)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_PROCESS_BACKTRACES.NumberOfBackTraces", number_of_back_traces, 0xa0, 0x20, true, 0x97d587ca346c8fe5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::process_backtrace_information_t, 1>), "_RTL_PROCESS_BACKTRACES.BackTraces", back_traces, 0xc0, 0x80, true, 0xe096b05f46e842b0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif