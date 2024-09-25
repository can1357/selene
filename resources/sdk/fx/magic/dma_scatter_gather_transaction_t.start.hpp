#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaScatterGatherTransaction.m_Type", m_type, 0x40, 0x10, true, 0xb6cb339ce0c6f303)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaScatterGatherTransaction.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xb9f506fbf6b7c613)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDmaScatterGatherTransaction.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x6809191c4c2e30d3)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxDmaScatterGatherTransaction.m_Globals", m_globals, 0x80, 0x40, true, 0xb0eb3821d7e0de65)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaScatterGatherTransaction.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xf43daff67117b4a0)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxDmaScatterGatherTransaction.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xdb708cc1c1794536)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaScatterGatherTransaction.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x220f1f5c818a8cf0)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDmaScatterGatherTransaction.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xcd6cf73d2c11c013)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDmaScatterGatherTransaction.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x27a935e5ab7414ea)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDmaScatterGatherTransaction.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x9c1f59b91463badf)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDmaScatterGatherTransaction.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x50718a6ce6e46365)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDmaScatterGatherTransaction.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x527ca211a1db7253)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxDmaScatterGatherTransaction.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xec9319e22eeb423e)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDmaScatterGatherTransaction.m_Device", m_device, 0x300, 0x40, true, 0x227714df2417457e)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDmaScatterGatherTransaction.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x64eab7db12f368f3)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::dma_transaction_state_t), "FxDmaScatterGatherTransaction.m_State", m_state, 0x3c0, 0x20, true, 0x33344e9169e8df8a)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::dma_direction_t), "FxDmaScatterGatherTransaction.m_DmaDirection", m_dma_direction, 0x3e0, 0x20, true, 0x18bb056fca17721a)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dma_enabler_t*), "FxDmaScatterGatherTransaction.m_DmaEnabler", m_dma_enabler, 0x400, 0x40, true, 0x4dbcb3c023e3c538)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::dma_description_t*), "FxDmaScatterGatherTransaction.m_AdapterInfo", m_adapter_info, 0x440, 0x40, true, 0xba1a0d08cb55929c)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_t*), "FxDmaScatterGatherTransaction.m_EncodedRequest", m_encoded_request, 0x480, 0x40, true, 0xc70c1f5c021baca1)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dma_transaction_program_or_reserve_dma_t), "FxDmaScatterGatherTransaction.m_DmaAcquiredFunction", m_dma_acquired_function, 0x4c0, 0x40, true, 0x38c45eb290880184)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaScatterGatherTransaction.m_DmaAcquiredContext", m_dma_acquired_context, 0x500, 0x40, true, 0x4c26d147e641e562)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaScatterGatherTransaction.m_TransferContext", m_transfer_context, 0x540, 0x40, true, 0x8e2d65ffbd464f40)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxDmaScatterGatherTransaction.m_StartMdl", m_start_mdl, 0x580, 0x40, true, 0x9427ebbc3a91ce13)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxDmaScatterGatherTransaction.m_CurrentFragmentMdl", m_current_fragment_mdl, 0x5c0, 0x40, true, 0xe99cb405e0ac9d60)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaScatterGatherTransaction.m_StartOffset", m_start_offset, 0x600, 0x40, true, 0xa68feee05aee5513)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaScatterGatherTransaction.m_CurrentFragmentOffset", m_current_fragment_offset, 0x640, 0x40, true, 0xe2e66e4202fd3814)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaScatterGatherTransaction.m_MaxFragmentLength", m_max_fragment_length, 0x680, 0x40, true, 0xdb5b2ee67c6f1ec)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaScatterGatherTransaction.m_TransactionLength", m_transaction_length, 0x6c0, 0x40, true, 0x2596cba7dea3760b)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaScatterGatherTransaction.m_Remaining", m_remaining, 0x700, 0x40, true, 0xb4e642072267db49)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaScatterGatherTransaction.m_Transferred", m_transferred, 0x740, 0x40, true, 0x7dceab3e466b57df)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaScatterGatherTransaction.m_CurrentFragmentLength", m_current_fragment_length, 0x780, 0x40, true, 0x339b96dc660bca7c)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaScatterGatherTransaction.m_RequireSingleTransfer", m_require_single_transfer, 0x7c0, 0x8, true, 0xfccd3cc19a799ff2)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaScatterGatherTransaction.m_Flags", m_flags, 0x7e0, 0x20, true, 0xc72ac7f1176b8867)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::scatter_gather_list_t*), "FxDmaScatterGatherTransaction.m_SGList", m_sg_list, 0x800, 0x40, true, 0x1f0897d4d7de15d1)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaScatterGatherTransaction.m_SGListBuffer", m_sg_list_buffer, 0x840, 0x40, true, 0xb0905bcfbe009890)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaScatterGatherTransaction.m_SgListBufferSize", m_sg_list_buffer_size, 0x880, 0x20, true, 0x50a8ce10e7f10bbe)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaScatterGatherTransaction.m_IsBufferFromLookaside", m_is_buffer_from_lookaside, 0x8a0, 0x8, true, 0x77de8d34b3afacba)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaScatterGatherTransaction.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xc568f0b83e566f3b, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaScatterGatherTransaction.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x79f5687c35e48fa1, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaScatterGatherTransaction.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xe510ca9dca56cd6d, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaScatterGatherTransaction.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x8764dc521424341a, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaScatterGatherTransaction.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x2d5b11ae12b47ae8, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaScatterGatherTransaction.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x6ee355dfa0f516c3, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaScatterGatherTransaction.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xcf0f4a18950bafd1, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaScatterGatherTransaction.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x5ebb741a8dbd70a9, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaScatterGatherTransaction.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x8314bbebc28362f4, 1, uint16_t)
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
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
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