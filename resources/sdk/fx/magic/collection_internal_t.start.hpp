#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxCollectionInternal.m_Count", m_count, 0x0, 0x20, true, 0xaafb3c72904da578)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCollectionInternal.m_ListHead", m_list_head, 0x40, 0x80, true, 0x78f13a7df3b75061)
#else
#define _m00
#define _m01
#endif