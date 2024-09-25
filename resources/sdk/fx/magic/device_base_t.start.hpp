#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDeviceBase.m_Type", m_type, 0x40, 0x10, true, 0x2c2c76c4ff3ea9b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDeviceBase.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xc8ff80adf24ddeee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDeviceBase.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x1c5150822c6d41d0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxDeviceBase.m_Globals", m_globals, 0x80, 0x40, true, 0xb8a12fa037ef10c7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDeviceBase.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x9ce0507d83262d16)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDeviceBase.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x6add9a149b95009b, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDeviceBase.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x50773a6307ca4c47, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDeviceBase.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x586169b045338cc7, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDeviceBase.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x90754366d60ffd5e, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDeviceBase.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x1f8d994b955bd45c, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDeviceBase.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xa43cdd5e962f502f, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDeviceBase.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xb05717cfeb8d37b2, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDeviceBase.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xe3a06ae148e681bc, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDeviceBase.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x9c3701ddfe4d2ca3, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxDeviceBase.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xc0d855ae3aa5a740)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDeviceBase.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x77a8064ecabf38ab)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDeviceBase.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x2715081a4f91646b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDeviceBase.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x3b289fd4fe6e8fe1)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDeviceBase.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xab2d21e18c1fca67)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDeviceBase.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x2070bd2715cfd873)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDeviceBase.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x2e7478ca7cbbe3b1)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxDeviceBase.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x87ab55c3521fc10d)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDeviceBase.m_Device", m_device, 0x300, 0x40, true, 0x954ea20d1e62db73)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDeviceBase.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xb8e7d97fc88b4ce8)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dispose_list_t*), "FxDeviceBase.m_DisposeList", m_dispose_list, 0x400, 0x40, true, 0xf17fa6d19b5f3e41)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_t*), "FxDeviceBase.m_Driver", m_driver, 0x440, 0x40, true, 0x52085d47c2ec5a5)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::device_object_t), "FxDeviceBase.m_DeviceObject", m_device_object, 0x480, 0x40, true, 0xdda0ef9dc5be0453)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::device_object_t), "FxDeviceBase.m_AttachedDevice", m_attached_device, 0x4c0, 0x40, true, 0x79790db9fe602a53)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::device_object_t), "FxDeviceBase.m_PhysicalDevice", m_physical_device, 0x500, 0x40, true, 0xe320d4807662b1bb)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxDeviceBase.m_CallbackLockPtr", m_callback_lock_ptr, 0x540, 0x40, true, 0xa6a92ede93a2cb3)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDeviceBase.m_CallbackLockObjectPtr", m_callback_lock_object_ptr, 0x580, 0x40, true, 0xde0bf9d3bb07fc4f)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "FxDeviceBase.m_ExecutionLevel", m_execution_level, 0x5c0, 0x20, true, 0xa33c06a03a869dd9)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "FxDeviceBase.m_SynchronizationScope", m_synchronization_scope, 0x5e0, 0x20, true, 0xddd5333a95d72874)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDeviceBase.m_DmaPacketTransactionStatus", m_dma_packet_transaction_status, 0x600, 0x20, true, 0xfb2dd44c203f8fb9)
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