#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgGeneral.m_Type", m_type, 0x40, 0x10, true, 0x3b373b4875fce6d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgGeneral.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xf852ad0511cf0be6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgGeneral.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x5839aa9c2ddbb274)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxPkgGeneral.m_Globals", m_globals, 0x80, 0x40, true, 0x4399b70e665d499b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgGeneral.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x7a8fcc70ac990200)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgGeneral.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x3f21239cd8b24acf, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgGeneral.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x5cd5d1f771ac81db, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgGeneral.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xeaf370ef7a6b9e52, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgGeneral.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x47db2d9644b6bb04, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgGeneral.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xedc914aa222676b2, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgGeneral.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x421d578bcc97c1c1, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgGeneral.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xf57fa12ffede550, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgGeneral.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x69b69d15c9a24d0d, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgGeneral.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x717f47116324de71, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxPkgGeneral.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x20f01cb59767a274)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgGeneral.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x96c09eb4f197de8c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgGeneral.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x3dd2b9e760074c67)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPkgGeneral.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xa46cae7ba2ced749)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxPkgGeneral.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xafbcfa2eb6fd8d61)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgGeneral.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x5a043b0d5cdffae0)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPkgGeneral.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x4b939b58fa13947b)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxPkgGeneral.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xb3c83db3f2e4abe0)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxPkgGeneral.m_Device", m_device, 0x300, 0x40, true, 0x88b0639cb6b9bef6)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPkgGeneral.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xd0fa5e57d9f8759a)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgGeneral.m_OpenHandleCount", m_open_handle_count, 0x3c0, 0x20, true, 0x1901dc5ac4e511a9)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgGeneral.m_FileObjectInfoHeadList", m_file_object_info_head_list, 0x400, 0x80, true, 0x894d1b8b938bc685)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_t*), "FxPkgGeneral.m_DefaultQueueForCreates", m_default_queue_for_creates, 0x480, 0x40, true, 0x55caaaef2926f0e8)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_t*), "FxPkgGeneral.m_DriverCreatedQueue", m_driver_created_queue, 0x4c0, 0x40, true, 0xfebeac0693411917)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgGeneral.m_Flags", m_flags, 0x500, 0x20, true, 0x7cc0f3fbee5b145e)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "FxPkgGeneral.m_ExecutionLevel", m_execution_level, 0x520, 0x20, true, 0x586e1e27b5094d0a)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "FxPkgGeneral.m_SynchronizationScope", m_synchronization_scope, 0x540, 0x20, true, 0x52bffe9198512021)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxPkgGeneral.m_CallbackLockPtr", m_callback_lock_ptr, 0x580, 0x40, true, 0xfd977e9daa72ad48)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxPkgGeneral.m_CallbackLockObjectPtr", m_callback_lock_object_ptr, 0x5c0, 0x40, true, 0x5d4ef9f414a2160c)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::shut_down_t), "FxPkgGeneral.m_EvtDeviceShutdown", m_evt_device_shutdown, 0x600, 0x40, true, 0xd43bfd64685e1c2d)
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
#define _m32
#define _m33
#endif