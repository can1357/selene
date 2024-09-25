#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_SOFT_RESTART_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0x919663ea6872972e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_SOFT_RESTART_INFORMATION.TraceHandle", trace_handle, 0x40, 0x40, true, 0xaaaf310dfd18f717)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_TRACE_SOFT_RESTART_INFORMATION.PersistTraceBuffers", persist_trace_buffers, 0x80, 0x8, true, 0x3eb8412837900cde)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_EVENT_TRACE_SOFT_RESTART_INFORMATION.FileName", file_name, 0x90, 0x10, true, 0x6ec57958486f92e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif