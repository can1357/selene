#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxCollectionEntry.m_Object", m_object, 0x0, 0x40, true, 0x53387071b6d6eacd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCollectionEntry.m_ListEntry", m_list_entry, 0x40, 0x80, true, 0xefe2a5fa189a62f3)
#else
#define _m00
#define _m01
#endif