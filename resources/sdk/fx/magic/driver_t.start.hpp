#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDriver.m_Type", m_type, 0x40, 0x10, true, 0xd0daa30e76ec796d)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDriver.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x2b9864fa46aea8aa)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDriver.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x28fbb5b0fc1f9a01)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxDriver.m_Globals", m_globals, 0x80, 0x40, true, 0x5329961da744d31)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDriver.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x1c9a0e19bbee22f5)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxDriver.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xdbcc9cce26cf1d86)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDriver.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xe8ed9cb35c01539f)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDriver.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x729adef17398ac9)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDriver.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x4766507954e3d4d7)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDriver.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x8378b0f27f6aad4c)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDriver.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x863175845043ea14)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDriver.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xc459bd74ada87f9)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxDriver.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xc58502a2dc619c3f)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDriver.m_Device", m_device, 0x300, 0x40, true, 0xf223af97d4607ea1)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDriver.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x5ec5ebba9e33b0cd)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::driver_object_t), "FxDriver.m_DriverObject", m_driver_object, 0x400, 0x40, true, 0xa16297d1f58cb5e1)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "FxDriver.m_RegistryPath", m_registry_path, 0x440, 0x80, true, 0x828df22ebfbef7ad)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDriver.m_DebuggerConnected", m_debugger_connected, 0x4c0, 0x8, true, 0xc8ae274b8150274d)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_device_add_t), "FxDriver.m_DriverDeviceAdd", m_driver_device_add, 0x500, 0x80, true, 0x55efc018f576857c)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "FxDriver.m_ExecutionLevel", m_execution_level, 0x580, 0x20, true, 0x37c667d41c362158)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "FxDriver.m_SynchronizationScope", m_synchronization_scope, 0x5a0, 0x20, true, 0xbc1881398101277)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_mutex_lock_t), "FxDriver.m_CallbackMutexLock", m_callback_mutex_lock, 0x5c0, 0x80, true, 0xaff7afacbc98c4a7)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxDriver.m_CallbackLockPtr", m_callback_lock_ptr, 0x940, 0x40, true, 0x405d0fd21704838a)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDriver.m_CallbackLockObjectPtr", m_callback_lock_object_ptr, 0x980, 0x40, true, 0xfeb2596e3e17ac32)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::driver_config_t), "FxDriver.m_Config", m_config, 0x9c0, 0x0, true, 0x6c2f6666b0fa06c7)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dispose_list_t*), "FxDriver.m_DisposeList", m_dispose_list, 0xac0, 0x40, true, 0x2d71e3a6c337709c)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_unload_t), "FxDriver.m_DriverUnload", m_driver_unload, 0xb00, 0x40, true, 0x53c2001e56706936)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "FxDriver.m_ServiceName", m_service_name, 0x0, 0x0, false, 0xce27a4076b80c323)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDriver.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x3825396e256a004a, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDriver.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xb99b403a10051662, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDriver.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x2ca20fd89158aa2b, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDriver.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x7591198de60c19e6, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDriver.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xace17d4b2a9441fd, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDriver.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x78f872f57c99317e, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDriver.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x1a5d0cb82ecbbc06, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDriver.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xfe5cc90836698112, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDriver.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x817c09d357e321dc, 1, uint16_t)
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