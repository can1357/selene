#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSOleTlsData.pvThreadBase", pv_thread_base, 0x0, 0x40, true, 0x2033cdbb9be05e80)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_sm_allocator_t*), "tagSOleTlsData.pSmAllocator", p_sm_allocator, 0x40, 0x40, true, 0xe984652f5178e4ff)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.dwApartmentID", dw_apartment_id, 0x80, 0x20, true, 0x8dcc96feb9180786)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.dwFlags", dw_flags, 0xa0, 0x20, true, 0xaf14a961073d2f92)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSOleTlsData.TlsMapIndex", tls_map_index, 0xc0, 0x20, true, 0x20740798e58e5439)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "tagSOleTlsData.ppTlsSlot", pp_tls_slot, 0x100, 0x40, true, 0x1cc494e93d90168d)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.cComInits", c_com_inits, 0x140, 0x20, true, 0xa15da8650b8ff22)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.cOleInits", c_ole_inits, 0x160, 0x20, true, 0x4c789a10610885cf)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.cCalls", c_calls, 0x180, 0x20, true, 0x1f5cb36b606cd875)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::server_call_t*), "tagSOleTlsData.pServerCall", p_server_call, 0x1c0, 0x40, true, 0xa4478d2927890777)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::thread_call_object_cache_t*), "tagSOleTlsData.pCallObjectCache", p_call_object_cache, 0x200, 0x40, true, 0x850d4c189de8d66e)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::context_stack_node_t*), "tagSOleTlsData.pContextStack", p_context_stack, 0x240, 0x40, true, 0x1c341dbd504b7138)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_obj_server_t*), "tagSOleTlsData.pObjServer", p_obj_server, 0x280, 0x40, true, 0x5b2871ad49df69a5)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.dwTIDCaller", dw_tid_caller, 0x2c0, 0x20, true, 0x370380bd75fcf2ee)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSOleTlsData.pCurrentCtxForNefariousReaders", p_current_ctx_for_nefarious_readers, 0x300, 0x40, true, 0x3bcaea1b63e99637)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "tagSOleTlsData.pCurrentContext", p_current_context, 0x340, 0x40, true, 0x13974f4d638138d5)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_object_context_t*), "tagSOleTlsData.pEmptyCtx", p_empty_ctx, 0x380, 0x40, true, 0x197e14de75237f6a)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagSOleTlsData.ContextId", context_id, 0x3c0, 0x40, true, 0xf958f2d827989370)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_com_apartment_t*), "tagSOleTlsData.pNativeApt", p_native_apt, 0x400, 0x40, true, 0x94b0695835ad4875)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagSOleTlsData.pCallContext", p_call_context, 0x440, 0x40, true, 0x6994ae02a8290b26)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ctx_call_t*), "tagSOleTlsData.pCtxCall", p_ctx_call, 0x480, 0x40, true, 0xfaaf462c02303dd)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_policy_set_t*), "tagSOleTlsData.pPS", p_ps, 0x4c0, 0x40, true, 0x63ed1f699da4828f)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSOleTlsData.pvPendingCallsFront", pv_pending_calls_front, 0x500, 0x40, true, 0xb5a7bfde32dc7da7)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSOleTlsData.pvPendingCallsBack", pv_pending_calls_back, 0x540, 0x40, true, 0x3d86d95e317795d2)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_apt_call_ctrl_t*), "tagSOleTlsData.pCallCtrl", p_call_ctrl, 0x580, 0x40, true, 0xd163421c2fc0e317)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_srv_call_state_t*), "tagSOleTlsData.pTopSCS", p_top_scs, 0x5c0, 0x40, true, 0x3dade4fec32395d1)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagSOleTlsData.hwndSTA", hwnd_sta, 0x600, 0x40, true, 0x228ea65a4d9ce704)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSOleTlsData.cORPCNestingLevel", c_orpc_nesting_level, 0x640, 0x20, true, 0xe6d1be5e267a54d5)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.cDebugData", c_debug_data, 0x660, 0x20, true, 0xecb7a9750daf9a85)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSOleTlsData.LogicalThreadId", logical_thread_id, 0x680, 0x80, true, 0xd5b48a643590d909)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSOleTlsData.hThread", h_thread, 0x700, 0x40, true, 0xf94fcce52331f2fe)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSOleTlsData.hRevert", h_revert, 0x740, 0x40, true, 0xc233f89e8f2181d2)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagSOleTlsData.pAsyncRelease", p_async_release, 0x780, 0x40, true, 0xcb44e973ca067d54)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagSOleTlsData.hwndDdeServer", hwnd_dde_server, 0x7c0, 0x40, true, 0x9cc572b9960269ba)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagSOleTlsData.hwndDdeClient", hwnd_dde_client, 0x800, 0x40, true, 0xa030f79a9b293af)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.cServeDdeObjects", c_serve_dde_objects, 0x840, 0x20, true, 0x3d3f14799d3bd40c)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSOleTlsData.pSTALSvrsFront", p_stal_svrs_front, 0x880, 0x40, true, 0x52c0b753e47bcaa5)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagSOleTlsData.hwndClip", hwnd_clip, 0x8c0, 0x40, true, 0x5a21f958d8ebe718)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_data_object_t*), "tagSOleTlsData.pDataObjClip", p_data_obj_clip, 0x900, 0x40, true, 0xc68df868cc3975da)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.dwClipSeqNum", dw_clip_seq_num, 0x940, 0x20, true, 0x5d69c0bccbf26f76)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.fIsClipWrapper", f_is_clip_wrapper, 0x960, 0x20, true, 0x1bb799a2f8e74540)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagSOleTlsData.punkState", punk_state, 0x980, 0x40, true, 0xed6619da88c8fc6a)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.cCallCancellation", c_call_cancellation, 0x9c0, 0x20, true, 0x6ea29b860d2c6a6c)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.cAsyncSends", c_async_sends, 0x9e0, 0x20, true, 0x880c48abbe33e120)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_async_call_t*), "tagSOleTlsData.pAsyncCallList", p_async_call_list, 0xa00, 0x40, true, 0x79805b0c717ca56f)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_surrogated_object_list_t*), "tagSOleTlsData.pSurrogateList", p_surrogate_list, 0xa40, 0x40, true, 0x1888b737b5190f4d)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSOleTlsData.pRWLockTlsEntry", p_rw_lock_tls_entry, 0xa80, 0x40, true, 0x5e1a78d4e5d37d0d)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::call_entry_buffer_t), "tagSOleTlsData.CallEntry", call_entry, 0xac0, 0xc0, true, 0xc0d63f6fe4833bf0)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::initialize_spy_node_t*), "tagSOleTlsData.pFirstSpyReg", p_first_spy_reg, 0xb80, 0x40, true, 0xb2f60a6d0b72b3c2)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::initialize_spy_node_t*), "tagSOleTlsData.pFirstFreeSpyReg", p_first_free_spy_reg, 0xbc0, 0x40, true, 0xfbe516c5f0da39c)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_verifier_tls_data_t*), "tagSOleTlsData.pVerifierData", p_verifier_data, 0xc00, 0x40, true, 0x4b7fe037d1413a63)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.dwMaxSpy", dw_max_spy, 0xc40, 0x20, true, 0x4307c53d454267ba)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "tagSOleTlsData.cCustomMarshallerRecursion", c_custom_marshaller_recursion, 0xc60, 0x8, true, 0x926eb58150d8ffb3)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSOleTlsData.pDragCursors", p_drag_cursors, 0xc80, 0x40, true, 0xfb5e209d7b9780be)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagSOleTlsData.punkError", punk_error, 0xcc0, 0x40, true, 0xb0b7164a442fc1a8)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.cbErrorData", cb_error_data, 0xd00, 0x20, true, 0x5fa69a68d54f7d65)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::outgoing_call_data_t), "tagSOleTlsData.outgoingCallData", outgoing_call_data, 0xd20, 0x40, true, 0x4e2c6bcdfa516eec)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::incoming_call_data_t), "tagSOleTlsData.incomingCallData", incoming_call_data, 0xd60, 0x20, true, 0x8c46eebfa8cfa8e6)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::outgoing_activation_data_t), "tagSOleTlsData.outgoingActivationData", outgoing_activation_data, 0xd80, 0x80, true, 0xfedf259ae5884611)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.cReentrancyFromUserAPC", c_reentrancy_from_user_apc, 0xe00, 0x20, true, 0xdc5065fb8e181c9a)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "tagSOleTlsData.dwCrossThreadFlags", dw_cross_thread_flags, 0xe80, 0x20, true, 0x81cc1fb566d48d7c)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.dwNestedRemRelease", dw_nested_rem_release, 0xea0, 0x20, true, 0x872319189ef0e604)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.cIncomingTouchedASTACalls", c_incoming_touched_asta_calls, 0xec0, 0x20, true, 0xd0d53dbef248e664)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::push_logical_thread_id_t*), "tagSOleTlsData.pTopPushedLogicalThreadId", p_top_pushed_logical_thread_id, 0xf00, 0x40, true, 0x3d411e2327376e10)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.iXslockOwnerTableHint", i_xslock_owner_table_hint, 0xf40, 0x20, true, 0xe4f1d9ed014bd447)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::oletls_prevent_rundown_mitigation_t), "tagSOleTlsData.currentPreventRundownMitigation", current_prevent_rundown_mitigation, 0xf60, 0x20, true, 0x41c5dc4482893086)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSOleTlsData.fOweForcedBulkUpdateForCurrentMitigation", f_owe_forced_bulk_update_for_current_mitigation, 0xf80, 0x20, true, 0x83e1302f579e34be)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagSOleTlsData.pClipboardBroker", p_clipboard_broker, 0xfc0, 0x40, true, 0x5c4aee61aa11fc24)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.dwActivationType", dw_activation_type, 0x1000, 0x20, true, 0xbe922d59d52b34a5)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.cTouchedAstasInActiveCall", c_touched_astas_in_active_call, 0x1020, 0x20, true, 0x6f6845b17c79e13f)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t*, const uint64_t*>), "tagSOleTlsData.pTouchedAstasInActiveCall", p_touched_astas_in_active_call, 0x1040, 0x40, true, 0xe94f933a8c147dc)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::unmarshal_for_query_interface_t*), "tagSOleTlsData.pTopmostUnmarshalForQueryInterface", p_topmost_unmarshal_for_query_interface, 0x1080, 0x40, true, 0x40635ae1af5ecf62)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::modern_sta_wait_context_t*), "tagSOleTlsData.pModernSTAWaitContext", p_modern_sta_wait_context, 0xe40, 0x40, true, 0x779c770831e80a09)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::co_get_standard_marshal_in_progress_t*), "tagSOleTlsData.pTopmostCoGetStandardMarshalInProgress", p_topmost_co_get_standard_marshal_in_progress, 0x10c0, 0x40, true, 0x46dc632533e3fe82)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::wire_container_this_t*), "tagSOleTlsData.requestContainerPassthroughData", request_container_passthrough_data, 0x1100, 0x40, true, 0x58a8855d8cb7859)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.requestContainerPassthroughDataSize", request_container_passthrough_data_size, 0x1140, 0x20, true, 0xfbb1a75b28e40af1)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSOleTlsData.freeRequestContainerPassthroughData", free_request_container_passthrough_data, 0x1160, 0x20, true, 0x483630a6363278a6)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_container_that_t*), "tagSOleTlsData.responseContainerPassthroughData", response_container_passthrough_data, 0x1180, 0x40, true, 0x372674998a7d324d)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOleTlsData.responseContainerPassthroughDataSize", response_container_passthrough_data_size, 0x11c0, 0x20, true, 0x4a15950d305e5d9e)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::com_tls_flags_t), "tagSOleTlsData.comTlsFlags", com_tls_flags, 0x11e0, 0x20, true, 0x801f40e9447815f)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_message_filter_t*), "tagSOleTlsData.pMsgFilter", p_msg_filter, 0x0, 0x0, false, 0x5dfc69542788c7bd)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::asta_wait_context_t*), "tagSOleTlsData.pASTAWaitContext", p_asta_wait_context, 0x0, 0x0, false, 0xe50621adfbca3ce4)
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
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m080
#define _m081
#endif