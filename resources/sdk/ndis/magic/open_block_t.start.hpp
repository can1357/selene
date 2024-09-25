#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_BLOCK.MacHandle", mac_handle, 0x0, 0x40, true, 0x91b41c7e8a39f64e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_OPEN_BLOCK.Header", header, 0x0, 0x20, true, 0xf44bcd51d7eca3d0)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_BLOCK.BindingHandle", binding_handle, 0x40, 0x40, true, 0x811e1805c9494037)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_OPEN_BLOCK.MiniportHandle", miniport_handle, 0x80, 0x40, true, 0x15da2625d862405b)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::protocol_block_t*), "_NDIS_OPEN_BLOCK.ProtocolHandle", protocol_handle, 0xc0, 0x40, true, 0xc2f70a82dc22f777)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_BLOCK.ProtocolBindingContext", protocol_binding_context, 0x100, 0x40, true, 0xb8e9c2074e16170f)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_OPEN_BLOCK.NextSendHandler", next_send_handler, 0x140, 0x40, true, 0x994cc7cc4622262b)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_BLOCK.NextSendContext", next_send_context, 0x180, 0x40, true, 0xd11dae8547be623e)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_BLOCK.MiniportAdapterContext", miniport_adapter_context, 0x1c0, 0x40, true, 0x8b66c02cba83e83)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_OPEN_BLOCK.CallingFromNdis6Protocol", calling_from_ndis6_protocol, 0x208, 0x8, true, 0x619ad338ef342a7c)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_OPEN_BLOCK.NextReturnNetBufferListsHandler", next_return_net_buffer_lists_handler, 0x240, 0x40, true, 0x5183f6186b435296)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_BLOCK.NextReturnNetBufferListsContext", next_return_net_buffer_lists_context, 0x2c0, 0x40, true, 0x52cd24eb08ed61d5)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*)>*), "_NDIS_OPEN_BLOCK.SendHandler", send_handler, 0x300, 0x40, true, 0xdf17391a7b7f021d)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*)>*), "_NDIS_OPEN_BLOCK.WanSendHandler", wan_send_handler, 0x300, 0x40, true, 0x5348bb361ce51758)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t, uint32_t, struct ndis::packet_t*, uint32_t*)>*), "_NDIS_OPEN_BLOCK.TransferDataHandler", transfer_data_handler, 0x340, 0x40, true, 0x7981954595ee27f3)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*), "_NDIS_OPEN_BLOCK.SendCompleteHandler", send_complete_handler, 0x380, 0x40, true, 0x5134b5b28fcf9a9d)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t, uint32_t)>*), "_NDIS_OPEN_BLOCK.TransferDataCompleteHandler", transfer_data_complete_handler, 0x3c0, 0x40, true, 0x3081425033a8c25d)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint32_t, void*, uint32_t, uint32_t)>*), "_NDIS_OPEN_BLOCK.ReceiveHandler", receive_handler, 0x400, 0x40, true, 0xc6ba6dcaf5c429cb)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_OPEN_BLOCK.ReceiveCompleteHandler", receive_complete_handler, 0x440, 0x40, true, 0x6cf3025f4a4399b5)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*, uint32_t)>*), "_NDIS_OPEN_BLOCK.WanReceiveHandler", wan_receive_handler, 0x480, 0x40, true, 0xf2bbb511d06a6f98)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::request_t*, int32_t)>*), "_NDIS_OPEN_BLOCK.RequestCompleteHandler", request_complete_handler, 0x4c0, 0x40, true, 0xe7bc1627468368f6)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*)>*), "_NDIS_OPEN_BLOCK.ReceivePacketHandler", receive_packet_handler, 0x500, 0x40, true, 0xc1e8d53a24b493a7)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_OPEN_BLOCK.SendPacketsHandler", send_packets_handler, 0x540, 0x40, true, 0x55f83a73c8ca6cab)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_OPEN_BLOCK.ResetHandler", reset_handler, 0x580, 0x40, true, 0xcb07f5c368be9663)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::request_t*)>*), "_NDIS_OPEN_BLOCK.RequestHandler", request_handler, 0x5c0, 0x40, true, 0x5287abc03ff2dd14)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*), "_NDIS_OPEN_BLOCK.OidRequestHandler", oid_request_handler, 0x600, 0x40, true, 0x22441c0d28ae8364)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS_OPEN_BLOCK.ResetCompleteHandler", reset_complete_handler, 0x640, 0x40, true, 0x95e2622b3311d5e)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t, void*, uint32_t)>*), "_NDIS_OPEN_BLOCK.StatusHandler", status_handler, 0x680, 0x40, true, 0xe9cb11d5f240b8ca)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::status_indication_t*)>*), "_NDIS_OPEN_BLOCK.StatusHandlerEx", status_handler_ex, 0x680, 0x40, true, 0xaad3cad9ddab6ffe)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_OPEN_BLOCK.StatusCompleteHandler", status_complete_handler, 0x6c0, 0x40, true, 0xc3df705b88c566ef)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_NDIS_OPEN_BLOCK.OpenFlags", open_flags, 0x700, 0x20, true, 0x85f958861268eca2)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_OPEN_BLOCK.References", references, 0x720, 0x20, true, 0x1d618dc0dcc9e826)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_OPEN_BLOCK.SpinLock", spin_lock, 0x740, 0x40, true, 0x98d07839ddc22760)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_BLOCK.FilterHandle", filter_handle, 0x780, 0x40, true, 0xa75d7e86c4647fd9)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.FrameTypeArraySize", frame_type_array_size, 0x7c0, 0x20, true, 0x817e1647a7daa119)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 4>), "_NDIS_OPEN_BLOCK.FrameTypeArray", frame_type_array, 0x7e0, 0x40, true, 0x17d795528119fd90)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.ProtocolOptions", protocol_options, 0x820, 0x20, true, 0x2fc7b0da600282ed)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.CurrentLookahead", current_lookahead, 0x840, 0x20, true, 0x2b1182ae3709d330)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*, uint32_t)>*), "_NDIS_OPEN_BLOCK.WSendHandler", w_send_handler, 0x880, 0x40, true, 0x4eae862993dca50b)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::packet_t*, uint32_t*, void*, void*, uint32_t, uint32_t)>*), "_NDIS_OPEN_BLOCK.WTransferDataHandler", w_transfer_data_handler, 0x8c0, 0x40, true, 0xc2c9274079a7ee98)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_OPEN_BLOCK.WSendPacketsHandler", w_send_packets_handler, 0x900, 0x40, true, 0xb13316754f697f81)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_OPEN_BLOCK.CancelSendPacketsHandler", cancel_send_packets_handler, 0x940, 0x40, true, 0x741bc358302d74e1)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.WakeUpEnable", wake_up_enable, 0x980, 0x20, true, 0x5a3249f9b9b8e388)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_parameters_t), "_NDIS_OPEN_BLOCK.PMCurrentParameters", pm_current_parameters, 0x9a0, 0xa0, true, 0x898be82d387fb69c)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_OPEN_BLOCK.CloseCompleteEvent", close_complete_event, 0xa40, 0x40, true, 0x2368d8bb468952a1)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_OPEN_BLOCK.AfReferences", af_references, 0xbc0, 0x20, true, 0x8f9d94dccf9ef95f)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_OPEN_BLOCK.NextGlobalOpen", next_global_open, 0xc00, 0x40, true, 0x6f287ec55fd9b120)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_OPEN_BLOCK.MiniportNextOpen", miniport_next_open, 0xc40, 0x40, true, 0x1860001aa3ef3bc3)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_OPEN_BLOCK.ProtocolNextOpen", protocol_next_open, 0xc80, 0x40, true, 0xa26bacfd9f40463e)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_OPEN_BLOCK.BindDeviceName", bind_device_name, 0xcc0, 0x40, true, 0x45e4eb46cd8f1626)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_OPEN_BLOCK.RootDeviceName", root_device_name, 0xd00, 0x40, true, 0xdfc10d1e22ce4692)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_OPEN_BLOCK.FilterNextOpen", filter_next_open, 0xd40, 0x40, true, 0x444b7048938a48a8)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.PacketFilters", packet_filters, 0xd80, 0x20, true, 0x9fd2309c8fcd73fb)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.OldPacketFilters", old_packet_filters, 0xda0, 0x20, true, 0xa0cc3cfc7cfbcc31)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.MaxMulticastAddresses", max_multicast_addresses, 0xdc0, 0x20, true, 0xdb20507b9608ae33)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::eth_multicast_wrapper_t*), "_NDIS_OPEN_BLOCK.MCastAddressBuf", m_cast_address_buf, 0xe00, 0x40, true, 0x702e56cd9c0731e2)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.NumAddresses", num_addresses, 0xe40, 0x20, true, 0x7225fa793bf84d3d)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::eth_multicast_wrapper_t*), "_NDIS_OPEN_BLOCK.OldMCastAddressBuf", old_m_cast_address_buf, 0xe80, 0x40, true, 0xf021fd49c5fb215c)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.OldNumAddresses", old_num_addresses, 0xec0, 0x20, true, 0x3ed73a76f7dab829)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_OPEN_BLOCK.RssParametersBuffer", rss_parameters_buffer, 0xf00, 0x40, true, 0xd656ecc5fdbbad1a)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_scale_parameters_t*), "_NDIS_OPEN_BLOCK.NdisRSSParameters", ndis_rss_parameters, 0xf40, 0x40, true, 0xc281762186e79ebf)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_OPEN_BLOCK.PatternList", pattern_list, 0xf80, 0x40, true, 0xeb6ca906bfa9ceb5)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_OPEN_BLOCK.WOLPatternList", wol_pattern_list, 0xfc0, 0x40, true, 0xe421ad57bc5be97b)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_OPEN_BLOCK.PMProtocolOffloadList", pm_protocol_offload_list, 0x1000, 0x40, true, 0x74bda6cfb4d6a00d)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_OPEN_BLOCK.ProtSendNetBufferListsComplete", prot_send_net_buffer_lists_complete, 0x1040, 0x40, true, 0xc766f9519ee83192)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_BLOCK.SendCompleteNdisPacketContext", send_complete_ndis_packet_context, 0x1080, 0x40, true, 0xa035867fc8d057dd)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_BLOCK.SendCompleteNetBufferListsContext", send_complete_net_buffer_lists_context, 0x10c0, 0x40, true, 0x9e6e7506d6fd054b)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_OPEN_BLOCK.ReceiveNetBufferLists", receive_net_buffer_lists, 0x1100, 0x40, true, 0x1110311c700ea199)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_BLOCK.ReceiveNetBufferListsContext", receive_net_buffer_lists_context, 0x1140, 0x40, true, 0x3554b53cebfe3b26)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_OPEN_BLOCK.SavedSendPacketsHandler", saved_send_packets_handler, 0x1180, 0x40, true, 0x2836c79ed84c7e08)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_OPEN_BLOCK.SavedCancelSendPacketsHandler", saved_cancel_send_packets_handler, 0x11c0, 0x40, true, 0x137f0a2075a3aa38)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*)>*), "_NDIS_OPEN_BLOCK.SavedSendHandler", saved_send_handler, 0x1200, 0x40, true, 0x7f242ff91ef25a93)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_OPEN_BLOCK.NblTracker", nbl_tracker, 0x1240, 0x40, true, 0xc3b7d14e6955dc7f)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::refcount_handle_t*), "_NDIS_OPEN_BLOCK.RefCountTracker", ref_count_tracker, 0x1280, 0x40, true, 0x175b5dfd7324efe8)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_OPEN_BLOCK.RefCountLock", ref_count_lock, 0x12c0, 0x40, true, 0xae986cb38d42300d)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.ProtocolMajorVersion", protocol_major_version, 0x1300, 0x20, true, 0xcd9e32cf37250beb)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_NDIS_OPEN_BLOCK.IfBlock", if_block, 0x1340, 0x40, true, 0x5a4c8f95a83cac8b)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::spin_lock_t), "_NDIS_OPEN_BLOCK.PnPStateLock", pn_p_state_lock, 0x1380, 0x80, true, 0xef769b72e3c79d31)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::ndis5_driver_state_t), "_NDIS_OPEN_BLOCK.PnPState", pn_p_state, 0x1400, 0x20, true, 0xa4796f0d8bb6667e)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_OPEN_BLOCK.OutstandingSends", outstanding_sends, 0x1420, 0x20, true, 0x39c9409609f946b5)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::event_t), "_NDIS_OPEN_BLOCK.PauseEvent", pause_event, 0x1440, 0xc0, true, 0x29267bdc5bc1cbfb)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*)>*), "_NDIS_OPEN_BLOCK.Ndis5WanSendHandler", ndis5_wan_send_handler, 0x1500, 0x40, true, 0x67a8edf704ffe404)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*), "_NDIS_OPEN_BLOCK.ProtSendCompleteHandler", prot_send_complete_handler, 0x1540, 0x40, true, 0x2c50c0049d369c89)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*), "_NDIS_OPEN_BLOCK.OidRequestCompleteHandler", oid_request_complete_handler, 0x1580, 0x40, true, 0x1ad2a4fc2112ec4a)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_offload_t*), "_NDIS_OPEN_BLOCK.Offload", offload, 0x15c0, 0x40, true, 0x8d71fe5ef4ec132e)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::status_unbind_workitem_t*), "_NDIS_OPEN_BLOCK.StatusUnbindWorkItem", status_unbind_work_item, 0x1600, 0x40, true, 0x991881a11ad0d0e7)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_OPEN_BLOCK.DpcStartCycle", dpc_start_cycle, 0x1640, 0x40, true, 0x1b9cc0991af58a34)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pndis_per_processor_slot_t*), "_NDIS_OPEN_BLOCK.ReceivedAPacketSlot", received_a_packet_slot, 0x1680, 0x40, true, 0x7071c0f95c642efe)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*), "_NDIS_OPEN_BLOCK.DirectOidRequestHandler", direct_oid_request_handler, 0x16c0, 0x40, true, 0x80df9a304279d153)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_OPEN_BLOCK.ReceiveQueueList", receive_queue_list, 0x1700, 0x80, true, 0x96f6b20a35a59bac)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.NumReceiveQueues", num_receive_queues, 0x1780, 0x20, true, 0x889f3755e8f7a395)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_OPEN_BLOCK.SharedMemoryBlockList", shared_memory_block_list, 0x17c0, 0x80, true, 0xae85de401ce9e88f)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::shared_memory_parameters_t*, void**)>*), "_NDIS_OPEN_BLOCK.AllocateSharedMemoryHandler", allocate_shared_memory_handler, 0x1840, 0x40, true, 0xbc3e02a40a705a26)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_OPEN_BLOCK.FreeSharedMemoryHandler", free_shared_memory_handler, 0x1880, 0x40, true, 0x2f5e5ff4b24dfdcf)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_OPEN_BLOCK.AllocateSharedMemoryContext", allocate_shared_memory_context, 0x18c0, 0x40, true, 0x722dbd51cc939a3d)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.NumAllocatedVFs", num_allocated_v_fs, 0x1900, 0x20, true, 0x95b506014eefeb59)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_OPEN_BLOCK.VFList", vf_list, 0x1940, 0x80, true, 0x3dfeaa9d11cb380a)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.NumActiveVPorts", num_active_v_ports, 0x19c0, 0x20, true, 0xfb23b5abcb9848ae)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_OPEN_BLOCK.VPortList", v_port_list, 0x1a00, 0x80, true, 0x990eca45ec1702f1)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OPEN_BLOCK.AoAcReferences", ao_ac_references, 0x1a80, 0x20, true, 0x6e5b77e6a2bfe9a2)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::bind_protocol_link_t*), "_NDIS_OPEN_BLOCK.Bind", bind, 0x1ac0, 0x40, true, 0xf22222dbcbb48527)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_NDIS_OPEN_BLOCK.UnsolicitedUnbindComplete", unsolicited_unbind_complete, 0x1b00, 0x0, true, 0x5ef4010e17e6f2f4)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_OPEN_BLOCK.UnsolicitedUnbindEvent", unsolicited_unbind_event, 0x1c00, 0x40, true, 0x8a172765be674865)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_OPEN_BLOCK.PendingLegacyUnbind", pending_legacy_unbind, 0x1c40, 0x8, true, 0x257827c624d3c2ef)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_OPEN_BLOCK.WaitNetPnpEvent", wait_net_pnp_event, 0x1c80, 0x40, true, 0x8ea2eb50ebfb041a)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_af_block_t*), "_NDIS_OPEN_BLOCK.NextAf", next_af, 0x1e00, 0x40, true, 0xc9027205a659c11a)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**)>*), "_NDIS_OPEN_BLOCK.MiniportCoCreateVcHandler", miniport_co_create_vc_handler, 0x1e40, 0x40, true, 0xd7229209b1001200)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::request_t*)>*), "_NDIS_OPEN_BLOCK.MiniportCoRequestHandler", miniport_co_request_handler, 0x1e80, 0x40, true, 0xd1bad5514808d8c2)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**)>*), "_NDIS_OPEN_BLOCK.CoCreateVcHandler", co_create_vc_handler, 0x1ec0, 0x40, true, 0xe195b4caaaa9d0f5)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_OPEN_BLOCK.CoDeleteVcHandler", co_delete_vc_handler, 0x1f00, 0x40, true, 0x2e781ce898ebf692)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_OPEN_BLOCK.CmActivateVcCompleteHandler", cm_activate_vc_complete_handler, 0x1f40, 0x40, true, 0x71a1941ec0b74cbc)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*)>*), "_NDIS_OPEN_BLOCK.CmDeactivateVcCompleteHandler", cm_deactivate_vc_complete_handler, 0x1f80, 0x40, true, 0x5535915614d6dceb)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, void*, void*, struct ndis::request_t*)>*), "_NDIS_OPEN_BLOCK.CoRequestCompleteHandler", co_request_complete_handler, 0x1fc0, 0x40, true, 0x6f89fc73816ab8c6)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, struct ndis::request_t*)>*), "_NDIS_OPEN_BLOCK.CoRequestHandler", co_request_handler, 0x2000, 0x40, true, 0x16fb6430d0591cf)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_OPEN_BLOCK.ActiveVcHead", active_vc_head, 0x2040, 0x80, true, 0x46fc94bf98ea1b35)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_OPEN_BLOCK.InactiveVcHead", inactive_vc_head, 0x20c0, 0x80, true, 0x4ca5a44181b9bad6)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_OPEN_BLOCK.PendingAfNotifications", pending_af_notifications, 0x2140, 0x20, true, 0xd95751b77a4f6d8b)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_OPEN_BLOCK.AfNotifyCompleteEvent", af_notify_complete_event, 0x2180, 0x40, true, 0xc3040efda1a28046)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::oid_request_t*)>*), "_NDIS_OPEN_BLOCK.MiniportCoOidRequestHandler", miniport_co_oid_request_handler, 0x21c0, 0x40, true, 0x2594b6c7839994ee)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, void*, struct ndis::oid_request_t*, int32_t)>*), "_NDIS_OPEN_BLOCK.CoOidRequestCompleteHandler", co_oid_request_complete_handler, 0x2200, 0x40, true, 0x3adc6db76c001c9f)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, struct ndis::oid_request_t*)>*), "_NDIS_OPEN_BLOCK.CoOidRequestHandler", co_oid_request_handler, 0x2240, 0x40, true, 0xf678c71aa3809469)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pktmon_component_context_t), "_NDIS_OPEN_BLOCK.PktMonComp", pkt_mon_comp, 0x1cc0, 0x80, true, 0x91f559192c7e9f19)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pktmon_edge_context_t), "_NDIS_OPEN_BLOCK.PktMonEdge", pkt_mon_edge, 0x1d40, 0xc0, true, 0x712ab51efc9a798)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::queued_close_t), "_NDIS_OPEN_BLOCK.QC", qc, 0x0, 0x0, false, 0xf22a081bce4bc42c)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_OPEN_BLOCK.InitiateOffloadCompleteHandler", initiate_offload_complete_handler, 0x0, 0x0, false, 0x7fb2a794f9a7c082)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_OPEN_BLOCK.TerminateOffloadCompleteHandler", terminate_offload_complete_handler, 0x0, 0x0, false, 0x38007da1f5eb7fe9)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_OPEN_BLOCK.UpdateOffloadCompleteHandler", update_offload_complete_handler, 0x0, 0x0, false, 0x11dd4ec28212198e)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_OPEN_BLOCK.InvalidateOffloadCompleteHandler", invalidate_offload_complete_handler, 0x0, 0x0, false, 0x3327977a43e92873)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_OPEN_BLOCK.QueryOffloadCompleteHandler", query_offload_complete_handler, 0x0, 0x0, false, 0x1eff78032b351e6b)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*, uint32_t)>*), "_NDIS_OPEN_BLOCK.IndicateOffloadEventHandler", indicate_offload_event_handler, 0x0, 0x0, false, 0xb3419f034a4dd49)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_OPEN_BLOCK.TcpOffloadSendCompleteHandler", tcp_offload_send_complete_handler, 0x0, 0x0, false, 0x137caece336b3cc)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_OPEN_BLOCK.TcpOffloadReceiveCompleteHandler", tcp_offload_receive_complete_handler, 0x0, 0x0, false, 0x58baca520f6c4ab8)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_OPEN_BLOCK.TcpOffloadDisconnectCompleteHandler", tcp_offload_disconnect_complete_handler, 0x0, 0x0, false, 0xf75d72cdf78bfaab)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_OPEN_BLOCK.TcpOffloadForwardCompleteHandler", tcp_offload_forward_complete_handler, 0x0, 0x0, false, 0x5f95de01112f5030)
#define _m134 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_NDIS_OPEN_BLOCK.TcpOffloadEventHandler", tcp_offload_event_handler, 0x0, 0x0, false, 0xb283ca0f6b03af88)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*), "_NDIS_OPEN_BLOCK.TcpOffloadReceiveIndicateHandler", tcp_offload_receive_indicate_handler, 0x0, 0x0, false, 0x10365e5fc8749457)
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
#define _m105
#define _m106
#define _m107
#define _m108
#define _m109
#define _m110
#define _m111
#define _m112
#define _m113
#define _m114
#define _m115
#define _m116
#define _m117
#define _m118
#define _m119
#define _m120
#define _m121
#define _m122
#define _m123
#define _m124
#define _m125
#define _m126
#define _m127
#define _m128
#define _m129
#define _m130
#define _m131
#define _m132
#define _m133
#define _m134
#define _m135
#endif