#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_endpoint_entry_t*), "CEndpointsTable.m_pHead", m_p_head, 0x0, 0x40, true, 0xb8fa123540fa3970)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CEndpointsTable.m_nCount", m_n_count, 0x40, 0x20, true, 0x8dad1b14902d8888)
#else
#define _m00
#define _m01
#endif