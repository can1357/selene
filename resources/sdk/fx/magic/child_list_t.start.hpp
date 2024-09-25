#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxChildList.m_Type", m_type, 0x40, 0x10, true, 0xb2a5b9b4766adce6)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxChildList.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x9be3dfc7977745ba)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxChildList.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xa28bb97da1a4b30)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxChildList.m_Globals", m_globals, 0x80, 0x40, true, 0x251670bd8b33acd2)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxChildList.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x6c6d58e3ede6ca2a)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxChildList.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x693d248b206c773c)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxChildList.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x746e85c95bbfb912)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxChildList.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x8dc74d5c0f103bba)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxChildList.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xefa39aa2d6bc80c9)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxChildList.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x125ce61ab2db164c)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxChildList.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xbacae9fde0ffcea)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxChildList.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x1dcd14222c82f916)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxChildList.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xaa1032e79a8c9de7)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxChildList.m_Device", m_device, 0x300, 0x40, true, 0x25b538576a3f0257)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxChildList.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x9a2a9d33cf3e1465)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::transactioned_entry_t), "FxChildList.m_TransactionLink", m_transaction_link, 0x3c0, 0x80, true, 0xe54ef5b275b6deb0)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxChildList.m_TotalDescriptionSize", m_total_description_size, 0x540, 0x40, true, 0x306c50151b0fd028)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxChildList.m_IdentificationDescriptionSize", m_identification_description_size, 0x580, 0x20, true, 0x7f3b8944533e38a5)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxChildList.m_AddressDescriptionSize", m_address_description_size, 0x5a0, 0x20, true, 0xf344fa89b75a4b3)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::child_list_create_device_callback_t), "FxChildList.m_EvtCreateDevice", m_evt_create_device, 0x5c0, 0x40, true, 0xea98a48dc8737aa2)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::child_list_scan_for_children_callback_t), "FxChildList.m_EvtScanForChildren", m_evt_scan_for_children, 0x600, 0x40, true, 0xf7af46d09193d274)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_copy_t ), "FxChildList.m_EvtIdentificationDescriptionCopy", m_evt_identification_description_copy, 0x640, 0x40, true, 0x13ee682cd66acd8a)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_duplicate_t ), "FxChildList.m_EvtIdentificationDescriptionDuplicate", m_evt_identification_description_duplicate, 0x680, 0x40, true, 0x1a1375c6898dcf3c)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_cleanup_t ), "FxChildList.m_EvtIdentificationDescriptionCleanup", m_evt_identification_description_cleanup, 0x6c0, 0x40, true, 0x18939234142b32c1)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "FxChildList.m_EvtIdentificationDescriptionCompare", m_evt_identification_description_compare, 0x700, 0x40, true, 0x145552d4ce65787c)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_copy_t ), "FxChildList.m_EvtAddressDescriptionCopy", m_evt_address_description_copy, 0x740, 0x40, true, 0x3411b38201ebef90)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_duplicate_t ), "FxChildList.m_EvtAddressDescriptionDuplicate", m_evt_address_description_duplicate, 0x780, 0x40, true, 0x5cb23f8e78696634)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_cleanup_t ), "FxChildList.m_EvtAddressDescriptionCleanup", m_evt_address_description_cleanup, 0x7c0, 0x40, true, 0x5b743d6dcfe13a0b)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_device_reenumerated_t ), "FxChildList.m_EvtChildListDeviceReenumerated", m_evt_child_list_device_reenumerated, 0x800, 0x40, true, 0x8ff72240a4ba174a)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxChildList.m_ListLock", m_list_lock, 0x840, 0x40, true, 0x3a96628715ae71c6)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxChildList.m_DescriptionListHead", m_description_list_head, 0x880, 0x80, true, 0x9192b2045a6beb84)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxChildList.m_ModificationListHead", m_modification_list_head, 0x900, 0x80, true, 0x3eacc9e947794a4)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::child_list_state_t), "FxChildList.m_State", m_state, 0x980, 0x20, true, 0x7e09a0eab10a8cb)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxChildList.m_InvalidationNeeded", m_invalidation_needed, 0x9a0, 0x8, true, 0x76b6eea30d310b08)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxChildList.m_StaticList", m_static_list, 0x9a8, 0x8, true, 0x6583068e0a4e5e0d)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxChildList.m_IsAdded", m_is_added, 0x9b0, 0x8, true, 0x8cfaca8ad012c683)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxChildList.m_EnumRetries", m_enum_retries, 0x9b8, 0x8, true, 0xa4ec3a701058b9b)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "FxChildList.m_ScanTag", m_scan_tag, 0x9c0, 0x40, true, 0x9625e4a6487892e7)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxChildList.m_ScanCount", m_scan_count, 0xa00, 0x20, true, 0xd0b90d7b58ce95b7)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t), "FxChildList.m_ScanEvent", m_scan_event, 0xa40, 0x0, true, 0xf6a2a24633b60a64)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxChildList.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xa6d20f7c363566eb, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxChildList.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x23507243de79cf6, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxChildList.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x774cf7e00508c65b, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxChildList.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xf23b882d3e5f0f9d, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxChildList.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x4bcda805a8ece258, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxChildList.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x7bbc2b9ed08773bd, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxChildList.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x434506393a508c50, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxChildList.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x8a595217c034ad40, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxChildList.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xcec105dfa937604d, 1, uint16_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif