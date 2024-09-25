#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgIo.m_Type", m_type, 0x40, 0x10, true, 0xa91831d24ff4d9f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgIo.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xb9c88b7852dd863e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgIo.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x1253bb2a94bb9753)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxPkgIo.m_Globals", m_globals, 0x80, 0x40, true, 0x5c6fb1d7a4af74d2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgIo.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xf5f8e8824b96bf2f)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgIo.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x2da831d059f43479, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgIo.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xc331bab946ba421, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgIo.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x5b8ac713f6cb01e6, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgIo.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xf255a223f09346e4, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgIo.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xa0cc0072264c7b2f, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgIo.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x6aacf9a2884452df, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgIo.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x3503edd6c195ea8d, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgIo.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x8bf377b2dabce0e6, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgIo.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x54d574080dd16e5f, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxPkgIo.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xa775810a7f9a7eed)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgIo.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x248c4d72b6d2ae7c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgIo.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x2b99f2f4c4d880b9)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPkgIo.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x7ddcc499ce42c8c)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxPkgIo.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x6d766fdfd586b664)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgIo.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x42e7192a2415d595)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPkgIo.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x9c72f898086fddba)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxPkgIo.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x554e216f7bbdc33a)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxPkgIo.m_Device", m_device, 0x300, 0x40, true, 0xe8057d1e53ed421c)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPkgIo.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xb1d723a0c4c273f9)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_t*), "FxPkgIo.m_DefaultQueue", m_default_queue, 0x3c0, 0x40, true, 0xa75efe583dee13b7)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgIo.m_IoQueueListHead", m_io_queue_list_head, 0x400, 0x80, true, 0xee8bf37732d8082a)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<class fx::io_queue_t*, 28>), "FxPkgIo.m_DispatchTable", m_dispatch_table, 0x480, 0x0, true, 0x94560ce04e233fae)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgIo.m_RandomSeed", m_random_seed, 0xb80, 0x20, true, 0xd6b626c122abbbe3)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgIo.m_Filter", m_filter, 0xba0, 0x8, true, 0xd76cdb8e9c655e9d)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgIo.m_PowerStateOn", m_power_state_on, 0xba8, 0x8, true, 0xe979fac63185bbfd)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgIo.m_QueuesAreShuttingDown", m_queues_are_shutting_down, 0xbb0, 0x8, true, 0x38461d12dbd4631a)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgIo.m_DynamicDispatchInfoListHead", m_dynamic_dispatch_info_list_head, 0xbc0, 0x80, true, 0xfea86bc3de705cac)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_in_caller_context_t), "FxPkgIo.m_InCallerContextCallback", m_in_caller_context_callback, 0xc40, 0x40, true, 0x6c5274f543a61886)
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
#endif