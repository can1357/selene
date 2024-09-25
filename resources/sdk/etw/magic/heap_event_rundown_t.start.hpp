#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_HEAP_EVENT_RUNDOWN.Header", header, 0x0, 0x0, true, 0x1497f0dd71c48d98)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_HEAP_EVENT_RUNDOWN.HeapHandle", heap_handle, 0x100, 0x40, true, 0xb356cb83b7ea23ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_RUNDOWN.Flags", flags, 0x140, 0x20, true, 0xb9ca15d4fac61e3d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_RUNDOWN.ProcessId", process_id, 0x160, 0x20, true, 0xc5ece2281b190035)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_HEAP_EVENT_RUNDOWN.RangeCount", range_count, 0x180, 0x20, true, 0x5cc12e1c7146f093)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct etw::heap_event_rundown_range_t, 1>), "_ETW_HEAP_EVENT_RUNDOWN.Ranges", ranges, 0x1c0, 0x80, true, 0x4067f0457a6d9fa5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif