#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::message_t*), "_MIDL_STUB_MESSAGE.RpcMsg", rpc_msg, 0x0, 0x40, true, 0x4886448249659732)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MIDL_STUB_MESSAGE.Buffer", buffer, 0x40, 0x40, true, 0xdc88e6b8461257e)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MIDL_STUB_MESSAGE.BufferStart", buffer_start, 0x80, 0x40, true, 0xcecb9a438559a53c)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MIDL_STUB_MESSAGE.BufferEnd", buffer_end, 0xc0, 0x40, true, 0xf5cc2c46a6c0f2b0)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MIDL_STUB_MESSAGE.BufferMark", buffer_mark, 0x100, 0x40, true, 0x3e83491edbef33bd)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MIDL_STUB_MESSAGE.BufferLength", buffer_length, 0x140, 0x20, true, 0x322c5daed7246713)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MIDL_STUB_MESSAGE.MemorySize", memory_size, 0x160, 0x20, true, 0x9b482eba0435c29)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MIDL_STUB_MESSAGE.Memory", memory, 0x180, 0x40, true, 0x2ae4332685dc0ad8)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIDL_STUB_MESSAGE.IsClient", is_client, 0x1c0, 0x8, true, 0x39e95687fb6b90)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MIDL_STUB_MESSAGE.uFlags2", u_flags2, 0x1d0, 0x10, true, 0x7e15ce0e01a220f6)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MIDL_STUB_MESSAGE.ReuseBuffer", reuse_buffer, 0x1e0, 0x20, true, 0x80f6b9deb8abb375)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_alloc_all_nodes_context_t*), "_MIDL_STUB_MESSAGE.pAllocAllNodesContext", p_alloc_all_nodes_context, 0x200, 0x40, true, 0xa1183d4499b131ab)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_pointer_queue_state_t*), "_MIDL_STUB_MESSAGE.pPointerQueueState", p_pointer_queue_state, 0x240, 0x40, true, 0x71e328e716814c29)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MIDL_STUB_MESSAGE.IgnoreEmbeddedPointers", ignore_embedded_pointers, 0x280, 0x20, true, 0x55aece943623f954)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MIDL_STUB_MESSAGE.PointerBufferMark", pointer_buffer_mark, 0x2c0, 0x40, true, 0x31cf6115ed81d861)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIDL_STUB_MESSAGE.CorrDespIncrement", corr_desp_increment, 0x300, 0x8, true, 0xecd14a87bbcb74d3)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIDL_STUB_MESSAGE.uFlags", u_flags, 0x308, 0x8, true, 0xd635805e84a08eb5)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MIDL_STUB_MESSAGE.UniquePtrCount", unique_ptr_count, 0x310, 0x10, true, 0x4b6ffb781302c4ba)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MIDL_STUB_MESSAGE.MaxCount", max_count, 0x340, 0x40, true, 0x8e4d62c24beb1aec)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MIDL_STUB_MESSAGE.Offset", offset, 0x380, 0x20, true, 0x820688707172d6e3)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MIDL_STUB_MESSAGE.ActualCount", actual_count, 0x3a0, 0x20, true, 0xbb955deb2172457c)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(uint64_t)>*), "_MIDL_STUB_MESSAGE.pfnAllocate", pfn_allocate, 0x3c0, 0x40, true, 0x48f26bab9c1a6852)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_MIDL_STUB_MESSAGE.pfnFree", pfn_free, 0x400, 0x40, true, 0xf9213f9b0ac9ea0d)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MIDL_STUB_MESSAGE.StackTop", stack_top, 0x440, 0x40, true, 0x23ec42e6385245af)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MIDL_STUB_MESSAGE.pPresentedType", p_presented_type, 0x480, 0x40, true, 0xc96537151cf75a4b)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MIDL_STUB_MESSAGE.pTransmitType", p_transmit_type, 0x4c0, 0x40, true, 0xa5b9fd52510f677b)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MIDL_STUB_MESSAGE.SavedHandle", saved_handle, 0x500, 0x40, true, 0x7151ce1e7c177090)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::midl_stub_desc_t*), "_MIDL_STUB_MESSAGE.StubDesc", stub_desc, 0x540, 0x40, true, 0xff3fc09c5e0d6615)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::full_ptr_xlat_tables_t*), "_MIDL_STUB_MESSAGE.FullPtrXlatTables", full_ptr_xlat_tables, 0x580, 0x40, true, 0x99c3fc6192817f2c)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MIDL_STUB_MESSAGE.FullPtrRefId", full_ptr_ref_id, 0x5c0, 0x20, true, 0xdd270ebaec31e560)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MIDL_STUB_MESSAGE.PointerLength", pointer_length, 0x5e0, 0x20, true, 0x825ffd0af0b6f19f)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fInDontFree", f_in_dont_free, 0x600, 0x1, true, 0x1b0ccd98105bd94a, 1, uint32_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fDontCallFreeInst", f_dont_call_free_inst, 0x601, 0x1, true, 0xc49ff9717017d7b4, 1, uint32_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fUnused1", f_unused1, 0x602, 0x1, true, 0x7eacc97d589f7862, 1, uint32_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fHasReturn", f_has_return, 0x603, 0x1, true, 0xe550bb9b55def08f, 1, uint32_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fHasExtensions", f_has_extensions, 0x604, 0x1, true, 0xfa7a5d61c33fa77d, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fHasNewCorrDesc", f_has_new_corr_desc, 0x605, 0x1, true, 0x3f12ecfa93eea1a3, 1, uint32_t)
#define _m037 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fIsIn", f_is_in, 0x606, 0x1, true, 0xa75afdf9743b4e38, 1, uint32_t)
#define _m038 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fIsOut", f_is_out, 0x607, 0x1, true, 0xb6059f3e2fa4588, 1, uint32_t)
#define _m039 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fIsOicf", f_is_oicf, 0x608, 0x1, true, 0x2ffc79ad48ed8782, 1, uint32_t)
#define _m040 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fBufferValid", f_buffer_valid, 0x609, 0x1, true, 0x5e7745191b772d86, 1, uint32_t)
#define _m041 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fHasMemoryValidateCallback", f_has_memory_validate_callback, 0x60a, 0x1, true, 0x53a00e7dbc732720, 1, uint32_t)
#define _m042 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fInFree", f_in_free, 0x60b, 0x1, true, 0x438119289b1a5772, 1, uint32_t)
#define _m043 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "_MIDL_STUB_MESSAGE.fNeedMCCP", f_need_mccp, 0x60c, 0x1, true, 0x2c1be249bd417884, 1, uint32_t)
#define _m044 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int3_t), "_MIDL_STUB_MESSAGE.fUnused2", f_unused2, 0x60d, 0x3, true, 0x419cf3094ac0d53d, 3, uint32_t)
#define _m045 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int16_t), "_MIDL_STUB_MESSAGE.fUnused3", f_unused3, 0x610, 0x10, true, 0x9137210e422d7196, 16, uint32_t)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MIDL_STUB_MESSAGE.dwDestContext", dw_dest_context, 0x620, 0x20, true, 0x5e1f91356fa5c2b5)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MIDL_STUB_MESSAGE.pvDestContext", pv_dest_context, 0x640, 0x40, true, 0xd71734b25892fb39)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<u0_saved_context_handles_t**, struct win::ndr_scontext_t**>), "_MIDL_STUB_MESSAGE.SavedContextHandles", saved_context_handles, 0x680, 0x40, true, 0xb652594f5736fef0)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MIDL_STUB_MESSAGE.ParamNumber", param_number, 0x6c0, 0x20, true, 0xb6857abec6ece27)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_rpc_channel_buffer_t*), "_MIDL_STUB_MESSAGE.pRpcChannelBuffer", p_rpc_channel_buffer, 0x700, 0x40, true, 0x13dcda628612aa6c)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::array_info_t*), "_MIDL_STUB_MESSAGE.pArrayInfo", p_array_info, 0x740, 0x40, true, 0x3d2d333a7c97ba48)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MIDL_STUB_MESSAGE.SizePtrCountArray", size_ptr_count_array, 0x780, 0x40, true, 0x910b9f2e6ef77747)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MIDL_STUB_MESSAGE.SizePtrOffsetArray", size_ptr_offset_array, 0x7c0, 0x40, true, 0xee23bc6dd5494da3)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MIDL_STUB_MESSAGE.SizePtrLengthArray", size_ptr_length_array, 0x800, 0x40, true, 0xfec36f165d6eb6cb)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MIDL_STUB_MESSAGE.pArgQueue", p_arg_queue, 0x840, 0x40, true, 0xd2bd75f0a92d4a38)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MIDL_STUB_MESSAGE.dwStubPhase", dw_stub_phase, 0x880, 0x20, true, 0xdf0f11000204c3b3)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MIDL_STUB_MESSAGE.LowStackMark", low_stack_mark, 0x8c0, 0x40, true, 0x5f1e12287b56d9b3)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_async_message_t*), "_MIDL_STUB_MESSAGE.pAsyncMsg", p_async_msg, 0x900, 0x40, true, 0x272422903c945d5a)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_correlation_info_t*), "_MIDL_STUB_MESSAGE.pCorrInfo", p_corr_info, 0x940, 0x40, true, 0xd205105601042bf1)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MIDL_STUB_MESSAGE.pCorrMemory", p_corr_memory, 0x980, 0x40, true, 0xb8fa7e32d25f879b)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MIDL_STUB_MESSAGE.pMemoryList", p_memory_list, 0x9c0, 0x40, true, 0xc91bb7bdcf4e01d9)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MIDL_STUB_MESSAGE.pCSInfo", p_cs_info, 0xa00, 0x40, true, 0x6fb0b3926d2c6dde)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MIDL_STUB_MESSAGE.ConformanceMark", conformance_mark, 0xa40, 0x40, true, 0x7b80722bf9983347)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_MIDL_STUB_MESSAGE.VarianceMark", variance_mark, 0xa80, 0x40, true, 0x6d5f77a519ec86bc)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_proc_context_t*), "_MIDL_STUB_MESSAGE.pContext", p_context, 0xb00, 0x40, true, 0xe50e420dd9ec153c)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MIDL_STUB_MESSAGE.ContextHandleHash", context_handle_hash, 0xb40, 0x40, true, 0x9fb1172d2b0e14fb)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MIDL_STUB_MESSAGE.pUserMarshalList", p_user_marshal_list, 0xb80, 0x40, true, 0xb0e5693d4e37da5e)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MIDL_STUB_MESSAGE.Reserved51_3", reserved51_3, 0xbc0, 0x40, true, 0x338bcd0fbcafbed2)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MIDL_STUB_MESSAGE.Reserved51_4", reserved51_4, 0xc00, 0x40, true, 0xec368d7b81fd005a)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_MIDL_STUB_MESSAGE.Reserved51_5", reserved51_5, 0xc40, 0x40, true, 0x782607a544f009d0)
#define _m48 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_MIDL_STUB_MESSAGE.SavedContextHandles.pad", pad, 0x0, 0x80, true, 0x10e12d192dd3557)
#define _m49 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MIDL_STUB_MESSAGE.SavedContextHandles.userContext", user_context, 0x80, 0x40, true, 0xdfe812024940ad41)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
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
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m48
#define _m49
#endif