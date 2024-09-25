#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_endpoint_entry_t*), "CEndpointEntry.m_pNext", m_p_next, 0x0, 0x40, true, 0xcbe0cbe25e3a08c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CEndpointEntry.m_wTowerId", m_w_tower_id, 0x40, 0x10, true, 0xb3fa4227933fc5d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CEndpointEntry.m_pszEndpoint", m_psz_endpoint, 0x80, 0x40, true, 0x68b6f5edc741202)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CEndpointEntry.m_pszProtSeq", m_psz_prot_seq, 0xc0, 0x40, true, 0xcc9d2d5faa8b18c8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CEndpointEntry.m_dwFlags", m_dw_flags, 0x100, 0x20, true, 0xf54ae203368a8dd3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CEndpointEntry.m_fProcessed", m_f_processed, 0x120, 0x20, true, 0x5114f19e0284e4fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif