#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_AVRF_PROCESS_HANDLE_TRACING_QUERY_WOW64.Handle", handle, 0x0, 0x40, true, 0xf6b92851659e6015)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AVRF_PROCESS_HANDLE_TRACING_QUERY_WOW64.TotalTraces", total_traces, 0x40, 0x20, true, 0x96800a18bd233c0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::avrf_process_handle_tracing_entry_wow64_t, 1>), "_AVRF_PROCESS_HANDLE_TRACING_QUERY_WOW64.HandleTrace", handle_trace, 0x80, 0x0, true, 0x7239c8bd25a94c1)
#else
#define _m00
#define _m01
#define _m02
#endif