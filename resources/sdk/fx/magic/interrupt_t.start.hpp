#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<class mx::lock_t, uint64_t*>), "FxInterrupt.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x881d788df1f7af86)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxInterrupt.m_Type", m_type, 0x40, 0x10, true, 0xf01df00a0f8fe634)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxInterrupt.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xd10744884af23d26)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxInterrupt.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xff7d4616e0c289dd)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxInterrupt.m_Globals", m_globals, 0x80, 0x40, true, 0x4cf3aa1dab8976d8)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxInterrupt.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x9f7a995f286281e8)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxInterrupt.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xf8d2ebb5a137a2cc)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxInterrupt.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x983ec55c7fa94e53)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxInterrupt.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xaa0268f284113115)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxInterrupt.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xf92e25286e02781f)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxInterrupt.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xf42c75f4fe080ffa)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxInterrupt.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xb9fc0a9d6177f31b)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxInterrupt.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xd71ab960a8a2569e)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxInterrupt.m_Device", m_device, 0x300, 0x40, true, 0xc3d9157a051a928a)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxInterrupt.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xf548da1de55129db)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "FxInterrupt.m_ShareVector", m_share_vector, 0x3c0, 0x20, true, 0x2462280b4f669972)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t*), "FxInterrupt.m_Interrupt", m_interrupt, 0x400, 0x40, true, 0x23c265f56c2f78d8)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_OldIrql", m_old_irql, 0x480, 0x8, true, 0xecf6f4bf709fec55)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "FxInterrupt.m_SynchronizeIrql", m_synchronize_irql, 0x488, 0x8, true, 0x3062159bc08d390d)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxInterrupt.m_BuiltInSpinLock", m_built_in_spin_lock, 0x4c0, 0x80, true, 0xdbf7ac50402634da)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_t*), "FxInterrupt.m_WaitLock", m_wait_lock, 0x540, 0x40, true, 0x3a777461e14c3ae6)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "FxInterrupt.m_Dpc", m_dpc, 0x580, 0x0, true, 0xd696a7f33766ad5c)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::system_work_item_t*), "FxInterrupt.m_SystemWorkItem", m_system_work_item, 0x780, 0x40, true, 0x8f7580956333cfd4)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxInterrupt.m_CallbackLock", m_callback_lock, 0x7c0, 0x40, true, 0x9ca6eec45f9e6aeb)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_DisposeWaitLock", m_dispose_wait_lock, 0x800, 0x8, true, 0x93ff04fc1e16416b)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_UseSoftDisconnect", m_use_soft_disconnect, 0x808, 0x8, true, 0xdf405fcc08797835)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_PassiveHandling", m_passive_handling, 0x810, 0x8, true, 0x97d9338ef8b1cf07)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_AddedToList", m_added_to_list, 0x818, 0x8, true, 0xdd7eadc6f57db187)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_Connected", m_connected, 0x820, 0x8, true, 0x4377e1b8ced3d9ec)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_ForceDisconnected", m_force_disconnected, 0x828, 0x8, true, 0x374eb248402e4a85)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_Enabled", m_enabled, 0x830, 0x8, true, 0x645d2fa9d2f916ae)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_FloatingSave", m_floating_save, 0x838, 0x8, true, 0xfe4e44e5bf122bc7)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_CreatedInPrepareHardware", m_created_in_prepare_hardware, 0x840, 0x8, true, 0xceb20fc3681e8528)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wake_interrupt_machine_t*), "FxInterrupt.m_WakeInterruptMachine", m_wake_interrupt_machine, 0x880, 0x40, true, 0x688499a88bf1f47)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_Active", m_active, 0x8c0, 0x8, true, 0x774f0a99a6d9cdc3)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_SetPolicy", m_set_policy, 0x8c8, 0x8, true, 0x920e9dcc3f897bb2)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_policy_t), "FxInterrupt.m_Policy", m_policy, 0x8e0, 0x20, true, 0xa28665e35e406998)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_priority_t), "FxInterrupt.m_Priority", m_priority, 0x900, 0x20, true, 0x300b73d827dd34)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "FxInterrupt.m_Processors", m_processors, 0x940, 0x80, true, 0xbbc3c318d89a1719)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "FxInterrupt.m_EvtInterruptEnable", m_evt_interrupt_enable, 0x9c0, 0x40, true, 0xa55213cacdae342a)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "FxInterrupt.m_EvtInterruptDisable", m_evt_interrupt_disable, 0xa00, 0x40, true, 0x54e3607c4137634e)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_isr_t ), "FxInterrupt.m_EvtInterruptIsr", m_evt_interrupt_isr, 0xa40, 0x40, true, 0xcffb1a20a5166443)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "FxInterrupt.m_EvtInterruptDpc", m_evt_interrupt_dpc, 0xa80, 0x40, true, 0xcfef1cdd2a5f9e7d)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "FxInterrupt.m_EvtInterruptWorkItem", m_evt_interrupt_work_item, 0xac0, 0x40, true, 0x80d7a22f22841d64)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::interrupt_info_t), "FxInterrupt.m_InterruptInfo", m_interrupt_info, 0xb00, 0x0, true, 0x5cb8cc5c83dd1dc5)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "FxInterrupt.m_CmTranslatedResource", m_cm_translated_resource, 0xd00, 0x40, true, 0xa6abee1e4eff280b)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t*), "FxInterrupt.m_InterruptCaptured", m_interrupt_captured, 0xd40, 0x40, true, 0x20077519675a927)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_Disconnecting", m_disconnecting, 0xd80, 0x8, true, 0xa721cd603cab7044)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxInterrupt.m_IsEdgeTriggeredNonMsiInterrupt", m_is_edge_triggered_non_msi_interrupt, 0xd88, 0x8, true, 0xdd20733b269dd117)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxInterrupt.m_PnpList", m_pnp_list, 0xdc0, 0x80, true, 0xdfa2f9ccdbd41ad5)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxInterrupt.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xa4cb1aead10aff56, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxInterrupt.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xae0a2461566b6622, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxInterrupt.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xd8785fc832d427d6, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxInterrupt.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x40f3d9341cbf43f6, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxInterrupt.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xb7408ec5ddee9b14, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxInterrupt.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x17bf96c11878e1eb, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxInterrupt.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x4063895943de5ba0, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxInterrupt.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xe6e5c9ea5eca0287, 1, uint16_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxInterrupt.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xb1402ca0a26ef4b4, 1, uint16_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
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
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif