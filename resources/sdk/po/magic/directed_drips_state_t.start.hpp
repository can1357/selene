#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PO_DIRECTED_DRIPS_STATE.QueueLink", queue_link, 0x0, 0x80, true, 0x777f1cedad0fb3a0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PO_DIRECTED_DRIPS_STATE.VisitedQueueLink", visited_queue_link, 0x80, 0x80, true, 0xda371c12c2f90e90)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_PO_DIRECTED_DRIPS_STATE.Flags", flags, 0x100, 0x20, true, 0xb67177066fccaa0a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_DIRECTED_DRIPS_STATE.CachedFlags", cached_flags, 0x120, 0x20, true, 0x39cd8e71dcd720fa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_DIRECTED_DRIPS_STATE.DeviceUsageCount", device_usage_count, 0x140, 0x20, true, 0xfb505c25441bba2f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PO_DIRECTED_DRIPS_STATE.Diagnostic", diagnostic, 0x180, 0x40, true, 0x56318853c5e3594e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif