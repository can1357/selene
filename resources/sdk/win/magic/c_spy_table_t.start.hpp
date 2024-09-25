#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSpyTable.m_cAllocations", m_c_allocations, 0x0, 0x20, true, 0x5abb8991002485f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::aentry_t*), "CSpyTable.m_table", m_table, 0x40, 0x40, true, 0x2d0f2410ca492c5b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSpyTable.m_cEntries", m_c_entries, 0x80, 0x20, true, 0xb5a3c054e367f771)
#else
#define _m00
#define _m01
#define _m02
#endif