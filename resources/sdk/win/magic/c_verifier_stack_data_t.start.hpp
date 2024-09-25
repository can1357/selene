#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "CVerifierStackData.m_listHead", m_list_head, 0x0, 0x80, true, 0xf16fd6f7ffba8db4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CVerifierStackData.m_dwCount", m_dw_count, 0x80, 0x20, true, 0x10fcf40220e194b5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CVerifierStackData.m_dwMissing", m_dw_missing, 0xa0, 0x20, true, 0x559b6c39fd501eb)
#else
#define _m00
#define _m01
#define _m02
#endif