#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum tag::callcategory_t), "CMessageCall._callcat", callcat, 0x80, 0x20, true, 0x4d52bac1e552e91)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<int32_t, sdk::hresult>), "CMessageCall._hResult", h_result, 0xc0, 0x20, true, 0x6f8cd06780ca3006)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "CMessageCall._ipid", ipid, 0xe0, 0x80, true, 0x9bfdc0a590bb58bd)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CMessageCall._hSxsActCtx", h_sxs_act_ctx, 0x180, 0x40, true, 0xcfabaa9794369adc)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<const class win::c_dest_object_t, class win::c_dest_object_t>), "CMessageCall._destObj", dest_obj, 0x1c0, 0x40, true, 0x7b8a3528032282ea)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CMessageCall._hRpc", h_rpc, 0x340, 0x40, true, 0x341fcc2a36ee214)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "CMessageCall._iidWire", iid_wire, 0x3c0, 0x80, true, 0x67eb5b7596b31fa1)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._dwServerTid", dw_server_tid, 0x440, 0x20, true, 0x6dbe18eaa6aa4647)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t), "CMessageCall._iMethodWire", i_method_wire, 0x460, 0x10, true, 0xe61ecb72c2291dce)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rpcolemessage_t), "CMessageCall.message", message, 0x480, 0x80, true, 0x53af9427e3da3786)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall.m_ulCancelTimeout", m_ul_cancel_timeout, 0x700, 0x20, true, 0x2e2aee8fb439ae18)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CMessageCall.m_dwCancelStartCount", m_dw_cancel_start_count, 0x740, 0x40, true, 0xa04d14a7a39d7587)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CMessageCall._bCheckedClientIsAppContainer", b_checked_client_is_app_container, 0x780, 0x1, true, 0xd9d88a6e875664d9, 1, uint8_t)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CMessageCall._bClientIsAppContainer", b_client_is_app_container, 0x781, 0x1, true, 0xfa40d5d16986bddb, 1, uint8_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CMessageCall._bServerIsAppContainer", b_server_is_app_container, 0x782, 0x1, true, 0x1b092f2ffc0b596b, 1, uint8_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CMessageCall._bCheckedClientIsRpcss", b_checked_client_is_rpcss, 0x783, 0x1, true, 0x546cbc47ee732038, 1, uint8_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CMessageCall._bClientIsRpcss", b_client_is_rpcss, 0x784, 0x1, true, 0x6cf25546b726b3df, 1, uint8_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CMessageCall._bCheckedClientIsSuspendableByAnyLifecycleManager", b_checked_client_is_suspendable_by_any_lifecycle_manager, 0x785, 0x1, true, 0xf0720e9385f4424e, 1, uint8_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CMessageCall._bClientIsSuspendableByAnyLifecycleManager", b_client_is_suspendable_by_any_lifecycle_manager, 0x786, 0x1, true, 0x8bf685f773267b1c, 1, uint8_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CMessageCall._bEnabledInprocOutParameterMitigation", b_enabled_inproc_out_parameter_mitigation, 0x9c0, 0x1, true, 0x3fa6c6514138bd1d, 1, uint8_t)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CMessageCall._bCheckedConditionsForOutofprocOutParameterMitigation", b_checked_conditions_for_outofproc_out_parameter_mitigation, 0x9c1, 0x1, true, 0x8627d34380b0901a, 1, uint8_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CMessageCall._bShouldEnableOutofprocOutParameterMitigation", b_should_enable_outofproc_out_parameter_mitigation, 0x9c2, 0x1, true, 0xd3b82dd9504f7343, 1, uint8_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CMessageCall._bOverrideEnableOutofprocOutParameterMitigation", b_override_enable_outofproc_out_parameter_mitigation, 0x9c3, 0x1, true, 0xa2eabe523a3ea4f0, 1, uint8_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "CMessageCall._bScheduledAcknowlegmentOfOutParameterMarshalingSet", b_scheduled_acknowlegment_of_out_parameter_marshaling_set, 0x9c4, 0x1, true, 0x2e5704b41451d3f0, 1, uint8_t)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::oxid_entry_t*), "CMessageCall._pServerOXIDEntry", p_server_oxid_entry, 0xa00, 0x40, true, 0x4fe7876001fea08d)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CMessageCall._preGetBufferOutOfProcMarshalingSetId", pre_get_buffer_out_of_proc_marshaling_set_id, 0xa40, 0x40, true, 0x9826d68050738916)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CMessageCall.m_dwStartCount", m_dw_start_count, 0xb40, 0x40, true, 0x4362fdd9a152fc7a)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<class win::marshaled_handle_storage_t*, 2>), "CMessageCall._marshaledHandles", marshaled_handles, 0xb80, 0x80, true, 0xd33f1fc7a4a1f69c)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CMessageCall._pHeader", p_header, 0xdc0, 0x40, true, 0x7cdd5bdc0029eb0c)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._server_fault", server_fault, 0xe00, 0x20, true, 0xe8408389ba656e22)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CMessageCall._guidCausality", guid_causality, 0xe20, 0x80, true, 0x1448ef96a08a8d51)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CMessageCall._guidContainerId", guid_container_id, 0xea0, 0x80, true, 0x20df14ee8c850f0e)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "CMessageCall._passthroughTraceActivity", passthrough_trace_activity, 0x7a0, 0x80, true, 0xbb2f2ef4691e6a62)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "CMessageCall._callId", call_id, 0x880, 0x80, true, 0x5a961dd86c846209)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CMessageCall._retryCount", retry_count, 0x900, 0x20, true, 0xe2799c1f6240a531)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_container_this_t*), "CMessageCall._requestContainerPassthroughData", request_container_passthrough_data, 0xcc0, 0x40, true, 0xe491213bfd982a92)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._requestContainerPassthroughDataSize", request_container_passthrough_data_size, 0xd00, 0x20, true, 0x31e9728157cf5962)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CMessageCall._useContainerErrorInformationLocalPropagation", use_container_error_information_local_propagation, 0xd20, 0x8, true, 0xac7a01b298ab7508)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::response_message_type_t), "CMessageCall._responseMessageType", response_message_type, 0xd40, 0x20, true, 0x57c9494f3c760ffa)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_this_t*), "CMessageCall._orpcThis", orpc_this, 0xf40, 0x40, true, 0x80b6bc4f76823e14)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._sizeOfOrpcThis", size_of_orpc_this, 0xf80, 0x20, true, 0x869e34572352108e)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_container_this_t*), "CMessageCall._containerThis", container_this, 0xfc0, 0x40, true, 0xf9d0cf876321f242)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._sizeOfContainerThis", size_of_container_this, 0x1000, 0x20, true, 0x54f60127cafb479a)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_local_this_t*), "CMessageCall._localThis", local_this, 0x1040, 0x40, true, 0xc0c3a1ad0b374779)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._sizeOfLocalThis", size_of_local_this, 0x1080, 0x20, true, 0xb923fed731495f69)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "CMessageCall._requestStubData", request_stub_data, 0x10c0, 0x40, true, 0xb9fb27fc92de50fb)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._sizeOfRequestStubData", size_of_request_stub_data, 0x1100, 0x20, true, 0xe50dea0450d71828)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "CMessageCall._clientLocalThisFlags", client_local_this_flags, 0x1140, 0x40, true, 0x9901d2c24efa866b)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::midl_xmit_defs_0001_t*), "CMessageCall._clientWinrtAsyncRequestBlock", client_winrt_async_request_block, 0x1180, 0x40, true, 0xb06cd01c8a64a081)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_that_t*), "CMessageCall._orpcThat", orpc_that, 0x11c0, 0x40, true, 0x2d2d6e22e3405e35)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._sizeOfOrpcThat", size_of_orpc_that, 0x1200, 0x20, true, 0x45524e0c587d5b20)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_local_that_t*), "CMessageCall._localThat", local_that, 0x1240, 0x40, true, 0x534d48b6f5947f87)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._sizeOfLocalThat", size_of_local_that, 0x1280, 0x20, true, 0x5a835ba0245cd9d1)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_container_that_t*), "CMessageCall._containerThat", container_that, 0x12c0, 0x40, true, 0xa3fd3dbfb825bc68)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._sizeOfContainerThat", size_of_container_that, 0x1300, 0x20, true, 0x43efd13e32f22ca3)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "CMessageCall._responseStubData", response_stub_data, 0x1340, 0x40, true, 0xb96210793d61499c)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._sizeOfResponseStubData", size_of_response_stub_data, 0x1380, 0x20, true, 0x5e27956fbd31fbf1)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "CMessageCall._pointerToServerMarshalingSetId", pointer_to_server_marshaling_set_id, 0x13c0, 0x40, true, 0xa4240db2b96124a5)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_winrt_async_call_response_block_part1_t*), "CMessageCall._serverWinrtAsyncResponseBlock", server_winrt_async_response_block, 0x1400, 0x40, true, 0x5c200fa50120298e)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CMessageCall._serverResponseStubData", server_response_stub_data, 0x1440, 0x40, true, 0xbebef364a70f8f7b)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CMessageCall._relinquishedMarshalingSet", relinquished_marshaling_set, 0x1480, 0x8, true, 0x2a4989bf8b222bcc)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_local_this_t*), "CMessageCall._pLocalThis", p_local_this, 0x0, 0x0, false, 0x94e56e4d28af0550)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_local_that_t*), "CMessageCall._pLocalThat", p_local_that, 0x0, 0x0, false, 0x59af54802d81a0ff)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._dwCOMHeaderSize", dw_com_header_size, 0x0, 0x0, false, 0xe8907730366d919e)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._dwServerPid", dw_server_pid, 0x0, 0x0, false, 0xcfeacf194782f29)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._dwErrorBufSize", dw_error_buf_size, 0x0, 0x0, false, 0xa2db998216da0810)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CMessageCall._preGetBufferOutOfProcMarshalingSetAcknowledgmentOxid", pre_get_buffer_out_of_proc_marshaling_set_acknowledgment_oxid, 0x0, 0x0, false, 0x90fecd44f1e7071c)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMessageCall._extensionsDestCtxOverride", extensions_dest_ctx_override, 0x0, 0x0, false, 0xe9f6ef545356cc13)
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
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#endif