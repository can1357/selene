#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_WNF_EVENT_PUBLISH.Header", header, 0x0, 0x0, true, 0x4c90e8bcaa291633)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_WNF_EVENT_PUBLISH.StateName", state_name, 0x100, 0x40, true, 0xf1e810d40c129a6c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WNF_EVENT_PUBLISH.DataLength", data_length, 0x140, 0x20, true, 0xb0e4e20966e0452a)
#else
#define _m00
#define _m01
#define _m02
#endif