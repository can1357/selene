#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_COMMON_OPEN_BLOCK.MacHandle", mac_handle, 0x0, 0x40, true, 0x6393ba89e47349a8)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_COMMON_OPEN_BLOCK.Header", header, 0x0, 0x20, true, 0xf85a66df285565c5)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_COMMON_OPEN_BLOCK.BindingHandle", binding_handle, 0x40, 0x40, true, 0xab3517e9d01f7d44)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_COMMON_OPEN_BLOCK.MiniportHandle", miniport_handle, 0x80, 0x40, true, 0x8d22f789341ea0d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::protocol_block_t*), "_NDIS_COMMON_OPEN_BLOCK.ProtocolHandle", protocol_handle, 0xc0, 0x40, true, 0xde1d6f717b32dfcc)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_COMMON_OPEN_BLOCK.ProtocolBindingContext", protocol_binding_context, 0x100, 0x40, true, 0x96ac6071ecbe36f)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.NextSendHandler", next_send_handler, 0x140, 0x40, true, 0xf2dbcafd37170607)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_COMMON_OPEN_BLOCK.NextSendContext", next_send_context, 0x180, 0x40, true, 0xfdc069eb45f8ed9b)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_COMMON_OPEN_BLOCK.MiniportAdapterContext", miniport_adapter_context, 0x1c0, 0x40, true, 0x449d0da3b3c01afd)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_COMMON_OPEN_BLOCK.CallingFromNdis6Protocol", calling_from_ndis6_protocol, 0x208, 0x8, true, 0xde501cd680261f97)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.NextReturnNetBufferListsHandler", next_return_net_buffer_lists_handler, 0x240, 0x40, true, 0xe91fb9e2b1552cef)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_COMMON_OPEN_BLOCK.NextReturnNetBufferListsContext", next_return_net_buffer_lists_context, 0x2c0, 0x40, true, 0x8500951c6663f9c8)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.SendHandler", send_handler, 0x300, 0x40, true, 0xdd505ceeab377d59)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*)>*), "_NDIS_COMMON_OPEN_BLOCK.WanSendHandler", wan_send_handler, 0x300, 0x40, true, 0xa3673268504f061d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, uint32_t, uint32_t, struct ndis::packet_t*, uint32_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.TransferDataHandler", transfer_data_handler, 0x340, 0x40, true, 0xe41a38d9559c7014)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.SendCompleteHandler", send_complete_handler, 0x380, 0x40, true, 0x9e2a6dd3c5df43b5)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.TransferDataCompleteHandler", transfer_data_complete_handler, 0x3c0, 0x40, true, 0xfdd75c5e0d10236b)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint32_t, void*, uint32_t, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.ReceiveHandler", receive_handler, 0x400, 0x40, true, 0x272def912eb96a3e)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_COMMON_OPEN_BLOCK.ReceiveCompleteHandler", receive_complete_handler, 0x440, 0x40, true, 0xef6581049d42fb04)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.WanReceiveHandler", wan_receive_handler, 0x480, 0x40, true, 0x4275360a7f28e115)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::request_t*, int32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.RequestCompleteHandler", request_complete_handler, 0x4c0, 0x40, true, 0x35726742290a60b3)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.ReceivePacketHandler", receive_packet_handler, 0x500, 0x40, true, 0x5bd8a8fcd6b0c4df)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.SendPacketsHandler", send_packets_handler, 0x540, 0x40, true, 0xa6697458b0c96d5d)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_COMMON_OPEN_BLOCK.ResetHandler", reset_handler, 0x580, 0x40, true, 0x18894a30fbea76c2)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::request_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.RequestHandler", request_handler, 0x5c0, 0x40, true, 0xbabead809e3aca7e)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.OidRequestHandler", oid_request_handler, 0x600, 0x40, true, 0xdf58375781ba9f5f)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.ResetCompleteHandler", reset_complete_handler, 0x640, 0x40, true, 0xdb1a8bed409278de)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t, void*, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.StatusHandler", status_handler, 0x680, 0x40, true, 0x4671d9360f2050f7)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::status_indication_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.StatusHandlerEx", status_handler_ex, 0x680, 0x40, true, 0x10aece7f1d80ccbd)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_COMMON_OPEN_BLOCK.StatusCompleteHandler", status_complete_handler, 0x6c0, 0x40, true, 0x2af157bdb1002660)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_NDIS_COMMON_OPEN_BLOCK.OpenFlags", open_flags, 0x700, 0x20, true, 0x55eb8632d288ef2a)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_COMMON_OPEN_BLOCK.References", references, 0x720, 0x20, true, 0x2f61ff7456e50ea9)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_COMMON_OPEN_BLOCK.SpinLock", spin_lock, 0x740, 0x40, true, 0xfd9827500d808047)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_COMMON_OPEN_BLOCK.FilterHandle", filter_handle, 0x780, 0x40, true, 0x4bbedfab3601444)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.FrameTypeArraySize", frame_type_array_size, 0x7c0, 0x20, true, 0xfebea5af38e2041c)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 4>), "_NDIS_COMMON_OPEN_BLOCK.FrameTypeArray", frame_type_array, 0x7e0, 0x40, true, 0xb527b851c52a49fe)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.ProtocolOptions", protocol_options, 0x820, 0x20, true, 0x9836508a409dbb1a)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.CurrentLookahead", current_lookahead, 0x840, 0x20, true, 0x7e9aac9e346a084)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.WSendHandler", w_send_handler, 0x880, 0x40, true, 0x5ac4a4c4f34c8798)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::packet_t*, uint32_t*, void*, void*, uint32_t, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.WTransferDataHandler", w_transfer_data_handler, 0x8c0, 0x40, true, 0x707621ea87887c)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.WSendPacketsHandler", w_send_packets_handler, 0x900, 0x40, true, 0xdb92b8e8bc838240)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_COMMON_OPEN_BLOCK.CancelSendPacketsHandler", cancel_send_packets_handler, 0x940, 0x40, true, 0x1541daa879f75159)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.WakeUpEnable", wake_up_enable, 0x980, 0x20, true, 0xcdf343a881f87f6a)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_parameters_t), "_NDIS_COMMON_OPEN_BLOCK.PMCurrentParameters", pm_current_parameters, 0x9a0, 0xa0, true, 0x8bf7e256cfdd145d)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_COMMON_OPEN_BLOCK.CloseCompleteEvent", close_complete_event, 0xa40, 0x40, true, 0xbf52d63cf584cbbc)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_COMMON_OPEN_BLOCK.AfReferences", af_references, 0xbc0, 0x20, true, 0x63079305b1ceccb8)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_COMMON_OPEN_BLOCK.NextGlobalOpen", next_global_open, 0xc00, 0x40, true, 0x801b2d3e91f04ed4)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_COMMON_OPEN_BLOCK.MiniportNextOpen", miniport_next_open, 0xc40, 0x40, true, 0xf8d37ac37cc1b75d)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_COMMON_OPEN_BLOCK.ProtocolNextOpen", protocol_next_open, 0xc80, 0x40, true, 0x7472113db2e52bca)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_COMMON_OPEN_BLOCK.BindDeviceName", bind_device_name, 0xcc0, 0x40, true, 0xc745724b1af1b6fe)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_COMMON_OPEN_BLOCK.RootDeviceName", root_device_name, 0xd00, 0x40, true, 0xdebd0258b3d71072)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_COMMON_OPEN_BLOCK.FilterNextOpen", filter_next_open, 0xd40, 0x40, true, 0x59cd448bcc34a262)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.PacketFilters", packet_filters, 0xd80, 0x20, true, 0xc0726939970f5dba)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.OldPacketFilters", old_packet_filters, 0xda0, 0x20, true, 0x829e4a141a650aa4)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.MaxMulticastAddresses", max_multicast_addresses, 0xdc0, 0x20, true, 0x90e16508270fb6fe)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::eth_multicast_wrapper_t*), "_NDIS_COMMON_OPEN_BLOCK.MCastAddressBuf", m_cast_address_buf, 0xe00, 0x40, true, 0xefbe1a5ef43e6a5a)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.NumAddresses", num_addresses, 0xe40, 0x20, true, 0x5dcbefd7d0cc33ca)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::eth_multicast_wrapper_t*), "_NDIS_COMMON_OPEN_BLOCK.OldMCastAddressBuf", old_m_cast_address_buf, 0xe80, 0x40, true, 0x85aacfab7677e7f9)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.OldNumAddresses", old_num_addresses, 0xec0, 0x20, true, 0xdaada5cc6921515d)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_COMMON_OPEN_BLOCK.RssParametersBuffer", rss_parameters_buffer, 0xf00, 0x40, true, 0xc793ee2e421cff05)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_scale_parameters_t*), "_NDIS_COMMON_OPEN_BLOCK.NdisRSSParameters", ndis_rss_parameters, 0xf40, 0x40, true, 0xcc95894bf85283b3)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_COMMON_OPEN_BLOCK.PatternList", pattern_list, 0xf80, 0x40, true, 0x82e4290ab23ccfa0)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_COMMON_OPEN_BLOCK.WOLPatternList", wol_pattern_list, 0xfc0, 0x40, true, 0xbef268a74029f5be)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_COMMON_OPEN_BLOCK.PMProtocolOffloadList", pm_protocol_offload_list, 0x1000, 0x40, true, 0xfd7b07188d6bf220)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.ProtSendNetBufferListsComplete", prot_send_net_buffer_lists_complete, 0x1040, 0x40, true, 0x9aa6b6485bb24ec3)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_COMMON_OPEN_BLOCK.SendCompleteNdisPacketContext", send_complete_ndis_packet_context, 0x1080, 0x40, true, 0xdaf21e648f673d36)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_COMMON_OPEN_BLOCK.SendCompleteNetBufferListsContext", send_complete_net_buffer_lists_context, 0x10c0, 0x40, true, 0x6b54bd6931ab9890)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.ReceiveNetBufferLists", receive_net_buffer_lists, 0x1100, 0x40, true, 0x38bb95912467dacf)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_COMMON_OPEN_BLOCK.ReceiveNetBufferListsContext", receive_net_buffer_lists_context, 0x1140, 0x40, true, 0xb0dac05b09cc5b1a)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.SavedSendPacketsHandler", saved_send_packets_handler, 0x1180, 0x40, true, 0xb05a4dc4e13374e7)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_COMMON_OPEN_BLOCK.SavedCancelSendPacketsHandler", saved_cancel_send_packets_handler, 0x11c0, 0x40, true, 0xfe25019ab8d33466)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.SavedSendHandler", saved_send_handler, 0x1200, 0x40, true, 0xebaa07502910f360)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_COMMON_OPEN_BLOCK.NblTracker", nbl_tracker, 0x1240, 0x40, true, 0x6486a6a7cabcd938)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::refcount_handle_t*), "_NDIS_COMMON_OPEN_BLOCK.RefCountTracker", ref_count_tracker, 0x1280, 0x40, true, 0x4cfdebb11c95e5b9)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_COMMON_OPEN_BLOCK.RefCountLock", ref_count_lock, 0x12c0, 0x40, true, 0x6b6aa8d641f18bad)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.ProtocolMajorVersion", protocol_major_version, 0x1300, 0x20, true, 0xab3af224d3b25a65)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_NDIS_COMMON_OPEN_BLOCK.IfBlock", if_block, 0x1340, 0x40, true, 0xb5d0a397e61d0c71)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::spin_lock_t), "_NDIS_COMMON_OPEN_BLOCK.PnPStateLock", pn_p_state_lock, 0x1380, 0x80, true, 0x5d661f014b669e6e)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::ndis5_driver_state_t), "_NDIS_COMMON_OPEN_BLOCK.PnPState", pn_p_state, 0x1400, 0x20, true, 0x94cdec0ce642e35)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_COMMON_OPEN_BLOCK.OutstandingSends", outstanding_sends, 0x1420, 0x20, true, 0x7964839587c1c0af)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::event_t), "_NDIS_COMMON_OPEN_BLOCK.PauseEvent", pause_event, 0x1440, 0xc0, true, 0x3354aef795191179)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*)>*), "_NDIS_COMMON_OPEN_BLOCK.Ndis5WanSendHandler", ndis5_wan_send_handler, 0x1500, 0x40, true, 0x39687deefdd0fb8f)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.ProtSendCompleteHandler", prot_send_complete_handler, 0x1540, 0x40, true, 0x3c1610fdabd0c438)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.OidRequestCompleteHandler", oid_request_complete_handler, 0x1580, 0x40, true, 0x8df6ef5bc2cdc156)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_offload_t*), "_NDIS_COMMON_OPEN_BLOCK.Offload", offload, 0x15c0, 0x40, true, 0xdba7dec983b7aff2)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::status_unbind_workitem_t*), "_NDIS_COMMON_OPEN_BLOCK.StatusUnbindWorkItem", status_unbind_work_item, 0x1600, 0x40, true, 0xbd280ba5bfe840b3)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_COMMON_OPEN_BLOCK.DpcStartCycle", dpc_start_cycle, 0x1640, 0x40, true, 0x3ae5fe10c99ca71)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pndis_per_processor_slot_t*), "_NDIS_COMMON_OPEN_BLOCK.ReceivedAPacketSlot", received_a_packet_slot, 0x1680, 0x40, true, 0x1a20b7686542603e)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.DirectOidRequestHandler", direct_oid_request_handler, 0x16c0, 0x40, true, 0xc2c910ce675229ac)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_COMMON_OPEN_BLOCK.ReceiveQueueList", receive_queue_list, 0x1700, 0x80, true, 0x8a3c1ac9e870a46d)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.NumReceiveQueues", num_receive_queues, 0x1780, 0x20, true, 0xf139c14f488c331e)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_COMMON_OPEN_BLOCK.SharedMemoryBlockList", shared_memory_block_list, 0x17c0, 0x80, true, 0x9ccef8efe113047f)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::shared_memory_parameters_t*, void**)>*), "_NDIS_COMMON_OPEN_BLOCK.AllocateSharedMemoryHandler", allocate_shared_memory_handler, 0x1840, 0x40, true, 0x18cf79704e54c2e9)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_COMMON_OPEN_BLOCK.FreeSharedMemoryHandler", free_shared_memory_handler, 0x1880, 0x40, true, 0x1541e3fab63ff42)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_COMMON_OPEN_BLOCK.AllocateSharedMemoryContext", allocate_shared_memory_context, 0x18c0, 0x40, true, 0x289b3870a296bbec)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.NumAllocatedVFs", num_allocated_v_fs, 0x1900, 0x20, true, 0x6b2b597c16692bbe)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_COMMON_OPEN_BLOCK.VFList", vf_list, 0x1940, 0x80, true, 0x207e62bf4e3409c6)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.NumActiveVPorts", num_active_v_ports, 0x19c0, 0x20, true, 0xec65dea5ff0df6e8)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_COMMON_OPEN_BLOCK.VPortList", v_port_list, 0x1a00, 0x80, true, 0x4391f2c93c9cc4a2)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_COMMON_OPEN_BLOCK.AoAcReferences", ao_ac_references, 0x1a80, 0x20, true, 0x711c65add88e65ab)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::bind_protocol_link_t*), "_NDIS_COMMON_OPEN_BLOCK.Bind", bind, 0x1ac0, 0x40, true, 0x30f10996355e4283)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_NDIS_COMMON_OPEN_BLOCK.UnsolicitedUnbindComplete", unsolicited_unbind_complete, 0x1b00, 0x0, true, 0x7008dc58138ef3dd)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_COMMON_OPEN_BLOCK.UnsolicitedUnbindEvent", unsolicited_unbind_event, 0x1c00, 0x40, true, 0x1ed7a112ec77d7a5)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_COMMON_OPEN_BLOCK.PendingLegacyUnbind", pending_legacy_unbind, 0x1c40, 0x8, true, 0x4809f22990295bcc)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_COMMON_OPEN_BLOCK.WaitNetPnpEvent", wait_net_pnp_event, 0x1c80, 0x40, true, 0xce0d5f2cf0087258)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pktmon_component_context_t), "_NDIS_COMMON_OPEN_BLOCK.PktMonComp", pkt_mon_comp, 0x1cc0, 0x80, true, 0xb4fdd6cafeb84ebc)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pktmon_edge_context_t), "_NDIS_COMMON_OPEN_BLOCK.PktMonEdge", pkt_mon_edge, 0x1d40, 0xc0, true, 0x1a1099b9cd43efb4)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::queued_close_t), "_NDIS_COMMON_OPEN_BLOCK.QC", qc, 0x0, 0x0, false, 0x4dc4de0fc91299c9)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.InitiateOffloadCompleteHandler", initiate_offload_complete_handler, 0x0, 0x0, false, 0xa9dfc86d3606306a)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.TerminateOffloadCompleteHandler", terminate_offload_complete_handler, 0x0, 0x0, false, 0xf96bfc59a325e7c4)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.UpdateOffloadCompleteHandler", update_offload_complete_handler, 0x0, 0x0, false, 0xcf20999d2b4660c3)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.InvalidateOffloadCompleteHandler", invalidate_offload_complete_handler, 0x0, 0x0, false, 0x48c128b556e98dfe)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.QueryOffloadCompleteHandler", query_offload_complete_handler, 0x0, 0x0, false, 0xb5d1c725eba11305)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.IndicateOffloadEventHandler", indicate_offload_event_handler, 0x0, 0x0, false, 0x63596ed24a5953bd)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.TcpOffloadSendCompleteHandler", tcp_offload_send_complete_handler, 0x0, 0x0, false, 0xcb47ce56bbd3ce88)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.TcpOffloadReceiveCompleteHandler", tcp_offload_receive_complete_handler, 0x0, 0x0, false, 0x86bfff3d5f537a75)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.TcpOffloadDisconnectCompleteHandler", tcp_offload_disconnect_complete_handler, 0x0, 0x0, false, 0x6f6aaaa0d3da7cbf)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.TcpOffloadForwardCompleteHandler", tcp_offload_forward_complete_handler, 0x0, 0x0, false, 0x203871f5c349679)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_NDIS_COMMON_OPEN_BLOCK.TcpOffloadEventHandler", tcp_offload_event_handler, 0x0, 0x0, false, 0xda3e5e136e3f03ad)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*), "_NDIS_COMMON_OPEN_BLOCK.TcpOffloadReceiveIndicateHandler", tcp_offload_receive_indicate_handler, 0x0, 0x0, false, 0xcd0f9c7626baf271)
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
#endif