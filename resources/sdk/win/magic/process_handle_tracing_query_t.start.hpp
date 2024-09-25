#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PROCESS_HANDLE_TRACING_QUERY.Handle", handle, 0x0, 0x40, true, 0x13fe4fc63e2881c9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_HANDLE_TRACING_QUERY.TotalTraces", total_traces, 0x40, 0x20, true, 0x9261657926616b82)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::process_handle_tracing_entry_t, 1>), "_PROCESS_HANDLE_TRACING_QUERY.HandleTrace", handle_trace, 0x80, 0x0, true, 0x8c3481b68edc0eec)
#else
#define _m00
#define _m01
#define _m02
#endif