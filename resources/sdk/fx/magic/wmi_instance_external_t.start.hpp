#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiInstanceExternal.m_Type", m_type, 0x40, 0x10, true, 0x6ea3077ae9d930e5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiInstanceExternal.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xaceafc5c38f9db99)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxWmiInstanceExternal.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xf3c7df2d01f66286)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxWmiInstanceExternal.m_Globals", m_globals, 0x80, 0x40, true, 0xcf9c148441bf0161)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiInstanceExternal.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xc03a70ca0d727b23)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceExternal.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x1f8a3dabcc7ded89, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceExternal.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xdc365c3d781b9980, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceExternal.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xea54b62aba0f27e7, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceExternal.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xbca9e34e17a28699, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceExternal.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xa2bb31b71f0d017a, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceExternal.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xfa471cbc73f47d0b, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceExternal.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x23cdd4ec77630fac, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceExternal.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xd34a4e44dee82411, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstanceExternal.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x8bca5d38dd54068c, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxWmiInstanceExternal.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x618b28c555f6205)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiInstanceExternal.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xff5647aca6a89)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiInstanceExternal.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x8333cf35aeb8dc97)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWmiInstanceExternal.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xf24aa4674d1ee247)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxWmiInstanceExternal.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x4eda6303ad520183)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiInstanceExternal.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xcff6a1e93e126ee1)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxWmiInstanceExternal.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x7423dea849e58862)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxWmiInstanceExternal.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x86b40c208f483b99)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxWmiInstanceExternal.m_Device", m_device, 0x300, 0x40, true, 0x136a5a810b2715da)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWmiInstanceExternal.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x906b145a135d4101)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiInstanceExternal.m_ListEntry", m_list_entry, 0x3c0, 0x80, true, 0x33519920ddd8015)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wmi_provider_t*), "FxWmiInstanceExternal.m_Provider", m_provider, 0x440, 0x40, true, 0x9fdf5995504f49bb)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::wmi_instance_query_instance_callback_t), "FxWmiInstanceExternal.m_QueryInstanceCallback", m_query_instance_callback, 0x480, 0x40, true, 0x17d1b984be7027a9)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::wmi_instance_set_instance_callback_t), "FxWmiInstanceExternal.m_SetInstanceCallback", m_set_instance_callback, 0x4c0, 0x40, true, 0x3b9b651f05f06635)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::wmi_instance_set_item_callback_t), "FxWmiInstanceExternal.m_SetItemCallback", m_set_item_callback, 0x500, 0x40, true, 0x75e4156d5a5c056b)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::wmi_instance_execute_method_callback_t), "FxWmiInstanceExternal.m_ExecuteMethodCallback", m_execute_method_callback, 0x540, 0x40, true, 0xa0942a681de8caa7)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxWmiInstanceExternal.m_ContextLength", m_context_length, 0x580, 0x20, true, 0xa8011beacd28550d)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWmiInstanceExternal.m_UseContextForQuery", m_use_context_for_query, 0x5a0, 0x8, true, 0x6bca69da46d4c571)
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
#define _m30
#define _m31
#endif