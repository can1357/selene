#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_EVENT_LOG_ENTRY.EventId", event_id, 0x0, 0x10, true, 0x758280c2071b47b7)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint15_t), "_NDIS_EVENT_LOG_ENTRY.Timestamp", timestamp, 0x10, 0xf, true, 0x713d58ae4907c25d, 15, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NDIS_EVENT_LOG_ENTRY.TimestampScale", timestamp_scale, 0x1f, 0x1, true, 0xddac3eec6bb225e7, 1, uint16_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_EVENT_LOG_ENTRY.TimestampValue", timestamp_value, 0x10, 0x10, true, 0x512fb875dcf4762a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_EVENT_LOG_ENTRY.StackTrace", stack_trace, 0x20, 0x20, true, 0x90281efc72c46e17)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_EVENT_LOG_ENTRY.Context", context, 0x40, 0x40, true, 0x9648686f2396cf2e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif