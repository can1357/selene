#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint64_t, void**)>*), "_ETW_HW_TRACE_EXT_INTERFACE.StartProcessorTraceOnEachCore", start_processor_trace_on_each_core, 0x0, 0x40, true, 0x38070f6e9965fff0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_ETW_HW_TRACE_EXT_INTERFACE.StopProcessorTraceOnEachCore", stop_processor_trace_on_each_core, 0x40, 0x40, true, 0xc9b2bad449075ee4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_ETW_HW_TRACE_EXT_INTERFACE.LogProcessorTraceOnCurrentCore", log_processor_trace_on_current_core, 0x80, 0x40, true, 0xa7edb789bcd58721)
#else
#define _m00
#define _m01
#define _m02
#endif