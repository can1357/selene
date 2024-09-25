#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_GenericDebugEvent.AssociatedObject", associated_object, 0x0, 0x40, true, 0x531763d76e675557)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "_GenericDebugEvent.Status", status, 0x40, 0x20, true, 0xb413e70c1a7bfa5b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_GenericDebugEvent.AssociatedNumber", associated_number, 0x40, 0x20, true, 0x889e5488f980d3d8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GenericDebugEvent.ThreadId", thread_id, 0x60, 0x20, true, 0x763c767bc2abf3c7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GenericDebugEvent.Sequence", sequence, 0x80, 0x20, true, 0xbb6284a001c9b8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_GenericDebugEvent.SystemTime", system_time, 0xa0, 0x40, true, 0xbdc54a03dbe6a2b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_GenericDebugEvent.TickCount", tick_count, 0x100, 0x40, true, 0xa63762564dbdd19d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::stack_trace_t*), "_GenericDebugEvent.StackTrace", stack_trace, 0x140, 0x40, true, 0xf49cc01e748a6054)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif