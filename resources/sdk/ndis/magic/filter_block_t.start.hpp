#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_FILTER_BLOCK.Header", header, 0x0, 0x20, true, 0xb818077e1568b519)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_block_t*), "_NDIS_FILTER_BLOCK.NextFilter", next_filter, 0x40, 0x40, true, 0x1d38ac4b85db79b8)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_driver_block_t*), "_NDIS_FILTER_BLOCK.FilterDriver", filter_driver, 0x80, 0x40, true, 0x6a1e35b2e91c6369)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_FILTER_BLOCK.FilterModuleContext", filter_module_context, 0xc0, 0x40, true, 0xf76c7c1efe8a304)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_FILTER_BLOCK.Miniport", miniport, 0x100, 0x40, true, 0xa7cdc9c2a8e13e18)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_FILTER_BLOCK.FilterFriendlyName", filter_friendly_name, 0x180, 0x40, true, 0xd0816e2759cce498)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_BLOCK.Flags", flags, 0x1c0, 0x20, true, 0xf14b0e57992545ed)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_BLOCK.StackFlags", stack_flags, 0x1e0, 0x20, true, 0x9645beb752ab85fb)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::filter_state_t), "_NDIS_FILTER_BLOCK.State", state, 0x200, 0x8, true, 0x9c67f7332f30264c)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::reference_ex_t), "_NDIS_FILTER_BLOCK.Ref", ref, 0x240, 0xc0, true, 0x9d6e4aaa10b98eac)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_FILTER_BLOCK.FakeStatus", fake_status, 0x300, 0x20, true, 0x1eded356a9a775f7)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_block_t*), "_NDIS_FILTER_BLOCK.NextGlobalFilter", next_global_filter, 0x340, 0x40, true, 0xfdb6c9e983d71877)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_block_t*), "_NDIS_FILTER_BLOCK.LowerFilter", lower_filter, 0x380, 0x40, true, 0xd335b30ef820bdcc)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_block_t*), "_NDIS_FILTER_BLOCK.HigherFilter", higher_filter, 0x3c0, 0x40, true, 0xe3ca73348424adcd)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_pause_restart_context_t*), "_NDIS_FILTER_BLOCK.AsyncOpContext", async_op_context, 0x400, 0x40, true, 0xa0e62273a35b23df)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_FILTER_BLOCK.NumOfPauseRestartRequests", num_of_pause_restart_requests, 0x440, 0x20, true, 0xf207a069b57209ae)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_FILTER_BLOCK.Lock", lock, 0x480, 0x40, true, 0x99c96b777d9e7baf)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_FILTER_BLOCK.LockThread", lock_thread, 0x4c0, 0x40, true, 0x4b45cb832c83c4a3)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_FILTER_BLOCK.OidRequestList", oid_request_list, 0x500, 0x80, true, 0x765fc6e198f36ef9)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::oid_request_t*), "_NDIS_FILTER_BLOCK.PendingOidRequest", pending_oid_request, 0x580, 0x40, true, 0x424a7bd5941ac829)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_stack_expansion_fallback_t), "_NDIS_FILTER_BLOCK.StackExpansionFallback", stack_expansion_fallback, 0x600, 0x0, true, 0x91700a8a0b79d2a)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_NDIS_FILTER_BLOCK.StatusIndicationsQueued", status_indications_queued, 0x900, 0x8, true, 0xb20be963130d63a3)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_NDIS_FILTER_BLOCK.DroppedReceiveNbls", dropped_receive_nbls, 0x920, 0x20, true, 0x9d6f253e4ddd7949)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_NDIS_FILTER_BLOCK.DroppedSendNbls", dropped_send_nbls, 0x940, 0x20, true, 0xa8087a1cc845d6c5)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_BLOCK.DroppedStatusIndications", dropped_status_indications, 0x960, 0x20, true, 0xe078b7e173265ab2)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_BLOCK.DroppedUncloneableStatusIndications", dropped_uncloneable_status_indications, 0x980, 0x20, true, 0x73e063f9de1a2277)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::reference_ex_t), "_NDIS_FILTER_BLOCK.PnPRef", pn_p_ref, 0x9c0, 0xc0, true, 0x1cfcba9d9a9d0b68)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NDIS_FILTER_BLOCK.MediaType", media_type, 0xa80, 0x20, true, 0x6de66ab3b1e768bc)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::physical_medium_t), "_NDIS_FILTER_BLOCK.PhysicalMediaType", physical_media_type, 0xaa0, 0x20, true, 0xc4d3b8210c7407a3)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_connect_state_t), "_NDIS_FILTER_BLOCK.MediaConnectState", media_connect_state, 0xac0, 0x20, true, 0x140e96ee6f10a8f6)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_duplex_state_t), "_NDIS_FILTER_BLOCK.MediaDuplexState", media_duplex_state, 0xae0, 0x20, true, 0x83d4c1e4ffe93be9)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_FILTER_BLOCK.XmitLinkSpeed", xmit_link_speed, 0xb00, 0x40, true, 0xcbdd27dd7299b173)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_FILTER_BLOCK.RcvLinkSpeed", rcv_link_speed, 0xb40, 0x40, true, 0x27a10f60590914bc)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::supported_pause_functions_t), "_NDIS_FILTER_BLOCK.PauseFunctions", pause_functions, 0xb80, 0x20, true, 0x6259419b7e4b2a90)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_BLOCK.AutoNegotiationFlags", auto_negotiation_flags, 0xba0, 0x20, true, 0x56f41d01b71d0e95)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_FILTER_BLOCK.XState", x_state, 0xbc0, 0x8, true, 0x499e80e167013636)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_connect_state_t), "_NDIS_FILTER_BLOCK.MediaConnectStateIndicateUp", media_connect_state_indicate_up, 0xbe0, 0x20, true, 0x933d79f8655e458a)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_duplex_state_t), "_NDIS_FILTER_BLOCK.MediaDuplexStateIndicateUp", media_duplex_state_indicate_up, 0xc00, 0x20, true, 0xb161655850264e75)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_FILTER_BLOCK.XmitLinkSpeedIndicateUp", xmit_link_speed_indicate_up, 0xc40, 0x40, true, 0x9da2bc763d11f372)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_FILTER_BLOCK.RcvLinkSpeedIndicateUp", rcv_link_speed_indicate_up, 0xc80, 0x40, true, 0x81d4e9c0e1503caf)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::supported_pause_functions_t), "_NDIS_FILTER_BLOCK.PauseFunctionsIndicateUp", pause_functions_indicate_up, 0xcc0, 0x20, true, 0x6e17735e19e7e2a5)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_BLOCK.AutoNegotiationFlagsIndicateUp", auto_negotiation_flags_indicate_up, 0xce0, 0x20, true, 0x7cdbaca45cf6aaaf)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_FILTER_BLOCK.NextRequestHandle", next_request_handle, 0xd00, 0x40, true, 0x60c398af35d438aa)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::iterative_data_path_tracker_entry_t, 4>*), "_NDIS_FILTER_BLOCK.IterativeDataPathTracker", iterative_data_path_tracker, 0xd40, 0x40, true, 0x59f71557141df09e)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_FILTER_BLOCK.NextSendNetBufferListsHandler", next_send_net_buffer_lists_handler, 0xd80, 0x40, true, 0xdcef83544d35264a)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_FILTER_BLOCK.NextSendNetBufferListsContext", next_send_net_buffer_lists_context, 0xdc0, 0x40, true, 0x6b636c0926db11e4)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_FILTER_BLOCK.NextSendNetBufferListsTracker", next_send_net_buffer_lists_tracker, 0xe00, 0x40, true, 0xe6ff6322ec16118d)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t*), "_NDIS_FILTER_BLOCK.NextSendNetBufferListsObject", next_send_net_buffer_lists_object, 0xe40, 0x40, true, 0x5ebda7ed9629757)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_FILTER_BLOCK.NextSendNetBufferListsCompleteHandler", next_send_net_buffer_lists_complete_handler, 0xe80, 0x40, true, 0x8b3a6c3a51f1d9ea)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_FILTER_BLOCK.NextSendNetBufferListsCompleteContext", next_send_net_buffer_lists_complete_context, 0xec0, 0x40, true, 0xce331f9a7f03de8e)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_FILTER_BLOCK.NextSendNetBufferListsCompleteTracker", next_send_net_buffer_lists_complete_tracker, 0xf00, 0x40, true, 0x9f3715e8abe892e1)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t*), "_NDIS_FILTER_BLOCK.NextSendNetBufferListsCompleteObject", next_send_net_buffer_lists_complete_object, 0xf40, 0x40, true, 0x9a6edaaaff93bdeb)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_FILTER_BLOCK.NextIndicateReceiveNetBufferListsHandler", next_indicate_receive_net_buffer_lists_handler, 0xf80, 0x40, true, 0x3b6e7569b8f13841)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_FILTER_BLOCK.NextIndicateReceiveNetBufferListsContext", next_indicate_receive_net_buffer_lists_context, 0xfc0, 0x40, true, 0xb53820fc2dceab6d)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_FILTER_BLOCK.NextIndicateReceiveNetBufferListsTracker", next_indicate_receive_net_buffer_lists_tracker, 0x1000, 0x40, true, 0x63305d5c734fb53f)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t*), "_NDIS_FILTER_BLOCK.NextIndicateReceiveNetBufferListsObject", next_indicate_receive_net_buffer_lists_object, 0x1040, 0x40, true, 0x202a4789da60f8a0)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_FILTER_BLOCK.NextReturnNetBufferListsHandler", next_return_net_buffer_lists_handler, 0x1080, 0x40, true, 0xe04a2b532391fa82)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_FILTER_BLOCK.NextReturnNetBufferListsContext", next_return_net_buffer_lists_context, 0x10c0, 0x40, true, 0xc1b7fb0e22a0aa5e)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_FILTER_BLOCK.NextReturnNetBufferListsTracker", next_return_net_buffer_lists_tracker, 0x1100, 0x40, true, 0x53d04b7e360b14fb)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t*), "_NDIS_FILTER_BLOCK.NextReturnNetBufferListsObject", next_return_net_buffer_lists_object, 0x1140, 0x40, true, 0x86e1bdfe3b225456)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_FILTER_BLOCK.NextCancelSendNetBufferListsHandler", next_cancel_send_net_buffer_lists_handler, 0x1180, 0x40, true, 0x6678a3b16815eda3)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_FILTER_BLOCK.NextCancelSendNetBufferListsContext", next_cancel_send_net_buffer_lists_context, 0x11c0, 0x40, true, 0x472d889000fe92d8)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_partial_characteristics_t), "_NDIS_FILTER_BLOCK.Characteristics", characteristics, 0x1200, 0x80, true, 0x29421c8afda42400)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_FILTER_BLOCK.FilterSendNetBufferListsHandler", filter_send_net_buffer_lists_handler, 0x1380, 0x40, true, 0xc5f0bf50cc38c67c)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_FILTER_BLOCK.FilterIndicateReceiveNetBufferListsHandler", filter_indicate_receive_net_buffer_lists_handler, 0x13c0, 0x40, true, 0xe7e0746eec51afe8)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_FILTER_BLOCK.FilterCancelSendNetBufferListsHandler", filter_cancel_send_net_buffer_lists_handler, 0x1400, 0x40, true, 0x7161f1a2c61c1690)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_FILTER_BLOCK.NblTracker", nbl_tracker, 0x1480, 0x40, true, 0x2b70e3342bca6357)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_task_offload_t*), "_NDIS_FILTER_BLOCK.Offload", offload, 0x14c0, 0x40, true, 0xc76e17a415b20abe)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_FILTER_BLOCK.InterfaceGuid", interface_guid, 0x1500, 0x80, true, 0xfcf34bc17b8b4765)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_BLOCK.IfIndex", if_index, 0x1580, 0x20, true, 0x1f2a38fdc78b3d6c)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_block_t*), "_NDIS_FILTER_BLOCK.IfBlock", if_block, 0x15c0, 0x40, true, 0x3fa95df3975382c4)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_FILTER_BLOCK.NextDirectRequestHandle", next_direct_request_handle, 0x1600, 0x40, true, 0xe000e43f278e662e)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_BLOCK.DirectOidRequestCount", direct_oid_request_count, 0x1640, 0x20, true, 0xf5033b6937d68de2)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_FILTER_BLOCK.WOLPatternList", wol_pattern_list, 0x1680, 0x40, true, 0x31c8d4b27d2f4492)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_FILTER_BLOCK.PMProtocolOffloadList", pm_protocol_offload_list, 0x16c0, 0x40, true, 0xbc18427f10eff26a)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_parameters_t), "_NDIS_FILTER_BLOCK.PMCurrentParameters", pm_current_parameters, 0x1700, 0xa0, true, 0x80381762ee3ff25c)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::bind_filter_link_t*), "_NDIS_FILTER_BLOCK.Bind", bind, 0x17c0, 0x40, true, 0x16e867bc0e68fbbd)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_FILTER_BLOCK.VerifierContext", verifier_context, 0x1880, 0x40, true, 0x1098750997cc416)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timestamp_capabilities_t*), "_NDIS_FILTER_BLOCK.HwTimestampCapabilities", hw_timestamp_capabilities, 0x1800, 0x40, true, 0xf92e40dcffa4b77a)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timestamp_capabilities_t*), "_NDIS_FILTER_BLOCK.HwTimestampCurrentConfig", hw_timestamp_current_config, 0x1840, 0x40, true, 0xffd7fca19734e23d)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pktmon_component_context_t), "_NDIS_FILTER_BLOCK.PktMonComp", pkt_mon_comp, 0x18c0, 0x80, true, 0x82cf5f62797a2293)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pktmon_edge_context_t), "_NDIS_FILTER_BLOCK.PktMonEdgeLower", pkt_mon_edge_lower, 0x1940, 0xc0, true, 0x3bea1419ba9f2cc4)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pktmon_edge_context_t), "_NDIS_FILTER_BLOCK.PktMonEdgeUpper", pkt_mon_edge_upper, 0x1a00, 0xc0, true, 0xf8daf369f6f3ddc6)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_FILTER_BLOCK.TcpOffloadReceiveReturnHandler", tcp_offload_receive_return_handler, 0x1440, 0x40, true, 0x28e088f450e461d2)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_BLOCK.LockDbg", lock_dbg, 0x0, 0x0, false, 0x5ca253437358a142)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_FILTER_BLOCK.InitiateOffloadCompleteHandler", initiate_offload_complete_handler, 0x0, 0x0, false, 0x8890f9587493775a)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_FILTER_BLOCK.TerminateOffloadCompleteHandler", terminate_offload_complete_handler, 0x0, 0x0, false, 0x9b82b31b0995a94d)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_FILTER_BLOCK.UpdateOffloadCompleteHandler", update_offload_complete_handler, 0x0, 0x0, false, 0xe7af01c54da3a9cb)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_FILTER_BLOCK.InvalidateOffloadCompleteHandler", invalidate_offload_complete_handler, 0x0, 0x0, false, 0x4e24ec3296bc0c3a)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_FILTER_BLOCK.QueryOffloadCompleteHandler", query_offload_complete_handler, 0x0, 0x0, false, 0x546051e943b3919e)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*, uint32_t)>*), "_NDIS_FILTER_BLOCK.IndicateOffloadEventHandler", indicate_offload_event_handler, 0x0, 0x0, false, 0x29b25e3a7fc1523c)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_FILTER_BLOCK.TcpOffloadSendCompleteHandler", tcp_offload_send_complete_handler, 0x0, 0x0, false, 0xc7330156863f30a4)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_FILTER_BLOCK.TcpOffloadReceiveCompleteHandler", tcp_offload_receive_complete_handler, 0x0, 0x0, false, 0x45b8e38162503804)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_FILTER_BLOCK.TcpOffloadDisconnectCompleteHandler", tcp_offload_disconnect_complete_handler, 0x0, 0x0, false, 0x7a21eb3d923b0163)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_FILTER_BLOCK.TcpOffloadForwardCompleteHandler", tcp_offload_forward_complete_handler, 0x0, 0x0, false, 0x6c77eae738fd7eff)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_NDIS_FILTER_BLOCK.TcpOffloadEventHandler", tcp_offload_event_handler, 0x0, 0x0, false, 0x2f09c1d186eabf39)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*), "_NDIS_FILTER_BLOCK.TcpOffloadReceiveIndicateHandler", tcp_offload_receive_indicate_handler, 0x0, 0x0, false, 0xc51e90a7914dddb0)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_FILTER_BLOCK.InitiateOffloadHandler", initiate_offload_handler, 0x0, 0x0, false, 0x953fa7e9985c783f)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_FILTER_BLOCK.TerminateOffloadHandler", terminate_offload_handler, 0x0, 0x0, false, 0x80e6952e8e77742d)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_FILTER_BLOCK.UpdateOffloadHandler", update_offload_handler, 0x0, 0x0, false, 0xfbf5aa82eb06edfe)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_FILTER_BLOCK.InvalidateOffloadHandler", invalidate_offload_handler, 0x0, 0x0, false, 0x290ff1acc396c723)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_FILTER_BLOCK.QueryOffloadHandler", query_offload_handler, 0x0, 0x0, false, 0x77b9315e194bd145)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_NDIS_FILTER_BLOCK.StackExpansionFallback.WorkItem", work_item, 0x0, 0x0, true, 0x2e8335abd58824f5)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_FILTER_BLOCK.StackExpansionFallback.WorkItemQueued", work_item_queued, 0x100, 0x8, true, 0x3d5130e84cad3125)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pending_stack_expansion_fallback_work_t), "_NDIS_FILTER_BLOCK.StackExpansionFallback.PendingWork", pending_work, 0x140, 0xc0, true, 0x444cf2bb0aebafe2)
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
#define _m082
#define _m083
#define _m084
#define _m085
#define _m086
#define _m087
#define _m088
#define _m089
#define _m090
#define _m091
#define _m092
#define _m093
#define _m094
#define _m095
#define _m096
#define _m097
#define _m098
#define _m099
#define _m100
#define _m101
#define _m102
#define _m103
#define _m104
#define _m20
#define _m21
#define _m22
#endif