#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaSystemTransaction.m_Type", m_type, 0x40, 0x10, true, 0x5aaa91cf4d27e3b4)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaSystemTransaction.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x317cf976c56e0845)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDmaSystemTransaction.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xbf386014c4688202)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxDmaSystemTransaction.m_Globals", m_globals, 0x80, 0x40, true, 0x31affea43cbff5fd)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaSystemTransaction.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x916801d0cb7aac6b)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxDmaSystemTransaction.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x5856a75fa8a476eb)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaSystemTransaction.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xda8aa575fcf69816)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDmaSystemTransaction.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xc5ed0f2b9677177f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDmaSystemTransaction.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x17b9de14026fc889)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDmaSystemTransaction.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xa5b48ac013c87e54)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDmaSystemTransaction.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x48a6529b41fb4cc5)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDmaSystemTransaction.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xa00ad5c23fcfcdad)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxDmaSystemTransaction.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x80408a7eda6dc695)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDmaSystemTransaction.m_Device", m_device, 0x300, 0x40, true, 0xf39959afc9683a16)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDmaSystemTransaction.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x99dd567d58d47500)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::dma_transaction_state_t), "FxDmaSystemTransaction.m_State", m_state, 0x3c0, 0x20, true, 0x99841ea525811970)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::dma_direction_t), "FxDmaSystemTransaction.m_DmaDirection", m_dma_direction, 0x3e0, 0x20, true, 0x68f2d918fb1a46f2)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dma_enabler_t*), "FxDmaSystemTransaction.m_DmaEnabler", m_dma_enabler, 0x400, 0x40, true, 0x2faa529bbe809fac)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::dma_description_t*), "FxDmaSystemTransaction.m_AdapterInfo", m_adapter_info, 0x440, 0x40, true, 0x1f0705dda00c9c13)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_t*), "FxDmaSystemTransaction.m_EncodedRequest", m_encoded_request, 0x480, 0x40, true, 0xb8faa627b0f2fb7a)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dma_transaction_program_or_reserve_dma_t), "FxDmaSystemTransaction.m_DmaAcquiredFunction", m_dma_acquired_function, 0x4c0, 0x40, true, 0xd5ef0e449d96d9e8)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaSystemTransaction.m_DmaAcquiredContext", m_dma_acquired_context, 0x500, 0x40, true, 0xfe631c2f113c8df)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaSystemTransaction.m_TransferContext", m_transfer_context, 0x540, 0x40, true, 0x8453e7862b9defe3)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxDmaSystemTransaction.m_StartMdl", m_start_mdl, 0x580, 0x40, true, 0x25a89a5f7a9a40e4)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxDmaSystemTransaction.m_CurrentFragmentMdl", m_current_fragment_mdl, 0x5c0, 0x40, true, 0x6ebc2d72a0f5b51e)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaSystemTransaction.m_StartOffset", m_start_offset, 0x600, 0x40, true, 0xf4d404ebb796aa0)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaSystemTransaction.m_CurrentFragmentOffset", m_current_fragment_offset, 0x640, 0x40, true, 0x24e10a52f97fdf0f)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaSystemTransaction.m_MaxFragmentLength", m_max_fragment_length, 0x680, 0x40, true, 0xc86b920e0857a5e0)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaSystemTransaction.m_TransactionLength", m_transaction_length, 0x6c0, 0x40, true, 0x4dcde6e86d08c6c7)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaSystemTransaction.m_Remaining", m_remaining, 0x700, 0x40, true, 0x2b303a4aefc762ff)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaSystemTransaction.m_Transferred", m_transferred, 0x740, 0x40, true, 0xb4959cef29a1959f)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaSystemTransaction.m_CurrentFragmentLength", m_current_fragment_length, 0x780, 0x40, true, 0x7becfa9a87d344bd)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaSystemTransaction.m_RequireSingleTransfer", m_require_single_transfer, 0x7c0, 0x8, true, 0xc1c77c9248e9f1a3)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaSystemTransaction.m_Flags", m_flags, 0x7e0, 0x20, true, 0xdc722ff4dfdd33a5)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaSystemTransaction.m_MapRegistersNeeded", m_map_registers_needed, 0x800, 0x20, true, 0x99f0ff9aebef3976)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaSystemTransaction.m_MapRegisterBase", m_map_register_base, 0x840, 0x40, true, 0x109335d94b3c03a4)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaSystemTransaction.m_MapRegisterBaseSet", m_map_register_base_set, 0x880, 0x8, true, 0x58664b532bf1a7ea)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaSystemTransaction.m_DeviceAddressOffset", m_device_address_offset, 0x8a0, 0x20, true, 0x4ebe5ee0a4f4d6e)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaSystemTransaction.m_MapRegistersReserved", m_map_registers_reserved, 0x8c0, 0x20, true, 0x2001d37db9bcdbd0)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaSystemTransaction.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xe07fc53f24ad6330, 1, uint16_t)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_m_transfer_state_t), "FxDmaSystemTransaction.m_TransferState", m_transfer_state, 0x900, 0x80, true, 0x2397b7e5fa35b674)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaSystemTransaction.m_IsCancelled", m_is_cancelled, 0x980, 0x20, true, 0x1a40c3614b980c21)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dma_transaction_configure_channel_t), "FxDmaSystemTransaction.m_ConfigureChannelFunction", m_configure_channel_function, 0x9c0, 0x40, true, 0xbc1ace1c72d42ad7)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaSystemTransaction.m_ConfigureChannelContext", m_configure_channel_context, 0xa00, 0x40, true, 0xc506f4ba70a1a180)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dma_transaction_transfer_complete_t), "FxDmaSystemTransaction.m_TransferCompleteFunction", m_transfer_complete_function, 0xa40, 0x40, true, 0x826e450e200dd0c5)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaSystemTransaction.m_TransferCompleteContext", m_transfer_complete_context, 0xa80, 0x40, true, 0x717d6562a3a3584f)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaSystemTransaction.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xa19564aaff1d0d1, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaSystemTransaction.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x852fde7da022082e, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaSystemTransaction.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xd553ec87f44c818d, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaSystemTransaction.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x47cdd3739d5d5cbb, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaSystemTransaction.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xe76869c69c6156f0, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaSystemTransaction.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xa4f1b3cf642f8e5, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaSystemTransaction.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x20a575f17efeb93f, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaSystemTransaction.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x1fe25a88214d4bf4, 1, uint16_t)
#define _m48 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxDmaSystemTransaction.m_TransferState.CurrentStagingThread", current_staging_thread, 0x0, 0x40, true, 0x3e5091d27515e52a)
#define _m49 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaSystemTransaction.m_TransferState.RerunStaging", rerun_staging, 0x40, 0x8, true, 0x1a802de739cabd0a)
#define _m50 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaSystemTransaction.m_TransferState.RerunCompletion", rerun_completion, 0x48, 0x8, true, 0x685e9b5943aecf83)
#define _m51 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dma::completion_status_t), "FxDmaSystemTransaction.m_TransferState.CompletionStatus", completion_status, 0x60, 0x20, true, 0xd03cd2f3b86af918)
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
#define _m047
#define _m05
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m48
#define _m49
#define _m50
#define _m51
#endif