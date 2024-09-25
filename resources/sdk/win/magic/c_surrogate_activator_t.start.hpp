#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CSurrogateActivator.m_processGuid", m_process_guid, 0x40, 0x80, true, 0x616aa0d7c64bfffb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CSurrogateActivator.m_fServicesConfigured", m_f_services_configured, 0xc0, 0x20, true, 0x3a8915a992e05d3c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSurrogateActivator.m_dwObjectCountAtIdleTime", m_dw_object_count_at_idle_time, 0xe0, 0x20, true, 0x9ae3da4bcce1aa3a)
#else
#define _m00
#define _m01
#define _m02
#endif