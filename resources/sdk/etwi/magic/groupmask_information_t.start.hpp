#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum etwi::information_class_t), "_EVENT_TRACE_GROUPMASK_INFORMATION.EventTraceInformationClass", event_trace_information_class, 0x0, 0x20, true, 0xc85c1a32e4778cbb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_GROUPMASK_INFORMATION.TraceHandle", trace_handle, 0x40, 0x40, true, 0xd2ce59568fd4aeff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::perfinfo_groupmask_t), "_EVENT_TRACE_GROUPMASK_INFORMATION.EventTraceGroupMasks", event_trace_group_masks, 0x80, 0x0, true, 0x4e9b68cb97643315)
#else
#define _m00
#define _m01
#define _m02
#endif