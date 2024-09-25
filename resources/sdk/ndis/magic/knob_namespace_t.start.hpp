#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::driver_object_t*), "KnobNamespace.m_driverObject", m_driver_object, 0x0, 0x0, false, 0x94ddca4e1193d716)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::config_knob_namespace_t), "KnobNamespace.m_id", m_id, 0x0, 0x0, false, 0x2dfb5d2ce5d6e1aa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "KnobNamespace.m_globalLinkage", m_global_linkage, 0x0, 0x0, false, 0xc0cdcc82802f1794)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "KnobNamespace.m_collectionList", m_collection_list, 0x0, 0x0, false, 0x60839848541d6e02)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class ndis::k_push_lock_t), "KnobNamespace.m_lock", m_lock, 0x0, 0x0, false, 0xc8c2053dbd17d217)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif