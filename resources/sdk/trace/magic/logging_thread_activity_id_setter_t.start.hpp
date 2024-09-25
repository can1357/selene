#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "TraceLoggingThreadActivityIdSetter.m_ActivityId", m_activity_id, 0x0, 0x80, true, 0x6556b754b302b01f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "TraceLoggingThreadActivityIdSetter.m_SavedActivityId", m_saved_activity_id, 0x80, 0x80, true, 0xe5c9b94b62eefc9d)
#else
#define _m00
#define _m01
#endif