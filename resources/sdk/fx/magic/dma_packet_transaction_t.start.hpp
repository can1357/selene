#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaPacketTransaction.m_Type", m_type, 0x40, 0x10, true, 0xb41c20ba64ba68b7)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaPacketTransaction.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xbd491953c912a64c)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDmaPacketTransaction.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x91e5aff806cc89d3)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxDmaPacketTransaction.m_Globals", m_globals, 0x80, 0x40, true, 0x30c39501cec96adc)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaPacketTransaction.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x31d9fae42fbb30ba)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxDmaPacketTransaction.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x16f478861e8e26c3)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaPacketTransaction.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x125518866a511c61)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDmaPacketTransaction.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x9fcdb392b924718f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDmaPacketTransaction.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xc461e69953dd4910)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDmaPacketTransaction.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xec1142fd21981c0c)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDmaPacketTransaction.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x4bd4f888d435a54c)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDmaPacketTransaction.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x61c3291765f96b33)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxDmaPacketTransaction.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x3f0b0a173cba5077)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDmaPacketTransaction.m_Device", m_device, 0x300, 0x40, true, 0xcb270c9a5d4eb9d2)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDmaPacketTransaction.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x8524c5cfdc5c4048)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::dma_transaction_state_t), "FxDmaPacketTransaction.m_State", m_state, 0x3c0, 0x20, true, 0x69dd000a86dac611)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::dma_direction_t), "FxDmaPacketTransaction.m_DmaDirection", m_dma_direction, 0x3e0, 0x20, true, 0x2347c91e5239e691)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dma_enabler_t*), "FxDmaPacketTransaction.m_DmaEnabler", m_dma_enabler, 0x400, 0x40, true, 0x4bca486e7e77ab1b)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::dma_description_t*), "FxDmaPacketTransaction.m_AdapterInfo", m_adapter_info, 0x440, 0x40, true, 0x2e3ba2b870e6dc14)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_t*), "FxDmaPacketTransaction.m_EncodedRequest", m_encoded_request, 0x480, 0x40, true, 0x502d534a0d356838)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dma_transaction_program_or_reserve_dma_t), "FxDmaPacketTransaction.m_DmaAcquiredFunction", m_dma_acquired_function, 0x4c0, 0x40, true, 0xe728a8ab4cc1ccfd)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaPacketTransaction.m_DmaAcquiredContext", m_dma_acquired_context, 0x500, 0x40, true, 0x98d020acac5a6fae)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaPacketTransaction.m_TransferContext", m_transfer_context, 0x540, 0x40, true, 0x8ec8becfd4b92b4a)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxDmaPacketTransaction.m_StartMdl", m_start_mdl, 0x580, 0x40, true, 0x46a8311e9b8d37d7)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxDmaPacketTransaction.m_CurrentFragmentMdl", m_current_fragment_mdl, 0x5c0, 0x40, true, 0x664896cb2e08ad83)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaPacketTransaction.m_StartOffset", m_start_offset, 0x600, 0x40, true, 0x6b0f4b2bc7505e97)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaPacketTransaction.m_CurrentFragmentOffset", m_current_fragment_offset, 0x640, 0x40, true, 0x56d7d1fefd031afd)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaPacketTransaction.m_MaxFragmentLength", m_max_fragment_length, 0x680, 0x40, true, 0x5ec9146b81c69de)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaPacketTransaction.m_TransactionLength", m_transaction_length, 0x6c0, 0x40, true, 0x4a7de9382eae6a04)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaPacketTransaction.m_Remaining", m_remaining, 0x700, 0x40, true, 0x25565f898ae4dfef)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaPacketTransaction.m_Transferred", m_transferred, 0x740, 0x40, true, 0x2b621bfc70f87d1c)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaPacketTransaction.m_CurrentFragmentLength", m_current_fragment_length, 0x780, 0x40, true, 0x34ca1227a23e6db9)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaPacketTransaction.m_RequireSingleTransfer", m_require_single_transfer, 0x7c0, 0x8, true, 0xa7db71942c0bf1b0)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaPacketTransaction.m_Flags", m_flags, 0x7e0, 0x20, true, 0x75372d08a50725fd)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaPacketTransaction.m_MapRegistersNeeded", m_map_registers_needed, 0x800, 0x20, true, 0x5472e18de37e2989)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaPacketTransaction.m_MapRegisterBase", m_map_register_base, 0x840, 0x40, true, 0x4128e960cbb605f7)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaPacketTransaction.m_MapRegisterBaseSet", m_map_register_base_set, 0x880, 0x8, true, 0xee348259b529d6ff)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaPacketTransaction.m_DeviceAddressOffset", m_device_address_offset, 0x8a0, 0x20, true, 0x88c7ee957f095c87)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaPacketTransaction.m_MapRegistersReserved", m_map_registers_reserved, 0x8c0, 0x20, true, 0xc2bf32f407bb979d)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaPacketTransaction.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xe13c89b69802462a, 1, uint16_t)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_m_transfer_state_t), "FxDmaPacketTransaction.m_TransferState", m_transfer_state, 0x900, 0x80, true, 0x88a0be50eb0b4b44)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaPacketTransaction.m_IsCancelled", m_is_cancelled, 0x980, 0x20, true, 0x99f4031f250533e6)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaPacketTransaction.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xd0b33b27639ca9f0, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaPacketTransaction.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xd9eefff633f6b8ae, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaPacketTransaction.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x53faf11793c1846a, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaPacketTransaction.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x1d4b31b0ebbc205a, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaPacketTransaction.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x9893e8a15279781a, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaPacketTransaction.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x4af39a0f9fd2715f, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaPacketTransaction.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xd9fa1980262db30c, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaPacketTransaction.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x8d1fb39dad89f1a3, 1, uint16_t)
#define _m48 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxDmaPacketTransaction.m_TransferState.CurrentStagingThread", current_staging_thread, 0x0, 0x40, true, 0xdf458be8284ddef1)
#define _m49 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaPacketTransaction.m_TransferState.RerunStaging", rerun_staging, 0x40, 0x8, true, 0x80ecfff978950435)
#define _m50 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaPacketTransaction.m_TransferState.RerunCompletion", rerun_completion, 0x48, 0x8, true, 0xbc512f4a76fffad3)
#define _m51 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dma::completion_status_t), "FxDmaPacketTransaction.m_TransferState.CompletionStatus", completion_status, 0x60, 0x20, true, 0x8d128fc1243290be)
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