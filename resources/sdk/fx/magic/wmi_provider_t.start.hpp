#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiProvider.m_Type", m_type, 0x40, 0x10, true, 0x585ba061cf922aec)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiProvider.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x82a8386dd2577049)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxWmiProvider.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x89a2e6363a1a63f1)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxWmiProvider.m_Globals", m_globals, 0x80, 0x40, true, 0x80033cd997a0cfa4)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiProvider.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xdcc6aa31ad709170)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxWmiProvider.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xb4d99bbff1aba5cc)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiProvider.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x2cc06757d6fc508b)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiProvider.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x505afef48ccc5717)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWmiProvider.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xb3bf68e6b90e1cd0)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxWmiProvider.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x8768ef4569072e25)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiProvider.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x990cfeae74256003)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxWmiProvider.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xefd2f3c02122d8f5)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxWmiProvider.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x237e70b343b36bc7)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxWmiProvider.m_Device", m_device, 0x300, 0x40, true, 0xc9c4cb08f9cfe34e)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWmiProvider.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xd330026d6d564311)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiProvider.m_ListEntry", m_list_entry, 0x3c0, 0x80, true, 0xc5cb1a777bf41bf2)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiProvider.m_InstanceListHead", m_instance_list_head, 0x440, 0x80, true, 0x62655e9cfd78141d)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxWmiProvider.m_NumInstances", m_num_instances, 0x4c0, 0x20, true, 0x978d59ef9858511a)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wmi_irp_handler_t*), "FxWmiProvider.m_Parent", m_parent, 0x500, 0x40, true, 0xcc97bf20168c62c2)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "FxWmiProvider.m_Guid", m_guid, 0x540, 0x80, true, 0x217174e4aabc282e)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxWmiProvider.m_TracingHandle", m_tracing_handle, 0x5c0, 0x40, true, 0xe32cdbe133a0fcc6)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxWmiProvider.m_MinInstanceBufferSize", m_min_instance_buffer_size, 0x600, 0x20, true, 0x63b5cf1440941c65)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxWmiProvider.m_Flags", m_flags, 0x620, 0x20, true, 0x83658c55693e1fe0)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_m_flags_by_name_t), "FxWmiProvider.m_FlagsByName", m_flags_by_name, 0x620, 0x20, true, 0xd152e2f6c1ba0fff)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::wmi_provider_function_control_callback_t), "FxWmiProvider.m_FunctionControl", m_function_control, 0x640, 0x40, true, 0x7be9ff15b09d2085)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWmiProvider.m_EventControlEnabled", m_event_control_enabled, 0x680, 0x8, true, 0xd6115e5d39d2b78b)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWmiProvider.m_DataBlockControlEnabled", m_data_block_control_enabled, 0x688, 0x8, true, 0x31b8d947dc2e550)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWmiProvider.m_RemoveGuid", m_remove_guid, 0x690, 0x8, true, 0xfe791f89fc4fc99e)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiProvider.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x27a1f904090a62a5, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiProvider.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xf6fb5cf08c6a39ac, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiProvider.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x2a6f53d9e7c84662, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiProvider.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x62371f5a11f4aecc, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiProvider.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x4a97c2faf4c8421b, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiProvider.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xb0e5996e7ceac555, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiProvider.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x5533a45487f6b65b, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiProvider.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xd3c4da0385cfc64b, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiProvider.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x8afc778ffdf2c79b, 1, uint16_t)
#define _m32 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiProvider.m_FlagsByName.EventOnly", event_only, 0x0, 0x1, true, 0x336cd362e740b3b3, 1, uint32_t)
#define _m33 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiProvider.m_FlagsByName.Expensive", expensive, 0x1, 0x1, true, 0xac565c037a63c631, 1, uint32_t)
#define _m34 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiProvider.m_FlagsByName.Tracing", tracing, 0x2, 0x1, true, 0x227b6c6cbc772346, 1, uint32_t)
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
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m32
#define _m33
#define _m34
#endif