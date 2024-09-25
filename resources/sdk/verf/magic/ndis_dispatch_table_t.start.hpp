#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verf::dispatch_table_header_t), "_VF_NDIS_DISPATCH_TABLE.Header", header, 0x0, 0x0, false, 0x239394855b9d8ef4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, void*, void**, void**)>*), "_VF_NDIS_DISPATCH_TABLE.NdisAllocateVerifierContext", ndis_allocate_verifier_context, 0x0, 0x0, false, 0xfca51e5d83da7efd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisFreeVerifierContext", ndis_free_verifier_context, 0x0, 0x0, false, 0xc17779f0946637a1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::oid_request_t*, void*, void*, sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisMiniportOidRequestHandler", ndis_miniport_oid_request_handler, 0x0, 0x0, false, 0x9ec061e88139b4d7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::oid_request_t*, int32_t, void*, sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisMOidRequestComplete", ndis_m_oid_request_complete, 0x0, 0x0, false, 0x89f1e82a21d33dae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::status_indication_t*, void*, sdk::function<void(void*, struct ndis::status_indication_t*)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisMIndicateStatusEx", ndis_m_indicate_status_ex, 0x0, 0x0, false, 0x4c3cc660f4166fb8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_device_pnp_event_t*, void*, void*, sdk::function<void(void*, struct ndis::net_device_pnp_event_t*)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisMiniportDevicePnPEventNotifyHandler", ndis_miniport_device_pn_p_event_notify_handler, 0x0, 0x0, false, 0x6919a8ed65d8a8ba)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, enum ndis::halt_action_t, void*, void*, sdk::function<void(void*, enum ndis::halt_action_t)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisMiniportHaltExHandler", ndis_miniport_halt_ex_handler, 0x0, 0x0, false, 0x5c12b4a61860d530)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, void*, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisMiniportSendNetBufferListsHandler", ndis_miniport_send_net_buffer_lists_handler, 0x0, 0x0, false, 0x959045dd65cda35a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisMSendNetBufferListsComplete", ndis_m_send_net_buffer_lists_complete, 0x0, 0x0, false, 0x2fcaa543f941e580)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisFilterSendNetBufferListsHandler", ndis_filter_send_net_buffer_lists_handler, 0x0, 0x0, false, 0x1866d68054137830)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisFSendNetBufferListsComplete", ndis_f_send_net_buffer_lists_complete, 0x0, 0x0, false, 0x77c2fbd18ecdb09)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisFSendNetBufferLists", ndis_f_send_net_buffer_lists, 0x0, 0x0, false, 0x8ebbd985746f8a46)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisFilterSendNetBufferListsCompleteHandler", ndis_filter_send_net_buffer_lists_complete_handler, 0x0, 0x0, false, 0x5ef6fbd81c1a9a6b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisFilterReceiveNetBufferListsHandler", ndis_filter_receive_net_buffer_lists_handler, 0x0, 0x0, false, 0xeb43302d7ec2e93c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisFReturnNetBufferLists", ndis_f_return_net_buffer_lists, 0x0, 0x0, false, 0x3139b15df8dfa21)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisFIndicateReceiveNetBufferLists", ndis_f_indicate_receive_net_buffer_lists, 0x0, 0x0, false, 0x7ddf4fb38256307a)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, void*, sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisFilterReturnNetBufferListsHandler", ndis_filter_return_net_buffer_lists_handler, 0x0, 0x0, false, 0x5c069db1b98b26f3)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::filter_pause_parameters_t*, void*, sdk::function<int32_t(void*, struct ndis::filter_pause_parameters_t*)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisFilterPauseHandler", ndis_filter_pause_handler, 0x0, 0x0, false, 0x583d09ac89e99acd)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, sdk::function<void(void*)>*)>*), "_VF_NDIS_DISPATCH_TABLE.NdisFPauseComplete", ndis_f_pause_complete, 0x0, 0x0, false, 0x801f316c2725a912)
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
#endif