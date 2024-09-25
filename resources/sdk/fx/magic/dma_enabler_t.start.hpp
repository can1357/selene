#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaEnabler.m_Type", m_type, 0x40, 0x10, true, 0xa7321352c0232a59)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaEnabler.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x53368a24b8ec3826)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDmaEnabler.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xe9c42fc0bb79c76c)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxDmaEnabler.m_Globals", m_globals, 0x80, 0x40, true, 0x463373697f435341)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaEnabler.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x43c5379cec7a820a)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxDmaEnabler.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xecd52e465ec38e9)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaEnabler.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x20d033d00b47c8d0)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDmaEnabler.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xaa2750412896d84e)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDmaEnabler.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xf8624d76189d5f11)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDmaEnabler.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x7c46b3fe5134c627)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDmaEnabler.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xbbbe52a5ff72f8b5)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDmaEnabler.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xa01e70b36bc6e604)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxDmaEnabler.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xe270233be7b5d827)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDmaEnabler.m_Device", m_device, 0x300, 0x40, true, 0xf45c33639610fa0a)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDmaEnabler.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xd2149dd657d40a4b)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::transactioned_entry_t), "FxDmaEnabler.m_TransactionLink", m_transaction_link, 0x3c0, 0x80, true, 0x4632aa1da1f67b61)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxDmaEnabler.m_FDO", m_fdo, 0x540, 0x40, true, 0x7dfcc123d3ce2f57)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxDmaEnabler.m_PDO", m_pdo, 0x580, 0x40, true, 0xaba8e86154802478)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::dma_description_t), "FxDmaEnabler.m_SimplexAdapterInfo", m_simplex_adapter_info, 0x5c0, 0x0, true, 0x73828b950058d604)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct fx::dma_description_t, 2>), "FxDmaEnabler.m_DuplexAdapterInfo", m_duplex_adapter_info, 0x5c0, 0x0, true, 0xbeb1010808b1a5a7)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::dma_profile_t), "FxDmaEnabler.m_Profile", m_profile, 0xbc0, 0x20, true, 0x880fe6534637e641)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_IsAdded", m_is_added, 0xbe0, 0x1, true, 0xd72f1297fbc30f51, 1, uint8_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_IsConfigured", m_is_configured, 0xbe1, 0x1, true, 0x285c75010ded75e, 1, uint8_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_IsBusMaster", m_is_bus_master, 0xbe2, 0x1, true, 0xc1ec83a77a56af3, 1, uint8_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_IsScatterGather", m_is_scatter_gather, 0xbe3, 0x1, true, 0x8583a31848e084a8, 1, uint8_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_IsDuplexTransfer", m_is_duplex_transfer, 0xbe4, 0x1, true, 0x5baedf08f123fc1b, 1, uint8_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_IsSGListAllocated", m_is_sg_list_allocated, 0xbe5, 0x1, true, 0x69406d18ec4392cd, 1, uint8_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_RequireSingleTransfer", m_require_single_transfer, 0xbe6, 0x1, true, 0xf683dd292efae03e, 1, uint8_t)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaEnabler.m_CommonBufferAlignment", m_common_buffer_alignment, 0xc00, 0x20, true, 0xf12238d86e2b26a5)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaEnabler.m_MaximumLength", m_maximum_length, 0xc20, 0x20, true, 0x4587925f6d9ba266)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaEnabler.m_MaxSGElements", m_max_sg_elements, 0xc40, 0x20, true, 0x36528634647050ad)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaEnabler.m_SGListSize", m_sg_list_size, 0xc80, 0x40, true, 0xde7c3b33539f1e8c)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_m_sg_list_t), "FxDmaEnabler.m_SGList", m_sg_list, 0xe00, 0x0, true, 0x85e50a152044a29)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::evt_dma_enabler_fill_callback_t), "FxDmaEnabler.m_EvtDmaEnablerFill", m_evt_dma_enabler_fill, 0x1200, 0x80, true, 0x13be460e50d2193e)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::evt_dma_enabler_flush_callback_t), "FxDmaEnabler.m_EvtDmaEnablerFlush", m_evt_dma_enabler_flush, 0x1280, 0x80, true, 0xb836aacd7ec87aa1)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::evt_dma_enabler_enable_callback_t), "FxDmaEnabler.m_EvtDmaEnablerEnable", m_evt_dma_enabler_enable, 0x1300, 0x80, true, 0x369b192d578e3906)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::evt_dma_enabler_disable_callback_t), "FxDmaEnabler.m_EvtDmaEnablerDisable", m_evt_dma_enabler_disable, 0x1380, 0x80, true, 0xc1cd5f79a2bbd907)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x98fcfd1f4aacbe7b, 1, uint16_t)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::evt_dma_enabler_self_managed_io_start_callback_t), "FxDmaEnabler.m_EvtDmaEnablerSelfManagedIoStart", m_evt_dma_enabler_self_managed_io_start, 0x1400, 0x80, true, 0x5eb06f40bf4f5e17)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::evt_dma_enabler_self_managed_io_stop_callback_t), "FxDmaEnabler.m_EvtDmaEnablerSelfManagedIoStop", m_evt_dma_enabler_self_managed_io_stop, 0x1480, 0x80, true, 0x8a75586f79e44bd5)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaEnabler.m_DmaEnablerFillFailed", m_dma_enabler_fill_failed, 0x1500, 0x8, true, 0x58139ed94353c610)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaEnabler.m_DmaEnablerEnableFailed", m_dma_enabler_enable_failed, 0x1508, 0x8, true, 0x539cf66dbe3cc9ec)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaEnabler.m_DmaEnablerSelfManagedIoStartFailed", m_dma_enabler_self_managed_io_start_failed, 0x1510, 0x8, true, 0x817d96ddbc37bab1)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x71d1eab04bf49b3a, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xc467bceec96e5873, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xbf21d6eb320f8c7a, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x2576e598373ebc3a, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xccbecbb0437eb5c4, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xdf5dd789174f5fa7, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xdff4b7adf645dd0c, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaEnabler.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x18a5e5dc110d8bd5, 1, uint16_t)
#define _m41 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "FxDmaEnabler.m_SGList.ScatterGatherProfile.Lookaside", lookaside, 0x0, 0x0, true, 0xcc3734d06a58d21d)
#define _m42 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_scatter_gather_profile_t), "FxDmaEnabler.m_SGList.ScatterGatherProfile", scatter_gather_profile, 0x0, 0x0, true, 0xdc5cefdfc9aba7bb)
#define _m43 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::scatter_gather_list_t*), "FxDmaEnabler.m_SGList.SystemProfile.List", list, 0x0, 0x40, true, 0x92318d235a118a2e)
#define _m44 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_system_profile_t), "FxDmaEnabler.m_SGList.SystemProfile", system_profile, 0x0, 0x40, true, 0x806d63324a6fa8b3)
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
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m05
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m41
#define _m42
#define _m43
#define _m44
#endif