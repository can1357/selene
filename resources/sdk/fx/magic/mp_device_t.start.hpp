#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMpDevice.m_Type", m_type, 0x40, 0x10, true, 0x4406badb1aa73c75)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMpDevice.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x3072d124079c1cdf)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxMpDevice.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xd82944a9d41fef4d)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxMpDevice.m_Globals", m_globals, 0x80, 0x40, true, 0xbe2161235e2a4543)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMpDevice.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xa25a7f672a3f0dad)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxMpDevice.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x3499fb07e0676df4)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMpDevice.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xe7cfa61e91287011)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMpDevice.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x52ce37518d3753ba)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxMpDevice.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x456db2ab9d9b1f60)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxMpDevice.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xbbc08ca830c016e0)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMpDevice.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xef485294cd5c9774)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxMpDevice.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xd540f425855130ca)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxMpDevice.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xb27900c4633094cf)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxMpDevice.m_Device", m_device, 0x300, 0x40, true, 0x64f96385c5a07655)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxMpDevice.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x61af8c6ddc88fbb4)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dispose_list_t*), "FxMpDevice.m_DisposeList", m_dispose_list, 0x400, 0x40, true, 0x2a2f36f7d74880e5)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_t*), "FxMpDevice.m_Driver", m_driver, 0x440, 0x40, true, 0x671eb2e46853e5d6)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::device_object_t), "FxMpDevice.m_DeviceObject", m_device_object, 0x480, 0x40, true, 0xb4830b891cbe16db)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::device_object_t), "FxMpDevice.m_AttachedDevice", m_attached_device, 0x4c0, 0x40, true, 0xdcc1a9eff450131a)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::device_object_t), "FxMpDevice.m_PhysicalDevice", m_physical_device, 0x500, 0x40, true, 0xc586b8382301aafd)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxMpDevice.m_CallbackLockPtr", m_callback_lock_ptr, 0x540, 0x40, true, 0x5a978e0a468755cd)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxMpDevice.m_CallbackLockObjectPtr", m_callback_lock_object_ptr, 0x580, 0x40, true, 0xf6fed3ed0f6bb7e7)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "FxMpDevice.m_ExecutionLevel", m_execution_level, 0x5c0, 0x20, true, 0x795a650d326f4dd9)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "FxMpDevice.m_SynchronizationScope", m_synchronization_scope, 0x5e0, 0x20, true, 0x1f951df9d2761c0d)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxMpDevice.m_DmaPacketTransactionStatus", m_dma_packet_transaction_status, 0x600, 0x20, true, 0x6c14f82710fbd635)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_target_t*), "FxMpDevice.m_DefaultTarget", m_default_target, 0x640, 0x40, true, 0x2d56c12613d370cb)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMpDevice.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x9fe41d6213ee3de2, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMpDevice.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xa3a6368630f5987c, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMpDevice.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xbc0c16cee6e9b568, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMpDevice.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x314c7f7e7dee137d, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMpDevice.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x44fc79286dfd63c3, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMpDevice.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xb33ae1ad61c8358c, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMpDevice.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xc7af89b4624a6582, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMpDevice.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x80fee8c11ddf6c25, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMpDevice.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xf5be01afd04ce343, 1, uint16_t)
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