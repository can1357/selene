#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaTransactionBase.m_Type", m_type, 0x40, 0x10, true, 0xe32285a0c7914b82)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaTransactionBase.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x528f41accc4c9499)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDmaTransactionBase.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x890629fded65e39e)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxDmaTransactionBase.m_Globals", m_globals, 0x80, 0x40, true, 0x3fa519014e1b038d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaTransactionBase.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x7e6394f202b97bcf)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxDmaTransactionBase.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xd2b256a1b1bc2eb3)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDmaTransactionBase.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x3640bf391b52814d)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDmaTransactionBase.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x56a47e4320c924b3)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDmaTransactionBase.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x4fc0a42a193e36e1)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDmaTransactionBase.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x4d07d5457e146ec1)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDmaTransactionBase.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x18f4ebab66c22b37)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDmaTransactionBase.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xc400aaea27dda4f5)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxDmaTransactionBase.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xe2566558c1680ebb)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDmaTransactionBase.m_Device", m_device, 0x300, 0x40, true, 0x94ac1f966c833396)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDmaTransactionBase.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xc9f121f6e7b16b87)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::dma_transaction_state_t), "FxDmaTransactionBase.m_State", m_state, 0x3c0, 0x20, true, 0x99ba146ccae9bb78)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::dma_direction_t), "FxDmaTransactionBase.m_DmaDirection", m_dma_direction, 0x3e0, 0x20, true, 0x4ccc7330ddac25ee)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dma_enabler_t*), "FxDmaTransactionBase.m_DmaEnabler", m_dma_enabler, 0x400, 0x40, true, 0x59b2b53c5ca145b8)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::dma_description_t*), "FxDmaTransactionBase.m_AdapterInfo", m_adapter_info, 0x440, 0x40, true, 0xfeda84d0dd7ccba3)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_t*), "FxDmaTransactionBase.m_EncodedRequest", m_encoded_request, 0x480, 0x40, true, 0xb10724f476a5cdb1)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dma_transaction_program_or_reserve_dma_t), "FxDmaTransactionBase.m_DmaAcquiredFunction", m_dma_acquired_function, 0x4c0, 0x40, true, 0xec833a53fec2e791)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaTransactionBase.m_DmaAcquiredContext", m_dma_acquired_context, 0x500, 0x40, true, 0x913135b2c41af618)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxDmaTransactionBase.m_TransferContext", m_transfer_context, 0x540, 0x40, true, 0x798b9b3970697d9d)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxDmaTransactionBase.m_StartMdl", m_start_mdl, 0x580, 0x40, true, 0x793d47795790c6ed)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxDmaTransactionBase.m_CurrentFragmentMdl", m_current_fragment_mdl, 0x5c0, 0x40, true, 0x34f106f4721800e2)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaTransactionBase.m_StartOffset", m_start_offset, 0x600, 0x40, true, 0x50de00682f9bd184)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaTransactionBase.m_CurrentFragmentOffset", m_current_fragment_offset, 0x640, 0x40, true, 0xc7fc686ca41c5bd2)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaTransactionBase.m_MaxFragmentLength", m_max_fragment_length, 0x680, 0x40, true, 0x7bc49e1cd8f6123a)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaTransactionBase.m_TransactionLength", m_transaction_length, 0x6c0, 0x40, true, 0x8162a5bb1c149e64)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaTransactionBase.m_Remaining", m_remaining, 0x700, 0x40, true, 0xc7e4e2732b7d4c0c)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaTransactionBase.m_Transferred", m_transferred, 0x740, 0x40, true, 0xebd36f6b9480c784)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDmaTransactionBase.m_CurrentFragmentLength", m_current_fragment_length, 0x780, 0x40, true, 0xd0e03e8909c915a)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDmaTransactionBase.m_RequireSingleTransfer", m_require_single_transfer, 0x7c0, 0x8, true, 0x35d8aa2ed7bbfe5e)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxDmaTransactionBase.m_Flags", m_flags, 0x7e0, 0x20, true, 0xcd1c5f2cbb3ecbbe)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaTransactionBase.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x81bc12e61eff1921, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaTransactionBase.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x79f1deb282dceedb, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaTransactionBase.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xb4da2ec15a7e7751, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaTransactionBase.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x242fe4040a07853a, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaTransactionBase.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x2b0d82aad6b3126a, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaTransactionBase.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x9e7f6b7312875b26, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaTransactionBase.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x81c87301c32741e1, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaTransactionBase.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xbd1accb4d1870efb, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDmaTransactionBase.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x2e4e027ab319f06e, 1, uint16_t)
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