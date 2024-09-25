#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiInstanceInternal.m_Type", m_type, 0x40, 0x10, true, 0x237ed15d9d4d5e90)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiInstanceInternal.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x29dbfb417345c71f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxWmiInstanceInternal.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x1a1c628d400fee2d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxWmiInstanceInternal.m_Globals", m_globals, 0x80, 0x40, true, 0x22c3797fcd66be75)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiInstanceInternal.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x5c40a3c216cb2123)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceInternal.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x54a175a252e51e42, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceInternal.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xb0909673b11d2301, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceInternal.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x53e5f564971551ea, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceInternal.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x6ef6eb6f6be77c29, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceInternal.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x7ec7ab141a7b1044, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceInternal.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x72974dc41721097e, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceInternal.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x77f26bcd8d7cfc41, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceInternal.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x98032603f1bac389, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceInternal.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x4f2d1023a8f47d29, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxWmiInstanceInternal.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x2dab7743a71b0635)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiInstanceInternal.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xecc720f675852d3b)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiInstanceInternal.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x2a0f5d5241c3e338)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWmiInstanceInternal.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xb77b03d6d0f86851)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxWmiInstanceInternal.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x429ea050a38af676)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiInstanceInternal.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xf18d50e72dd3527a)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxWmiInstanceInternal.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x704731c43f5e9565)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxWmiInstanceInternal.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x5d0baaab9a04bed3)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxWmiInstanceInternal.m_Device", m_device, 0x300, 0x40, true, 0xd9e273b3f3db9976)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWmiInstanceInternal.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x48a8c141d5b7d0cc)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiInstanceInternal.m_ListEntry", m_list_entry, 0x3c0, 0x80, true, 0x6eab450bf31f3226)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wmi_provider_t*), "FxWmiInstanceInternal.m_Provider", m_provider, 0x440, 0x40, true, 0x9afd308f39129438)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_fx_wmi_instance_query_instance_t ), "FxWmiInstanceInternal.m_QueryInstance", m_query_instance, 0x480, 0x40, true, 0x4557825c39dabb47)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_fx_wmi_instance_set_instance_t ), "FxWmiInstanceInternal.m_SetInstance", m_set_instance, 0x4c0, 0x40, true, 0x682e4e99fde6c1fd)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_fx_wmi_instance_set_item_t ), "FxWmiInstanceInternal.m_SetItem", m_set_item, 0x500, 0x40, true, 0xc78d0f7b59005d29)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_fx_wmi_instance_execute_method_t ), "FxWmiInstanceInternal.m_ExecuteMethod", m_execute_method, 0x540, 0x40, true, 0xf81104899c16ab82)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#endif