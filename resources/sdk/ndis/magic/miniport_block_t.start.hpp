#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_BLOCK.Header", header, 0x0, 0x20, true, 0xab4777c0c9e23568)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_MINIPORT_BLOCK.NextMiniport", next_miniport, 0x40, 0x40, true, 0x7075cd0a5b5026d1)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_MINIPORT_BLOCK.BaseMiniport", base_miniport, 0x80, 0x40, true, 0x1c3db9125031d715)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.MiniportAdapterContext", miniport_adapter_context, 0xc0, 0x40, true, 0xa4f4a1e9e75155f)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.MajorNdisVersion", major_ndis_version, 0x100, 0x8, true, 0xea5f2b59d52956d7)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.MinorNdisVersion", minor_ndis_version, 0x108, 0x8, true, 0xfa181d82f5d8cc94)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pcw_data_block_t*), "_NDIS_MINIPORT_BLOCK.PcwDataBlock", pcw_data_block, 0x140, 0x40, true, 0x8754eb9a121f4f8f)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_BLOCK.PcwDatapathEventMask", pcw_datapath_event_mask, 0x180, 0x20, true, 0x1c184ca1755b8a74)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_MINIPORT_BLOCK.OpenQueue", open_queue, 0x1c0, 0x40, true, 0x7644dffac13135a5)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::reference_t), "_NDIS_MINIPORT_BLOCK.ShortRef", short_ref, 0x200, 0x80, true, 0xf7dc450f1d1ef5a5)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_BLOCK.PcwDatapathCycleMask", pcw_datapath_cycle_mask, 0x280, 0x20, true, 0x454e989ac8fe1874)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.LinkStateIndicationFlags", link_state_indication_flags, 0x2c0, 0x8, true, 0xb93a95a40c91f8ad)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.LockAcquired", lock_acquired, 0x2c8, 0x8, true, 0x5ee94962e508c2c8)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.PmodeOpens", pmode_opens, 0x2d0, 0x8, true, 0xe8d260c21c338e10)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.LoopbackOpens", loopback_opens, 0x2d8, 0x8, true, 0xc3e35faec8834996)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.Lock", lock, 0x300, 0x40, true, 0x6fb4b1bfb14efdc8)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_interrupt_t*), "_NDIS_MINIPORT_BLOCK.Interrupt", interrupt, 0x380, 0x40, true, 0x45c8fa5a4fe20a7b)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.Flags", flags, 0x3c0, 0x20, true, 0xb412b5664a2f5960)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.PnPFlags", pn_p_flags, 0x3e0, 0x20, true, 0x4a238bff05696154)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_BLOCK.PacketList", packet_list, 0x400, 0x80, true, 0x749f7d2a4125d069)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::packet_t*), "_NDIS_MINIPORT_BLOCK.FirstPendingPacket", first_pending_packet, 0x480, 0x40, true, 0x253be1196deeabaa)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::packet_t*), "_NDIS_MINIPORT_BLOCK.ReturnPacketsQueue", return_packets_queue, 0x4c0, 0x40, true, 0x29c85bb968bff5ee)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.RequestBuffer", request_buffer, 0x500, 0x20, true, 0x1de5c08c7ab8f373)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_MINIPORT_BLOCK.PrimaryMiniport", primary_miniport, 0x580, 0x40, true, 0xf673a1928aaa3965)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_MINIPORT_BLOCK.NextCancelSendNetBufferListsHandler", next_cancel_send_net_buffer_lists_handler, 0x5c0, 0x40, true, 0x14e27dffe18f7aa9)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.OidContext", oid_context, 0x600, 0x40, true, 0x2ed18be9c5c1ef5a)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.SupportedOidListLength", supported_oid_list_length, 0x640, 0x20, true, 0x3d9298dc60db7421)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_NDIS_MINIPORT_BLOCK.Resources", resources, 0x680, 0x40, true, 0x8269619bc1859492)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timer_t), "_NDIS_MINIPORT_BLOCK.WakeUpDpcTimer", wake_up_dpc_timer, 0x6c0, 0x0, true, 0xad3b5f94352f007e)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_connect_state_t), "_NDIS_MINIPORT_BLOCK.MiniportMediaConnectState", miniport_media_connect_state, 0xac0, 0x20, true, 0x13729842f3ea0601)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_duplex_state_t), "_NDIS_MINIPORT_BLOCK.MiniportMediaDuplexState", miniport_media_duplex_state, 0xae0, 0x20, true, 0x796cb936656319a0)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_MINIPORT_BLOCK.SymbolicLinkName", symbolic_link_name, 0xb40, 0x80, true, 0xd15bddc918b60b71)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.CheckForHangSeconds", check_for_hang_seconds, 0xbc0, 0x20, true, 0x4f40bf469fdd3d3b)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.CFHangTicks", cf_hang_ticks, 0xbe0, 0x10, true, 0x1d4f9d45c44e0d7a)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.CFHangCurrentTick", cf_hang_current_tick, 0xbf0, 0x10, true, 0x6ac89aebd7275045)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_BLOCK.ResetStatus", reset_status, 0xc00, 0x20, true, 0xfc32ed35a58100fc)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_MINIPORT_BLOCK.ResetOpen", reset_open, 0xc40, 0x40, true, 0x26960a5c4bc4d8d0)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::x_filter_t*), "_NDIS_MINIPORT_BLOCK.EthDB", eth_db, 0xc80, 0x40, true, 0x6c79188df33ef121)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::x_filter_t*), "_NDIS_MINIPORT_BLOCK.NullDB", null_db, 0xc80, 0x40, true, 0x35e028f4ee484a32)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.PacketIndicateHandler", packet_indicate_handler, 0xd80, 0x40, true, 0x50d4617a57f5e424)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*), "_NDIS_MINIPORT_BLOCK.SendCompleteHandler", send_complete_handler, 0xdc0, 0x40, true, 0xf2ab6707a34a5cc)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_MINIPORT_BLOCK.SendResourcesHandler", send_resources_handler, 0xe00, 0x40, true, 0x50c69712fde56ea6)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t, uint8_t)>*), "_NDIS_MINIPORT_BLOCK.ResetCompleteHandler", reset_complete_handler, 0xe40, 0x40, true, 0x861c0608475aab6d)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NDIS_MINIPORT_BLOCK.MediaType", media_type, 0xe80, 0x20, true, 0xd369579e771da267)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.AutoNegotiationFlags", auto_negotiation_flags, 0xea0, 0x20, true, 0xb51490c41746b547)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::interface_type_t), "_NDIS_MINIPORT_BLOCK.AdapterType", adapter_type, 0xee0, 0x20, true, 0xfda8f9eb5d8a2a93)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_connect_state_t), "_NDIS_MINIPORT_BLOCK.MediaConnectState", media_connect_state, 0xf00, 0x20, true, 0xfa9136117e4fcf29)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_duplex_state_t), "_NDIS_MINIPORT_BLOCK.MediaDuplexState", media_duplex_state, 0xf40, 0x20, true, 0x1d9a3191ebd9465)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_NDIS_MINIPORT_BLOCK.SupportedOidList", supported_oid_list, 0xf80, 0x40, true, 0xe90dbfb1e062156d)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::sg_dma_block_t*), "_NDIS_MINIPORT_BLOCK.MiniportSGDmaBlock", miniport_sg_dma_block, 0xfc0, 0x40, true, 0xa3b6b6153e03b0e3)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::af_list_t*), "_NDIS_MINIPORT_BLOCK.CallMgrAfList", call_mgr_af_list, 0x1000, 0x40, true, 0x5c46793e8e8c7ed6)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.MiniportThread", miniport_thread, 0x1040, 0x40, true, 0x2d1899890887e498)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.SetInfoBuf", set_info_buf, 0x1080, 0x40, true, 0x630e88ff3399b0ec)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.SetInfoBufLen", set_info_buf_len, 0x10c0, 0x10, true, 0xd78b24f51c3eedfa)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.MaxSendPackets", max_send_packets, 0x10d0, 0x10, true, 0xbf4fdfbc09f7a3f6)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_BLOCK.FakeStatus", fake_status, 0x10e0, 0x20, true, 0x66da28b6c3f0077d)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.GlobalTriageBlock", global_triage_block, 0x1100, 0x40, true, 0x6f154b69422e41ee)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_scale_parameters_t*), "_NDIS_MINIPORT_BLOCK.CombinedNdisRSSParameters", combined_ndis_rss_parameters, 0x1140, 0x40, true, 0xca9dadb9297ec494)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_timer_t*), "_NDIS_MINIPORT_BLOCK.TimerQueue", timer_queue, 0x1180, 0x40, true, 0xb8bc3023074607ad)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timer_entry_t*), "_NDIS_MINIPORT_BLOCK.TimerObjectQueue", timer_object_queue, 0x1180, 0x40, true, 0x82a13c3fc5e12cbb)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.MacOptions", mac_options, 0x11c0, 0x20, true, 0x93a76672dd904a86)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::request_t*), "_NDIS_MINIPORT_BLOCK.PendingRequest", pending_request, 0x1200, 0x40, true, 0x118efeec799562ef)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.MaximumLongAddresses", maximum_long_addresses, 0x1240, 0x20, true, 0x3339730f2064cfa3)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.MiniportCurrentLookahead", miniport_current_lookahead, 0x1280, 0x20, true, 0x2b8adae68bf1431a)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.MiniportMaximumLookahead", miniport_maximum_lookahead, 0x12a0, 0x20, true, 0x8376dfb3d9d5a9a0)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::x_filter_t*), "_NDIS_MINIPORT_BLOCK.NullMediaFilter", null_media_filter, 0x12c0, 0x40, true, 0x1d96e13966ce041c)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_MINIPORT_BLOCK.DisableInterruptHandler", disable_interrupt_handler, 0x1300, 0x40, true, 0x746b4b16e639c469)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_MINIPORT_BLOCK.EnableInterruptHandler", enable_interrupt_handler, 0x1340, 0x40, true, 0xd1b09663be96aa7e)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.SendPacketsHandler", send_packets_handler, 0x1380, 0x40, true, 0xdcbe9b80a2beb2d0)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct ndis::miniport_block_t*)>*), "_NDIS_MINIPORT_BLOCK.DeferredSendHandler", deferred_send_handler, 0x13c0, 0x40, true, 0x5315d2820d2eee55)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::x_filter_t*, void*, char*, void*, uint32_t, void*, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.EthRxIndicateHandler", eth_rx_indicate_handler, 0x1400, 0x40, true, 0x4401fd14cd86859e)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.NextSendNetBufferListsHandler", next_send_net_buffer_lists_handler, 0x1480, 0x40, true, 0x5e7b802720281170)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::x_filter_t*)>*), "_NDIS_MINIPORT_BLOCK.EthRxCompleteHandler", eth_rx_complete_handler, 0x14c0, 0x40, true, 0x342de04582bdd664)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.SavedNextSendNetBufferListsHandler", saved_next_send_net_buffer_lists_handler, 0x1540, 0x40, true, 0x9480c6ed3ea0f73e)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t, void*, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.StatusHandler", status_handler, 0x1580, 0x40, true, 0xc4f5d6069956163b)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_MINIPORT_BLOCK.StatusCompleteHandler", status_complete_handler, 0x15c0, 0x40, true, 0x1038bcb8cbd024d6)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.TDCompleteHandler", td_complete_handler, 0x1600, 0x40, true, 0x8d77a2a077f422ce)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS_MINIPORT_BLOCK.QueryCompleteHandler", query_complete_handler, 0x1640, 0x40, true, 0xeb37a9bb55567575)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS_MINIPORT_BLOCK.SetCompleteHandler", set_complete_handler, 0x1680, 0x40, true, 0x40a93a0ae8dec50e)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, int32_t)>*), "_NDIS_MINIPORT_BLOCK.WanSendCompleteHandler", wan_send_complete_handler, 0x16c0, 0x40, true, 0x384c6d5019a4086d)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t*, void*, void*, uint8_t*, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.WanRcvHandler", wan_rcv_handler, 0x1700, 0x40, true, 0x7db02b90a02cbf79)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_MINIPORT_BLOCK.WanRcvCompleteHandler", wan_rcv_complete_handler, 0x1740, 0x40, true, 0x523cbb64c7448b19)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.SendNetBufferListsCompleteHandler", send_net_buffer_lists_complete_handler, 0x1780, 0x40, true, 0x95d285c33ec36a32)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_MINIPORT_BLOCK.PnPEventLockEvent", pn_p_event_lock_event, 0x17c0, 0x40, true, 0xd9958656b7e04a96)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t*), "_NDIS_MINIPORT_BLOCK.MediaSpecificAttributes", media_specific_attributes, 0x1800, 0x40, true, 0xe94cf8d41a625100)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_NDIS_MINIPORT_BLOCK.PendingQueryPowerIrp", pending_query_power_irp, 0x1840, 0x40, true, 0x58a4ad270d488058)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::interrupt_block_t*), "_NDIS_MINIPORT_BLOCK.InterruptEx", interrupt_ex, 0x1880, 0x40, true, 0x1ce0bd2f02de68fb)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.XmitLinkSpeed", xmit_link_speed, 0x18c0, 0x40, true, 0xc3c66704fe9d016b)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.RcvLinkSpeed", rcv_link_speed, 0x1900, 0x40, true, 0x88b58b52243d3b8)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::supported_pause_functions_t), "_NDIS_MINIPORT_BLOCK.PauseFunctions", pause_functions, 0x1940, 0x20, true, 0x2eeb1e4b4cd36edf)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::supported_pause_functions_t), "_NDIS_MINIPORT_BLOCK.MiniportPauseFunctions", miniport_pause_functions, 0x1960, 0x20, true, 0xe61f2785f55f8e56)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.MiniportAutoNegotiationFlags", miniport_auto_negotiation_flags, 0x1980, 0x20, true, 0x2c24672f9ec9b9b3)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::single_list_entry_t, 7>), "_NDIS_MINIPORT_BLOCK.WorkQueue", work_queue, 0x19c0, 0xc0, true, 0x3204ca4f8fb089ed)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::single_list_entry_t, 6>), "_NDIS_MINIPORT_BLOCK.SingleWorkItems", single_work_items, 0x1b80, 0x80, true, 0x43a96ea8927e714d)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.SendFlags", send_flags, 0x1d00, 0x8, true, 0xe9c3f4ca3ab3b326)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.MP6SupportPM", mp6_support_pm, 0x1d08, 0x8, true, 0x1ac8c341cbe627e)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.XState", x_state, 0x1d10, 0x8, true, 0x259179c5fecb9876)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::log_t*), "_NDIS_MINIPORT_BLOCK.Log", log, 0x1d40, 0x40, true, 0x55020a7d9a29c4a8)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_NDIS_MINIPORT_BLOCK.AllocatedResources", allocated_resources, 0x1d80, 0x40, true, 0x38e8a41f32de1aaf)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_NDIS_MINIPORT_BLOCK.AllocatedResourcesTranslated", allocated_resources_translated, 0x1dc0, 0x40, true, 0x785c0c51fbbaef41)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_MINIPORT_BLOCK.PatternList", pattern_list, 0x1e00, 0x40, true, 0xcf378acc1b2ead22)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_MINIPORT_BLOCK.WOLPatternList", wol_pattern_list, 0x1e40, 0x40, true, 0x39024cd3d089e3bc)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_NDIS_MINIPORT_BLOCK.PMProtocolOffloadList", pm_protocol_offload_list, 0x1e80, 0x40, true, 0xc7457e190178a5d0)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pnp_capabilities_t), "_NDIS_MINIPORT_BLOCK.PMCapabilities61", pm_capabilities61, 0x1ec0, 0x80, true, 0xbce7efe48379f227)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_capabilities_t), "_NDIS_MINIPORT_BLOCK.PMHardwareCapabilities", pm_hardware_capabilities, 0x1f40, 0xe0, true, 0xd469927717580c06)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_capabilities_t), "_NDIS_MINIPORT_BLOCK.PMAdvertisedCapabilities", pm_advertised_capabilities, 0x2120, 0xe0, true, 0x313acc91c69f4a1a)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_parameters_t), "_NDIS_MINIPORT_BLOCK.PMCurrentParameters", pm_current_parameters, 0x2300, 0xa0, true, 0x70443effd54a70c6)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_parameters_t), "_NDIS_MINIPORT_BLOCK.PMWmiParameters", pm_wmi_parameters, 0x23a0, 0xa0, true, 0x7cf45c4defcd11f7)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_capabilities_t), "_NDIS_MINIPORT_BLOCK.OriginalDeviceCaps", original_device_caps, 0x2440, 0x0, true, 0xb7466e63258495a7)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_capabilities_t), "_NDIS_MINIPORT_BLOCK.DeviceCaps", device_caps, 0x2640, 0x0, true, 0x9aa8b198283f8ac7)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.S0WakeupSupported", s0_wakeup_supported, 0x2840, 0x8, true, 0xc7d5d5f1087ff702)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.WakeUpEnable", wake_up_enable, 0x2860, 0x20, true, 0x4eb23f956a14dc55)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_NDIS_MINIPORT_BLOCK.WaitWakeIrp", wait_wake_irp, 0x2880, 0x40, true, 0x313bafee1dd42384)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_MINIPORT_BLOCK.WaitWakeIrpCompleted", wait_wake_irp_completed, 0x28c0, 0xc0, true, 0x1ef71bdcb749b93e)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_MINIPORT_BLOCK.WaitWakeIoCompletionRoutineRan", wait_wake_io_completion_routine_ran, 0x2980, 0x8, true, 0x17dc493c11d094b6)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_MINIPORT_BLOCK.WaitWakeCancelInProgress", wait_wake_cancel_in_progress, 0x2988, 0x8, true, 0x332e7e464cb5b4a5)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_MINIPORT_BLOCK.WaitWakeCancelAttempted", wait_wake_cancel_attempted, 0x2990, 0x8, true, 0x5c4d73be4e15376)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_NDIS_MINIPORT_BLOCK.WaitWakeSystemState", wait_wake_system_state, 0x29a0, 0x20, true, 0x88df72695fa3c5a0)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_MINIPORT_BLOCK.VcIndex", vc_index, 0x29c0, 0x40, true, 0x30f2fe8d9c849992)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.VcCountLock", vc_count_lock, 0x2a00, 0x40, true, 0x2fd29a5706dc5282)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_BLOCK.WmiEnabledVcs", wmi_enabled_vcs, 0x2a40, 0x80, true, 0xf457ccda8cc3b805)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::guid_t*), "_NDIS_MINIPORT_BLOCK.pNdisGuidMap", p_ndis_guid_map, 0x2ac0, 0x40, true, 0xccb65436e004523b)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::guid_t*), "_NDIS_MINIPORT_BLOCK.pCustomGuidMap", p_custom_guid_map, 0x2b00, 0x40, true, 0xe11e4d552f8e5e2e)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.VcCount", vc_count, 0x2b40, 0x10, true, 0x9ad738c7419e9adf)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.cNdisGuidMap", c_ndis_guid_map, 0x2b50, 0x10, true, 0x8d0442b052e9c20)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.cCustomGuidMap", c_custom_guid_map, 0x2b60, 0x10, true, 0xa169b1e6b0ecbf2)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timer_t), "_NDIS_MINIPORT_BLOCK.MediaDisconnectTimer", media_disconnect_timer, 0x2b80, 0x0, true, 0xbef73f41f7806e91)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::pnp_device_state_t), "_NDIS_MINIPORT_BLOCK.PnPDeviceState", pn_p_device_state, 0x2f80, 0x20, true, 0x4e436ce95d0c71de)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::pnp_device_state_t), "_NDIS_MINIPORT_BLOCK.OldPnPDeviceState", old_pn_p_device_state, 0x2fa0, 0x20, true, 0xed9dd89892639138)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_NDIS_MINIPORT_BLOCK.DeferredDpc", deferred_dpc, 0x2fc0, 0x0, true, 0xaaf51ad21dc91342)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_MINIPORT_BLOCK.StartTicks", start_ticks, 0x31c0, 0x40, true, 0x540b09fa654fec1a)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::packet_t**), "_NDIS_MINIPORT_BLOCK.IndicatedPacket", indicated_packet, 0x3200, 0x40, true, 0x986cf9cbb9aa8ba6)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_MINIPORT_BLOCK.RemoveReadyEvent", remove_ready_event, 0x3240, 0x40, true, 0x1f5e3a59466007d8)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_MINIPORT_BLOCK.AllRequestsCompletedEvent", all_requests_completed_event, 0x3280, 0x40, true, 0x9046fcd4b7f997dc)
#define _m134 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.InitTimeMs", init_time_ms, 0x32c0, 0x20, true, 0xa9f59fa3cb431d54)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::miniport_work_item_t, 6>), "_NDIS_MINIPORT_BLOCK.WorkItemBuffer", work_item_buffer, 0x3300, 0x80, true, 0xb3eaf434612953de)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::oid_list_t*), "_NDIS_MINIPORT_BLOCK.OidList", oid_list, 0x3780, 0x40, true, 0x57437d1e0d132a89)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.InternalResetCount", internal_reset_count, 0x37c0, 0x10, true, 0xa2a55aa46bbe0995)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.MiniportResetCount", miniport_reset_count, 0x37d0, 0x10, true, 0x52526b72628862ac)
#define _m139 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.MediaSenseConnectCount", media_sense_connect_count, 0x37e0, 0x10, true, 0x475b1391c98b80ad)
#define _m140 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.MediaSenseDisconnectCount", media_sense_disconnect_count, 0x37f0, 0x10, true, 0xa75c232db29bcb9a)
#define _m141 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::packet_t**), "_NDIS_MINIPORT_BLOCK.xPackets", x_packets, 0x3800, 0x40, true, 0xfdf06f1a460899d2)
#define _m142 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.UserModeOpenReferences", user_mode_open_references, 0x3840, 0x20, true, 0xc7b854a81941171f)
#define _m143 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.WSendPacketsHandler", w_send_packets_handler, 0x3880, 0x40, true, 0xbafa0f5cd1aabe2f)
#define _m144 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.MiniportAttributes", miniport_attributes, 0x38c0, 0x20, true, 0xe125700bc8707a4)
#define _m145 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.NumOpens", num_opens, 0x38e0, 0x10, true, 0x233a7f792a6719a8)
#define _m146 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.CFHangXTicks", cf_hang_x_ticks, 0x38f0, 0x10, true, 0xf1b216ee76d2e686)
#define _m147 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.RequestCount", request_count, 0x3900, 0x20, true, 0x187e79d091bcbabe)
#define _m148 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.IndicatedPacketsCount", indicated_packets_count, 0x3920, 0x20, true, 0xf7688a947adeea42)
#define _m149 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::physical_medium_t), "_NDIS_MINIPORT_BLOCK.PhysicalMediumType", physical_medium_type, 0x3940, 0x20, true, 0x62e29dbb7ee63dab)
#define _m150 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NDIS_MINIPORT_BLOCK.MiniportMediaType", miniport_media_type, 0x3960, 0x20, true, 0x1b4776f05e32979c)
#define _m151 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::request_t*), "_NDIS_MINIPORT_BLOCK.LastRequest", last_request, 0x39c0, 0x40, true, 0x6b8f529e9f61b8b5)
#define _m152 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.FakeMac", fake_mac, 0x3a00, 0x40, true, 0xa483cd361b340949)
#define _m153 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.LockThread", lock_thread, 0x3a40, 0x40, true, 0x741c6b9c2ee765e1)
#define _m154 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.InfoFlags", info_flags, 0x3a80, 0x20, true, 0xb9ac101cca54e13e)
#define _m155 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.TimerQueueLock", timer_queue_lock, 0x3ac0, 0x40, true, 0xc691c66b3782df89)
#define _m156 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_MINIPORT_BLOCK.ResetCompletedEvent", reset_completed_event, 0x3b00, 0x40, true, 0xeb93c641fe14bae4)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.SavedPacketIndicateHandler", saved_packet_indicate_handler, 0x3b40, 0x40, true, 0x30574ee0424d4cb6)
#define _m158 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_BLOCK.RegisteredInterrupts", registered_interrupts, 0x3b80, 0x20, true, 0xd997359814ee59d3)
#define _m159 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.SetOid", set_oid, 0x3ba0, 0x20, true, 0x68fd592a90e2d2de)
#define _m160 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_MINIPORT_BLOCK.CFHCompletedEvent", cfh_completed_event, 0x3bc0, 0xc0, true, 0xd0c43eda5c6b8908)
#define _m161 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_NDIS_MINIPORT_BLOCK.CFHWorkItem", cfh_work_item, 0x3c80, 0x0, true, 0x45474eb4a3b327eb)
#define _m162 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_NDIS_MINIPORT_BLOCK.CFHWorkItemQueued", cfh_work_item_queued, 0x3d80, 0x20, true, 0x8b620351fd28ee1b)
#define _m163 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.DeviceContext", device_context, 0x3dc0, 0x40, true, 0x9218c41d4bb8ff7a)
#define _m164 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_rss_parameters_cache_t*), "_NDIS_MINIPORT_BLOCK.RssParametersBuffer", rss_parameters_buffer, 0x3e00, 0x40, true, 0x24d493369e0af317)
#define _m165 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.UsingMSIX", using_msix, 0x3e40, 0x8, true, 0x27374796672acd72)
#define _m166 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.Miniport5InNdis6Mode", miniport5_in_ndis6_mode, 0x3e48, 0x8, true, 0x7b64d4897c75f699)
#define _m167 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.Miniport5HasNdis6Component", miniport5_has_ndis6_component, 0x3e50, 0x8, true, 0xc92ae43f21ef7536)
#define _m168 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.InitMode", init_mode, 0x3e58, 0x8, true, 0x552beba488fce2f2)
#define _m169 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.InitModeNotNeededAnymore", init_mode_not_needed_anymore, 0x3e60, 0x8, true, 0x106378f7a1e77683)
#define _m170 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_NDIS_MINIPORT_BLOCK.MediaChangeFilters", media_change_filters, 0x3e68, 0x8, true, 0xb9cb1964d4caf9da)
#define _m171 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.CheckPacketFilters", check_packet_filters, 0x3e70, 0x8, true, 0x1f7ab8be07f83d85)
#define _m172 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.ReceiveFilters", receive_filters, 0x3e78, 0x8, true, 0xb68b45d17f22a5f5)
#define _m173 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.RecvLock", recv_lock, 0x3e80, 0x40, true, 0xda67421e165af6e3)
#define _m174 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::miniport_state_t), "_NDIS_MINIPORT_BLOCK.RecvState", recv_state, 0x3ec0, 0x20, true, 0xe983b4284f097595)
#define _m175 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.OutstandingReceives", outstanding_receives, 0x3ee0, 0x20, true, 0x9b7c89902bc0721a)
#define _m176 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.MiniportRecvLockThread", miniport_recv_lock_thread, 0x3f00, 0x40, true, 0xba1db2baf5dbfd0f)
#define _m177 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.NextSendPacketsHandler", next_send_packets_handler, 0x3f40, 0x40, true, 0x133376c771556f64)
#define _m178 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.FinalSendPacketsHandler", final_send_packets_handler, 0x3f80, 0x40, true, 0xb14207a6c2e40abe)
#define _m179 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_block_t*), "_NDIS_MINIPORT_BLOCK.LowestFilter", lowest_filter, 0x3fc0, 0x40, true, 0x80c03ba15f1c246c)
#define _m180 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_block_t*), "_NDIS_MINIPORT_BLOCK.HighestFilter", highest_filter, 0x4000, 0x40, true, 0xbd1264339274866)
#define _m181 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.ShutdownContext", shutdown_context, 0x4040, 0x40, true, 0x2e65251ff6b6736d)
#define _m182 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_MINIPORT_BLOCK.ShutdownHandler", shutdown_handler, 0x4080, 0x40, true, 0x397b38282abc9308)
#define _m183 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kbugcheck_callback_record_t), "_NDIS_MINIPORT_BLOCK.BugcheckCallbackRecord", bugcheck_callback_record, 0x40c0, 0x0, true, 0x70c82b04a44f2e6f)
#define _m184 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.TopIndicateNetBufferListsHandler", top_indicate_net_buffer_lists_handler, 0x42c0, 0x40, true, 0xaeb4ef574f88b6e4)
#define _m185 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.TopIndicateLoopbackNetBufferListsHandler", top_indicate_loopback_net_buffer_lists_handler, 0x4300, 0x40, true, 0xbf76dfbdf1d06398)
#define _m186 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.Ndis5PacketIndicateHandler", ndis5_packet_indicate_handler, 0x4340, 0x40, true, 0x5c21c604f1520024)
#define _m187 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*)>*), "_NDIS_MINIPORT_BLOCK.MiniportReturnPacketHandler", miniport_return_packet_handler, 0x4380, 0x40, true, 0x1b026826560b2f99)
#define _m188 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.MiniportReturnPacketContext", miniport_return_packet_context, 0x43c0, 0x40, true, 0x42a804994d7ded1d)
#define _m189 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*)>*), "_NDIS_MINIPORT_BLOCK.SynchronousReturnPacketHandler", synchronous_return_packet_handler, 0x4400, 0x40, true, 0x3ad3a51172fbe0ee)
#define _m190 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.SynchronousReturnPacketContext", synchronous_return_packet_context, 0x4440, 0x40, true, 0x890a989accf7c340)
#define _m191 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_BLOCK.OidRequestList", oid_request_list, 0x4480, 0x80, true, 0x90996b474d6bd6c1)
#define _m192 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::oid_request_t*), "_NDIS_MINIPORT_BLOCK.PendingOidRequest", pending_oid_request, 0x4500, 0x40, true, 0x4c0d1019a9ceed6e)
#define _m193 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::oid_request_t*), "_NDIS_MINIPORT_BLOCK.ProcessedOidRequest", processed_oid_request, 0x4540, 0x40, true, 0xa2242716dfd696e5)
#define _m194 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::oid_request_t*), "_NDIS_MINIPORT_BLOCK.HookedOidRequest", hooked_oid_request, 0x4580, 0x40, true, 0xed74136bff4cf988)
#define _m195 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.NextCoOidRequestHandle", next_co_oid_request_handle, 0x45c0, 0x40, true, 0x6192e02dc37eae37)
#define _m196 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.Ndis6ProtocolsBound", ndis6_protocols_bound, 0x4600, 0x20, true, 0xb41cf0651194bc7b)
#define _m197 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.PmodeOpen6", pmode_open6, 0x4620, 0x20, true, 0x3073cf39417397ba)
#define _m198 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::miniport_state_t), "_NDIS_MINIPORT_BLOCK.State", state, 0x4640, 0x20, true, 0xe9aa6577efa772df)
#define _m199 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_MINIPORT_BLOCK.AsyncOpCompletionEvent", async_op_completion_event, 0x4680, 0x40, true, 0xb036403d2f7dcd86)
#define _m200 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_BLOCK.AsyncOpCompletionStatus", async_op_completion_status, 0x46c0, 0x20, true, 0x5ec4edbd7403d0b6)
#define _m201 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.MaxXmitLinkSpeed", max_xmit_link_speed, 0x4700, 0x40, true, 0x7dd4983d3349255f)
#define _m202 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.MaxRcvLinkSpeed", max_rcv_link_speed, 0x4740, 0x40, true, 0x31072b75e739a4f9)
#define _m203 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.SupportedPacketFilters", supported_packet_filters, 0x4780, 0x20, true, 0xb0dbffc727871908)
#define _m204 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_handlers_t), "_NDIS_MINIPORT_BLOCK.NoFilter", no_filter, 0x47c0, 0xc0, true, 0x73a2e093e45e4c1c)
#define _m205 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_handlers_t), "_NDIS_MINIPORT_BLOCK.Next", next, 0x4d80, 0xc0, true, 0x31b0498f97568f0a)
#define _m206 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.ReceivePathEnabled", receive_path_enabled, 0x5340, 0x8, true, 0x80987b191bf1b7e2)
#define _m207 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.NormalTopReceive", normal_top_receive, 0x5348, 0x8, true, 0x866c7cd392681094)
#define _m208 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::send_path_type_t), "_NDIS_MINIPORT_BLOCK.SendPathType", send_path_type, 0x5360, 0x20, true, 0xb2b31177a23968a6)
#define _m209 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::send_path_type_t), "_NDIS_MINIPORT_BLOCK.SavedSendPathType", saved_send_path_type, 0x5380, 0x20, true, 0xe063ef2379373a33)
#define _m210 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.SavedReceivePathEnabled", saved_receive_path_enabled, 0x53a0, 0x8, true, 0x9e6fb688889004cf)
#define _m211 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.FilterPnPFlags", filter_pn_p_flags, 0x53e0, 0x20, true, 0xddcfaa25fb9dcaa4)
#define _m212 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.SupportedStatistics", supported_statistics, 0x5400, 0x20, true, 0xada809d00f3ed80d)
#define _m213 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_scale_capabilities_t), "_NDIS_MINIPORT_BLOCK.RecvScaleCapabilities", recv_scale_capabilities, 0x5420, 0xa0, true, 0x50a203ac2721804f)
#define _m214 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_adapter_general_attributes_t*), "_NDIS_MINIPORT_BLOCK.GeneralAttributes", general_attributes, 0x54c0, 0x40, true, 0x5d977ef9c6601e6a)
#define _m215 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_BLOCK.PortList", port_list, 0x5500, 0x80, true, 0xbdeadac9e2802434)
#define _m216 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_MINIPORT_BLOCK.AllocatedPortIndices", allocated_port_indices, 0x5580, 0x40, true, 0xe93376df7860d5ba)
#define _m217 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.AllocatedPortIndicesLength", allocated_port_indices_length, 0x55c0, 0x20, true, 0x4f218ad0426f503c)
#define _m218 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.NumberOfPorts", number_of_ports, 0x55e0, 0x20, true, 0xb1fa656b58c86db4)
#define _m219 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.NumberOfActivePorts", number_of_active_ports, 0x5600, 0x20, true, 0xcadb41c26af46298)
#define _m220 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.MiniportXmitLinkSpeed", miniport_xmit_link_speed, 0x5640, 0x40, true, 0xd994ef95d85e9e73)
#define _m221 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.MiniportRcvLinkSpeed", miniport_rcv_link_speed, 0x5680, 0x40, true, 0x13630e00e1e80b5a)
#define _m222 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timer_t), "_NDIS_MINIPORT_BLOCK.InitModeTimeoutTimer", init_mode_timeout_timer, 0x56c0, 0x0, true, 0x1fb0914fc26e7965)
#define _m223 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::work_item_t), "_NDIS_MINIPORT_BLOCK.InitModeTimeoutWorkItem", init_mode_timeout_work_item, 0x5ac0, 0x80, true, 0x1c1d7cd95fe8daf8)
#define _m224 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_MINIPORT_BLOCK.InitModeTimeoutTimerQueuedEvent", init_mode_timeout_timer_queued_event, 0x5d40, 0xc0, true, 0x6f3077669d7ba528)
#define _m225 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.DataBackFillSize", data_back_fill_size, 0x5e00, 0x20, true, 0xfdb87319f623fbba)
#define _m226 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.ContextBackFillSize", context_back_fill_size, 0x5e20, 0x20, true, 0x60bdd56e921ed807)
#define _m227 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::restart_general_attributes_t), "_NDIS_MINIPORT_BLOCK.TopFilterRestartAttributes", top_filter_restart_attributes, 0x5e40, 0xc0, true, 0x642121764d0184b7)
#define _m228 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_scale_capabilities_t), "_NDIS_MINIPORT_BLOCK.TopRecvScaleCapabilities", top_recv_scale_capabilities, 0x6100, 0xa0, true, 0x10562f98cb7589a)
#define _m229 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.NsiOpenReferences", nsi_open_references, 0x61a0, 0x20, true, 0xfe7d741bf26474b3)
#define _m230 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.ProcessingOpen", processing_open, 0x61c0, 0x40, true, 0x3c4e14ec93b55bf8)
#define _m231 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_MINIPORT_BLOCK.NsiRequestsCompletedEvent", nsi_requests_completed_event, 0x6200, 0x40, true, 0x7403e3be163ce0bb)
#define _m232 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_NDIS_MINIPORT_BLOCK.QueryPowerDeviceState", query_power_device_state, 0x6240, 0x20, true, 0x64f0dd2b228debec)
#define _m233 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.MinimumNdisMajorVersion", minimum_ndis_major_version, 0x6260, 0x8, true, 0x87b79702a75933)
#define _m234 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.MinimumNdisMinorVersion", minimum_ndis_minor_version, 0x6268, 0x8, true, 0xd850450700b8481c)
#define _m235 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_stats_t*), "_NDIS_MINIPORT_BLOCK.BottomIfStats", bottom_if_stats, 0x6280, 0x40, true, 0x761f373abf53615a)
#define _m236 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::m_periodic_receives_t), "_NDIS_MINIPORT_BLOCK.PeriodicReceiveQueue", periodic_receive_queue, 0x62c0, 0x40, true, 0x8f918d660b8be98d)
#define _m237 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pndis_per_processor_slot_t*), "_NDIS_MINIPORT_BLOCK.PeriodicReceivesNblCountIndex", periodic_receives_nbl_count_index, 0x6700, 0x40, true, 0xcf36bcae438d4ac0)
#define _m238 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_control_state_t), "_NDIS_MINIPORT_BLOCK.DefaultSendControlState", default_send_control_state, 0x6740, 0x20, true, 0xf025012015682414)
#define _m239 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_control_state_t), "_NDIS_MINIPORT_BLOCK.DefaultRcvControlState", default_rcv_control_state, 0x6760, 0x20, true, 0x5d8223a54efb28d5)
#define _m240 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_authorization_state_t), "_NDIS_MINIPORT_BLOCK.DefaultSendAuthorizationState", default_send_authorization_state, 0x6780, 0x20, true, 0x9fd204695d29d953)
#define _m241 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_authorization_state_t), "_NDIS_MINIPORT_BLOCK.DefaultRcvAuthorizationState", default_rcv_authorization_state, 0x67a0, 0x20, true, 0x2135f65357c70a71)
#define _m242 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_control_state_t), "_NDIS_MINIPORT_BLOCK.DefaultPortSendControlState", default_port_send_control_state, 0x67c0, 0x20, true, 0x462a839611c84f3)
#define _m243 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_control_state_t), "_NDIS_MINIPORT_BLOCK.DefaultPortRcvControlState", default_port_rcv_control_state, 0x67e0, 0x20, true, 0xf2802c5526b04446)
#define _m244 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_authorization_state_t), "_NDIS_MINIPORT_BLOCK.DefaultPortSendAuthorizationState", default_port_send_authorization_state, 0x6800, 0x20, true, 0xa289976e587a29d1)
#define _m245 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_authorization_state_t), "_NDIS_MINIPORT_BLOCK.DefaultPortRcvAuthorizationState", default_port_rcv_authorization_state, 0x6820, 0x20, true, 0x2640a8114662b73)
#define _m246 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pci_device_custom_properties_t), "_NDIS_MINIPORT_BLOCK.PciDeviceCustomProperties", pci_device_custom_properties, 0x6840, 0xa0, true, 0x516e4094b9dee24f)
#define _m247 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.TopNdis5PacketIndicateHandler", top_ndis5_packet_indicate_handler, 0x6a00, 0x40, true, 0x9779ae964589306)
#define _m248 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_NDIS_MINIPORT_BLOCK.ndisSupportedOidList", ndis_supported_oid_list, 0x6a40, 0x40, true, 0x36293c61dcc3013c)
#define _m249 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.ndisSupportedOidListLength", ndis_supported_oid_list_length, 0x6a80, 0x20, true, 0x28bac76fd555afcd)
#define _m250 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.MsiIntCount", msi_int_count, 0x6aa0, 0x20, true, 0x3d583b5b38cd79d1)
#define _m251 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_NDIS_MINIPORT_BLOCK.MiniportDpcWorkItem", miniport_dpc_work_item, 0x6ac0, 0x0, true, 0x706594383bb80dd1)
#define _m252 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.InvalidFrames", invalid_frames, 0x6bc0, 0x40, true, 0x62a66b9f36d11587)
#define _m253 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_BLOCK.PagingPathCount", paging_path_count, 0x6c00, 0x20, true, 0x38c4dcb1bf8e91cf)
#define _m254 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_BLOCK.ReceiveQueueList", receive_queue_list, 0x6c40, 0x80, true, 0xace6feda1fd49c46)
#define _m255 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_MINIPORT_BLOCK.AllocatedQueueIndices", allocated_queue_indices, 0x6cc0, 0x40, true, 0x11d1566520f3d81a)
#define _m256 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.AllocatedQueueIndicesLength", allocated_queue_indices_length, 0x6d00, 0x20, true, 0x70efe1c65c164ad8)
#define _m257 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.NumReceiveQueues", num_receive_queues, 0x6d20, 0x20, true, 0xaf5701e749eb1e37)
#define _m258 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_BLOCK.ReceiveFilterList", receive_filter_list, 0x6d40, 0x80, true, 0x90c646113bfcb8b7)
#define _m259 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_MINIPORT_BLOCK.AllocatedReceiveFilterIndices", allocated_receive_filter_indices, 0x6dc0, 0x40, true, 0x8caba179802d1fb)
#define _m260 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.AllocatedReceiveFilterIndicesLength", allocated_receive_filter_indices_length, 0x6e00, 0x20, true, 0xd8ca32761ec4ae0c)
#define _m261 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.NumReceiveFilters", num_receive_filters, 0x6e20, 0x20, true, 0x6d47c948abc3b722)
#define _m262 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.EnabledReceiveFilterTypes", enabled_receive_filter_types, 0x6e40, 0x20, true, 0x34c23dc8c1f9ef7a)
#define _m263 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.EnabledReceiveQueueTypes", enabled_receive_queue_types, 0x6e60, 0x20, true, 0x79ab502e90e80e31)
#define _m264 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_filter_capabilities_t*), "_NDIS_MINIPORT_BLOCK.ReceiveFilterHwCapabilities", receive_filter_hw_capabilities, 0x6e80, 0x40, true, 0x2e55ee365dbb0867)
#define _m265 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_filter_capabilities_t*), "_NDIS_MINIPORT_BLOCK.ReceiveFilterCurrentCapabilities", receive_filter_current_capabilities, 0x6ec0, 0x40, true, 0x1fe7b8e637d106ce)
#define _m266 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_filter_capabilities_t*), "_NDIS_MINIPORT_BLOCK.TopReceiveFilterCurrentCapabilities", top_receive_filter_current_capabilities, 0x6f00, 0x40, true, 0x2c5d013bb6e65dc9)
#define _m267 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_capabilities_t*), "_NDIS_MINIPORT_BLOCK.NicSwitchHwCapabilities", nic_switch_hw_capabilities, 0x6f40, 0x40, true, 0x2b08aa329efd757c)
#define _m268 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_capabilities_t*), "_NDIS_MINIPORT_BLOCK.NicSwitchCurrentCapabilities", nic_switch_current_capabilities, 0x6f80, 0x40, true, 0x7946c3bcd1a3c237)
#define _m269 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_capabilities_t*), "_NDIS_MINIPORT_BLOCK.TopNicSwitchCurrentCapabilities", top_nic_switch_current_capabilities, 0x6fc0, 0x40, true, 0x67f2781dd259fc4a)
#define _m270 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_BLOCK.SharedMemoryBlockList", shared_memory_block_list, 0x7000, 0x80, true, 0xe7b2485636990d9b)
#define _m271 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::shared_memory_parameters_t*, void**)>*), "_NDIS_MINIPORT_BLOCK.AllocateSharedMemoryHandler", allocate_shared_memory_handler, 0x7080, 0x40, true, 0x4023c3a963680e1)
#define _m272 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_MINIPORT_BLOCK.FreeSharedMemoryHandler", free_shared_memory_handler, 0x70c0, 0x40, true, 0x72f930fcb926f184)
#define _m273 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.AllocateSharedMemoryContext", allocate_shared_memory_context, 0x7100, 0x40, true, 0xbd9807138124c1a1)
#define _m274 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::msi_capability_t), "_NDIS_MINIPORT_BLOCK.MsiCaps", msi_caps, 0x7140, 0xc0, true, 0x1a7d989bfac03121)
#define _m275 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::msix_capability_t), "_NDIS_MINIPORT_BLOCK.MsiXCaps", msi_x_caps, 0x7200, 0x60, true, 0x9eab09613d05243e)
#define _m276 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.NumberOfIndirectionTableChanges", number_of_indirection_table_changes, 0x7280, 0x40, true, 0x99cd30cf59db2c4)
#define _m277 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.PciDeviceSriovSupport", pci_device_sriov_support, 0x72c0, 0x20, true, 0x1bb92ce9a038f4b4)
#define _m278 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.BeginSavedFields", begin_saved_fields, 0x72e0, 0x8, true, 0x8dd940f83d5c20bd)
#define _m279 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.NumUserOpens", num_user_opens, 0x72e0, 0x20, true, 0x607ab2f37019b1fe)
#define _m280 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_offload_reg_t), "_NDIS_MINIPORT_BLOCK.OffloadRegistry", offload_registry, 0x7300, 0x20, true, 0x18a7c1db36f4b5c1)
#define _m281 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.MediaDisconnectTimeOut", media_disconnect_time_out, 0x7320, 0x10, true, 0x896a345584f453fb)
#define _m282 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.SGMapRegistersNeeded", sg_map_registers_needed, 0x7330, 0x10, true, 0x52aa7ec4a6d387dd)
#define _m283 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.DriverVerifyFlags", driver_verify_flags, 0x7340, 0x20, true, 0x17c2c0af23f68c58)
#define _m284 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t, void*, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.SetBusData", set_bus_data, 0x7380, 0x40, true, 0xca2c3a63f4e7155e)
#define _m285 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint32_t, void*, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.GetBusData", get_bus_data, 0x73c0, 0x40, true, 0x7b43773a30b4b712)
#define _m286 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.BusDataContext", bus_data_context, 0x7400, 0x40, true, 0xa9e63f701829b607)
#define _m287 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_NDIS_MINIPORT_BLOCK.BusType", bus_type, 0x7440, 0x20, true, 0x906037afb0372747)
#define _m288 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.BusNumber", bus_number, 0x7460, 0x20, true, 0x598bd15a89b8934)
#define _m289 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::event_t), "_NDIS_MINIPORT_BLOCK.OpenReadyEvent", open_ready_event, 0x7480, 0xc0, true, 0xb48ba7f9f8e79a6d)
#define _m290 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.NumAdminOpens", num_admin_opens, 0x7540, 0x20, true, 0xe6faf41d8aa6dc8f)
#define _m291 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::m_driver_block_t*), "_NDIS_MINIPORT_BLOCK.DriverHandle", driver_handle, 0x7580, 0x40, true, 0x1e82ec0fb32481b8)
#define _m292 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::bind_paths_t*), "_NDIS_MINIPORT_BLOCK.BindPaths", bind_paths, 0x75c0, 0x40, true, 0x10ff27c588fbbd89)
#define _m293 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::physical_medium_t), "_NDIS_MINIPORT_BLOCK.MiniportPhysicalMediumType", miniport_physical_medium_type, 0x7600, 0x20, true, 0xfbdeddc8f0eb7f4e)
#define _m294 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.SecurityDescriptor", security_descriptor, 0x7640, 0x40, true, 0xcba7750e389f15b3)
#define _m295 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_MINIPORT_BLOCK.BaseName", base_name, 0x7680, 0x80, true, 0x3e7ee4f68ab86e3c)
#define _m296 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_MINIPORT_BLOCK.MiniportName", miniport_name, 0x7700, 0x80, true, 0xa606fda314b9fc32)
#define _m297 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_NDIS_MINIPORT_BLOCK.DeviceObject", device_object, 0x7780, 0x40, true, 0xebe8e66684e17a41)
#define _m298 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_NDIS_MINIPORT_BLOCK.PhysicalDeviceObject", physical_device_object, 0x77c0, 0x40, true, 0x647c15db24dbf62f)
#define _m299 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_NDIS_MINIPORT_BLOCK.NextDeviceObject", next_device_object, 0x7800, 0x40, true, 0xf5b4a8722ab5f93b)
#define _m300 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_MINIPORT_BLOCK.NextGlobalMiniport", next_global_miniport, 0x7840, 0x40, true, 0xfe48d045c5c0c74a)
#define _m301 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_MINIPORT_BLOCK.pAdapterInstanceName", p_adapter_instance_name, 0x7880, 0x40, true, 0xf757b49f6db07a2f)
#define _m302 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.PnPCapabilities", pn_p_capabilities, 0x78c0, 0x20, true, 0x34e0ba86ab5003ac)
#define _m303 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_NDIS_MINIPORT_BLOCK.CurrentDevicePowerState", current_device_power_state, 0x78e0, 0x20, true, 0xeb5248391b024b17)
#define _m304 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.PowerStateLock", power_state_lock, 0x7900, 0x40, true, 0x34692f9788e90c7f)
#define _m305 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_NDIS_MINIPORT_BLOCK.DriverPowerState", driver_power_state, 0x7940, 0x20, true, 0x4e4aedc728454558)
#define _m306 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_NDIS_MINIPORT_BLOCK.PrevDriverPowerState", prev_driver_power_state, 0x7960, 0x20, true, 0x249f6f5c49af04cb)
#define _m307 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_buffer_list_t*), "_NDIS_MINIPORT_BLOCK.LowPowerRcvReturnNbls", low_power_rcv_return_nbls, 0x7980, 0x40, true, 0x8ac95c09a6066f43)
#define _m308 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.PendingReturnNBLCount", pending_return_nbl_count, 0x79c0, 0x20, true, 0x11e4a38973962cdb)
#define _m309 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.SurpriseRemoveFlushedRcvReturnQueue", surprise_remove_flushed_rcv_return_queue, 0x79e0, 0x8, true, 0x9e51909648881c9e)
#define _m310 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_MINIPORT_BLOCK.LowPowerRcvReturnNblTracker", low_power_rcv_return_nbl_tracker, 0x7a00, 0x40, true, 0x1d85f058ca043b00)
#define _m311 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_admin_config_t), "_NDIS_MINIPORT_BLOCK.PMAdminConfig", pm_admin_config, 0x7a40, 0x20, true, 0xa7fcf1ca5be9b633)
#define _m312 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t), "_NDIS_MINIPORT_BLOCK.PMPatternSemaphore", pm_pattern_semaphore, 0x7a80, 0x0, true, 0xe4e8e8275889c625)
#define _m313 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t), "_NDIS_MINIPORT_BLOCK.PMOffloadSemaphore", pm_offload_semaphore, 0x7b80, 0x0, true, 0x5d64bde6196098d8)
#define _m314 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.BusInterface", bus_interface, 0x7c80, 0x40, true, 0xd0ee5d8f15bce02)
#define _m315 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.InstanceNumber", instance_number, 0x7cc0, 0x10, true, 0x5f67982399cfac3a)
#define _m316 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.ConfigurationHandle", configuration_handle, 0x7d00, 0x40, true, 0xfc30b65ed38e2454)
#define _m317 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_MINIPORT_BLOCK.InterfaceGuid", interface_guid, 0x7d40, 0x80, true, 0x6c63e9f85bb5de89)
#define _m318 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_MINIPORT_BLOCK.NetLuid", net_luid, 0x7dc0, 0x40, true, 0xc2a198359ecbfcdc)
#define _m319 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.IfBlockAvailable", if_block_available, 0x7e00, 0x8, true, 0x4e2a8a829daef45b)
#define _m320 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_block_t*), "_NDIS_MINIPORT_BLOCK.IfBlock", if_block, 0x7e40, 0x40, true, 0x289b3f16c23e375b)
#define _m321 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_MINIPORT_BLOCK.IfBlockPointerRefZeroEvent", if_block_pointer_ref_zero_event, 0x7e80, 0x40, true, 0xa8c505f46c8c9736)
#define _m322 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.IfIndex", if_index, 0x7ec0, 0x20, true, 0xe9dc88ceb5f99c4f)
#define _m323 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_admin_status_t), "_NDIS_MINIPORT_BLOCK.AdminStatus", admin_status, 0x7ee0, 0x20, true, 0x3b0b8e60c45c847)
#define _m324 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_oper_status_t), "_NDIS_MINIPORT_BLOCK.OperStatus", oper_status, 0x7f00, 0x20, true, 0xae77ad41c7781ca0)
#define _m325 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.OperStatusFlags", oper_status_flags, 0x7f20, 0x20, true, 0x1f220a0051d387)
#define _m326 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.SendHandler", send_handler, 0x7f40, 0x40, true, 0x3cd0fc34a63a9d2c)
#define _m327 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::wan_packet_t*)>*), "_NDIS_MINIPORT_BLOCK.WanSendHandler", wan_send_handler, 0x7f40, 0x40, true, 0x75446bd6744b8835)
#define _m328 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nbl_tracker_handle_t*), "_NDIS_MINIPORT_BLOCK.NblTracker", nbl_tracker, 0x7f80, 0x40, true, 0x416c86f4e1c5b4b6)
#define _m329 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::device_reset_interface_standard_t*), "_NDIS_MINIPORT_BLOCK.ReenumerateSelfInterface", reenumerate_self_interface, 0x7fc0, 0x40, true, 0xa2f3326f9b6781cb)
#define _m330 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_offload_t*), "_NDIS_MINIPORT_BLOCK.Offload", offload, 0x8000, 0x40, true, 0x9e83c455ba3201f9)
#define _m331 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.NDKBlock", ndk_block, 0x8040, 0x40, true, 0x9b4b08d59d2038f4)
#define _m332 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.AddDeviceContext", add_device_context, 0x8080, 0x40, true, 0x1a24bc00bbabce06)
#define _m333 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::remove_lock_t), "_NDIS_MINIPORT_BLOCK.RemoveLock", remove_lock, 0x80c0, 0x0, true, 0x2ef6d21e456c5d23)
#define _m334 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_MINIPORT_BLOCK.DevinterfaceNetSymbolicLinkName", devinterface_net_symbolic_link_name, 0x81c0, 0x80, true, 0xfc61006aa8634ffd)
#define _m335 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.PhysicalMediumInInf", physical_medium_in_inf, 0x8240, 0x20, true, 0xce2bca3e00c5bee)
#define _m336 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.StatusProcessingThread", status_processing_thread, 0x8300, 0x40, true, 0x2f6a58f01e193f09)
#define _m337 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_MINIPORT_BLOCK.FdoName", fdo_name, 0x8340, 0x80, true, 0x585d47eecf38d8c)
#define _m338 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_MINIPORT_BLOCK.PowerD0CompleteEvent", power_d0_complete_event, 0x83c0, 0xc0, true, 0x6be94024a7b68f20)
#define _m339 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_BLOCK.LastD0CompleteStatus", last_d0_complete_status, 0x8480, 0x20, true, 0x35dc3672285ea6e5)
#define _m340 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::miniport_event_t), "_NDIS_MINIPORT_BLOCK.LastD0Reason", last_d0_reason, 0x84a0, 0x10, true, 0xc51ab40d6e884622)
#define _m341 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.DirectOidRequestCount", direct_oid_request_count, 0x84c0, 0x20, true, 0x151fb9e671e87053)
#define _m342 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_MINIPORT_BLOCK.AllDirectRequestsCompletedEvent", all_direct_requests_completed_event, 0x8500, 0x40, true, 0x687395cfb9493c69)
#define _m343 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::hd_split_current_config_t*), "_NDIS_MINIPORT_BLOCK.HDSplitCurrentConfig", hd_split_current_config, 0x8540, 0x40, true, 0x75f04668a3a268a2)
#define _m344 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.MSIXConfigContext", msix_config_context, 0x8580, 0x40, true, 0x596f5a8bfcd00ea1)
#define _m345 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.SetMSIXTableEntry", set_msix_table_entry, 0x85c0, 0x40, true, 0xbc83bece95fd2992)
#define _m346 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.MaskMSIXTableEntry", mask_msix_table_entry, 0x8600, 0x40, true, 0xe3478df72e2dbdee)
#define _m347 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.UnmaskMSIXTableEntry", unmask_msix_table_entry, 0x8640, 0x40, true, 0x395d5c62dcb1f704)
#define _m348 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_NDIS_MINIPORT_BLOCK.DevicePowerStateWorkItem", device_power_state_work_item, 0x8680, 0x0, true, 0x2a8a4b549517fb6b)
#define _m349 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_NDIS_MINIPORT_BLOCK.SystemPowerStateWorkItem", system_power_state_work_item, 0x8780, 0x0, true, 0x4435684c3e8eec83)
#define _m350 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_queue_block_t*), "_NDIS_MINIPORT_BLOCK.DefaultReceiveQueue", default_receive_queue, 0x8880, 0x40, true, 0x14590c8b2926bbfd)
#define _m351 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.MaxNumRssProcessors", max_num_rss_processors, 0x88c0, 0x20, true, 0x880b5329de28ca1e)
#define _m352 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_number_t), "_NDIS_MINIPORT_BLOCK.RssBaseProcessor", rss_base_processor, 0x88e0, 0x20, true, 0x70137fcc87b5eaa3)
#define _m353 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_number_t), "_NDIS_MINIPORT_BLOCK.RssMaxProcessor", rss_max_processor, 0x8900, 0x20, true, 0xbf9fe9b82a45e4e9)
#define _m354 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::rss_profile_t), "_NDIS_MINIPORT_BLOCK.RssProfile", rss_profile, 0x8920, 0x20, true, 0x95e85d2aeee2496)
#define _m355 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.NumaNodeId", numa_node_id, 0x8940, 0x10, true, 0xcab9b0ba61a40a0)
#define _m356 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_NDIS_MINIPORT_BLOCK.NumaDistances", numa_distances, 0x8980, 0x40, true, 0x319453af673b34d1)
#define _m357 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_MINIPORT_BLOCK.pModifiedInstanceName", p_modified_instance_name, 0x89c0, 0x40, true, 0x76bd51465637a915)
#define _m358 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.SyncFlags", sync_flags, 0x8a00, 0x20, true, 0xe4eee605ec0b80d8)
#define _m359 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.WSyncFlags", w_sync_flags, 0x8a20, 0x20, true, 0xd7df09cb7534537c)
#define _m360 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.InterlockedFlags", interlocked_flags, 0x8a40, 0x20, true, 0x1c5b704a6fff076e)
#define _m361 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ulong_reference_t), "_NDIS_MINIPORT_BLOCK.Ref", ref, 0x8a80, 0x80, true, 0x5a167c67de871fbd)
#define _m362 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::selective_suspend_t*), "_NDIS_MINIPORT_BLOCK.SelectiveSuspend", selective_suspend, 0x8b00, 0x40, true, 0x35a6dab193f8142c)
#define _m363 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_aoac_t*), "_NDIS_MINIPORT_BLOCK.AoAc", ao_ac, 0x8b40, 0x40, true, 0x38213b05360ec359)
#define _m364 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::pm_wake_reason_type_t), "_NDIS_MINIPORT_BLOCK.LastWakeReason", last_wake_reason, 0x8b80, 0x20, true, 0xd344dc477dfebd5c)
#define _m365 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::event_log_handle_t*), "_NDIS_MINIPORT_BLOCK.PnpEventLog", pnp_event_log, 0x8bc0, 0x40, true, 0x472387995a7148f1)
#define _m366 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::d0_signal_work_item_t), "_NDIS_MINIPORT_BLOCK.D0CompleteSignalWorkItem", d0_complete_signal_work_item, 0x8c00, 0xc0, true, 0x7af6e7f990a70a88)
#define _m367 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::physical_performance_counters_t*), "_NDIS_MINIPORT_BLOCK.PhysicalPerformanceCounters", physical_performance_counters, 0x8ec0, 0x40, true, 0x6062e95f2cce22b9)
#define _m368 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_MINIPORT_BLOCK.TimeOfInitialization", time_of_initialization, 0x8f00, 0x40, true, 0xc51fc619ae195e76)
#define _m369 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_MINIPORT_BLOCK.LastSystemSleepTime", last_system_sleep_time, 0x8f40, 0x40, true, 0x3a6a727086d86aca)
#define _m370 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.TotalSystemSleepTimeMs", total_system_sleep_time_ms, 0x8f80, 0x40, true, 0xf949f9af071aea64)
#define _m371 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::sriov_capabilities_t*), "_NDIS_MINIPORT_BLOCK.SriovHwCapabilities", sriov_hw_capabilities, 0x8fc0, 0x40, true, 0xc5ad27e602b53aa9)
#define _m372 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::sriov_capabilities_t*), "_NDIS_MINIPORT_BLOCK.SriovCurrentCapabilities", sriov_current_capabilities, 0x9000, 0x40, true, 0xb42d38d1bf90edd3)
#define _m373 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.InvalidateBlockMask", invalidate_block_mask, 0x9040, 0x40, true, 0xaea546c3cf7a4217)
#define _m374 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_NDIS_MINIPORT_BLOCK.InvalidateBlockIoctlPf", invalidate_block_ioctl_pf, 0x9080, 0x40, true, 0xe2854dd934f34319)
#define _m375 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_NDIS_MINIPORT_BLOCK.InvalidateBlockIoctlVf", invalidate_block_ioctl_vf, 0x90c0, 0x40, true, 0x9c10ee7172d19eeb)
#define _m376 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::vpci_invalidate_block_output_t), "_NDIS_MINIPORT_BLOCK.InvalidateBlockVfParams", invalidate_block_vf_params, 0x9100, 0x40, true, 0xb357dff17fe4590e)
#define _m377 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_MINIPORT_BLOCK.InvalidateBlockEvent", invalidate_block_event, 0x9140, 0xc0, true, 0x90edd59c7c67d21e)
#define _m378 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_BLOCK.InvalidateVfId", invalidate_vf_id, 0x9200, 0x10, true, 0xe37f170babbee3da)
#define _m379 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.InvalidateBlockCancelling", invalidate_block_cancelling, 0x9210, 0x8, true, 0xda7e8709be396ca3)
#define _m380 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pf_block_t*), "_NDIS_MINIPORT_BLOCK.PFBlock", pf_block, 0x9240, 0x40, true, 0x31a3fe4d583ddb62)
#define _m381 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.NumSwitches", num_switches, 0x9280, 0x20, true, 0x152af72650a73f71)
#define _m382 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_BLOCK.NicSwitchList", nic_switch_list, 0x92c0, 0x80, true, 0x625789b8174f4285)
#define _m383 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.NumAllocatedVFs", num_allocated_v_fs, 0x9340, 0x20, true, 0x4bd958b85a2e5a37)
#define _m384 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_BLOCK.VFList", vf_list, 0x9380, 0x80, true, 0x7b7a32843f703989)
#define _m385 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.NumActiveVPorts", num_active_v_ports, 0x9400, 0x20, true, 0x873e70044640de8d)
#define _m386 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_BLOCK.VPortList", v_port_list, 0x9440, 0x80, true, 0x1bd7747bc30b1bc1)
#define _m387 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_MINIPORT_BLOCK.AllocatedVPortIndices", allocated_v_port_indices, 0x94c0, 0x40, true, 0xa070492a1c672973)
#define _m388 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.AllocatedVPortIndicesLength", allocated_v_port_indices_length, 0x9500, 0x20, true, 0x667f344f94147e6)
#define _m389 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint16_t, void*, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.SetVirtualFunctionData", set_virtual_function_data, 0x9540, 0x40, true, 0xac682772aaf62ece)
#define _m390 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint16_t, void*, uint32_t, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.GetVirtualFunctionData", get_virtual_function_data, 0x9580, 0x40, true, 0xb5f0cfb08ad13345)
#define _m391 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint16_t, uint8_t, uint8_t, uint8_t)>*), "_NDIS_MINIPORT_BLOCK.EnableVirtualization", enable_virtualization, 0x95c0, 0x40, true, 0x15d7d2b4bda0cf8)
#define _m392 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint16_t, uint16_t*, uint8_t*, uint8_t*)>*), "_NDIS_MINIPORT_BLOCK.GetVirtualDeviceLocation", get_virtual_device_location, 0x9600, 0x40, true, 0xfc1955afaa5ec9f1)
#define _m393 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "_NDIS_MINIPORT_BLOCK.GetVirtualFunctionProbedBars", get_virtual_function_probed_bars, 0x9640, 0x40, true, 0x1d1fbc636bb5bb29)
#define _m394 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.VirtInterfaceContext", virt_interface_context, 0x9680, 0x40, true, 0x96f9f25fd23d5758)
#define _m395 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_MINIPORT_BLOCK.DevinterfaceVirtSymbolicLinkName", devinterface_virt_symbolic_link_name, 0x96c0, 0x80, true, 0x21dbd625025babf4)
#define _m396 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_MINIPORT_BLOCK.VpciInterfaceDereference", vpci_interface_dereference, 0x9740, 0x40, true, 0xc5f954aad305a415)
#define _m397 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.WriteVfConfigBlock", write_vf_config_block, 0x9780, 0x40, true, 0xe41a919b45770452)
#define _m398 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint32_t)>*), "_NDIS_MINIPORT_BLOCK.ReadVfConfigBlock", read_vf_config_block, 0x97c0, 0x40, true, 0x7744ba9d7311f4e4)
#define _m399 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.VpciInterfaceContext", vpci_interface_context, 0x9800, 0x40, true, 0x3bc4a4d1fa935ae3)
#define _m400 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.VfSerialNumber", vf_serial_number, 0x9840, 0x20, true, 0xe4018a5867d5c048)
#define _m401 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_NDIS_MINIPORT_BLOCK.SriovLuid", sriov_luid, 0x9860, 0x40, true, 0x1f0e76a625a2de68)
#define _m402 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::refcount_handle_t*), "_NDIS_MINIPORT_BLOCK.RefCountTracker", ref_count_tracker, 0x98c0, 0x40, true, 0xfdb0e0fdbf48e37b)
#define _m403 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::refcount_handle_t*), "_NDIS_MINIPORT_BLOCK.NsiRefCountTracker", nsi_ref_count_tracker, 0x9900, 0x40, true, 0x627d33c0de28c38e)
#define _m404 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::qos_capabilities_t*), "_NDIS_MINIPORT_BLOCK.QosHwCapabilities", qos_hw_capabilities, 0x9940, 0x40, true, 0x685685455fd59656)
#define _m405 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::qos_capabilities_t*), "_NDIS_MINIPORT_BLOCK.QosCurrentCapabilities", qos_current_capabilities, 0x9980, 0x40, true, 0x1d920d99d310c8d6)
#define _m406 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::qos_parameters_t*), "_NDIS_MINIPORT_BLOCK.QosOperationalParameters", qos_operational_parameters, 0x99c0, 0x40, true, 0x8d6d6cee5c918649)
#define _m407 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.QosOperationalParametersBufferSize", qos_operational_parameters_buffer_size, 0x9a00, 0x20, true, 0x38a15656fe8858b9)
#define _m408 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::qos_parameters_t*), "_NDIS_MINIPORT_BLOCK.QosRemoteParameters", qos_remote_parameters, 0x9a40, 0x40, true, 0x5416ef0185ae4e43)
#define _m409 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.QosRemoteParametersBufferSize", qos_remote_parameters_buffer_size, 0x9a80, 0x20, true, 0xff8f2e6d64c3b692)
#define _m410 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_BLOCK.DeviceFlags", device_flags, 0x9ac0, 0x40, true, 0x785022d0b3afb4e2)
#define _m411 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.VerifierContext", verifier_context, 0x9b00, 0x40, true, 0x88885f1e4d3c139a)
#define _m412 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::work_queue_item_t, struct ndis::workitem_with_irp_t>), "_NDIS_MINIPORT_BLOCK.SurpriseRemovalWorkItem", surprise_removal_work_item, 0x9b40, 0x0, true, 0x26d76e614e0bb36f)
#define _m413 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_MINIPORT_BLOCK.PmInterruptedByPnp", pm_interrupted_by_pnp, 0xa480, 0x8, true, 0x6ea2264c9f7754b4)
#define _m414 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_MINIPORT_BLOCK.DoNotBlockOnMiniportLock", do_not_block_on_miniport_lock, 0xa488, 0x8, true, 0x73bc31d72fb3b39)
#define _m415 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_MINIPORT_BLOCK.PoFxDStateReportingEnabled", po_fx_d_state_reporting_enabled, 0xa490, 0x8, true, 0xed2abbd4a6374448)
#define _m416 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_hook_adapter_handle_t*), "_NDIS_MINIPORT_BLOCK.HookAdapterHandle", hook_adapter_handle, 0xa4c0, 0x40, true, 0xec6be3cdcb1683d1)
#define _m417 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_NDIS_MINIPORT_BLOCK.InterfaceUpdateWorkItem", interface_update_work_item, 0xa500, 0x0, true, 0x9e2a5e4f59e2eb4a)
#define _m418 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_MINIPORT_BLOCK.InterfaceUpdateInProgress", interface_update_in_progress, 0xa600, 0x8, true, 0xb8c58fbe4ebb7354)
#define _m419 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_MINIPORT_BLOCK.MacAddressUpdateQueued", mac_address_update_queued, 0xa608, 0x8, true, 0x1385b8ddf937e910)
#define _m420 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_MINIPORT_BLOCK.MtuUpdateQueued", mtu_update_queued, 0xa610, 0x8, true, 0x7e7661ccbb16b249)
#define _m421 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_physical_address_lh_t), "_NDIS_MINIPORT_BLOCK.PendingMacAddress", pending_mac_address, 0xa620, 0x10, true, 0x7ffd9d077e2a015f)
#define _m422 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.PendingMtuSize", pending_mtu_size, 0xa740, 0x20, true, 0x94d41eebd35c990)
#define _m423 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct power::work_item_t, struct ndis::workitem_with_irp_t>), "_NDIS_MINIPORT_BLOCK.DevicePowerOnWorkItem", device_power_on_work_item, 0xa7c0, 0x40, true, 0x172237262e35ef1f)
#define _m424 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct power::work_item_t, struct ndis::workitem_with_irp_t>), "_NDIS_MINIPORT_BLOCK.DevicePowerDownWorkItem", device_power_down_work_item, 0xa900, 0x40, true, 0x62176343512d6f7a)
#define _m425 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pd_block_t*), "_NDIS_MINIPORT_BLOCK.PDBlock", pd_block, 0xab00, 0x40, true, 0xff57c0eca691c34d)
#define _m426 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_BLOCK.PdcHandle", pdc_handle, 0xab40, 0x40, true, 0x8d0b4d2d80a84323)
#define _m427 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timer_t), "_NDIS_MINIPORT_BLOCK.PdcTaskClientDisableTimer", pdc_task_client_disable_timer, 0xab80, 0x0, true, 0xab01da9149bbf086)
#define _m428 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::work_item_t), "_NDIS_MINIPORT_BLOCK.PdcTaskClientDisableWorkItem", pdc_task_client_disable_work_item, 0xaf80, 0x80, true, 0xe23ddfac89041741)
#define _m429 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_NDIS_MINIPORT_BLOCK.PdcTaskClientMode", pdc_task_client_mode, 0xb200, 0x20, true, 0x2b64f13ee4d21ef2)
#define _m430 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.ModernStandbyWoLMagicPacketEnable", modern_standby_wo_l_magic_packet_enable, 0xb220, 0x20, true, 0x78d675d8d16d00c9)
#define _m431 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NDIS_MINIPORT_BLOCK.DataLinkLayerType", data_link_layer_type, 0x3980, 0x20, true, 0x103b12deca2084ef)
#define _m432 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NDIS_MINIPORT_BLOCK.MpSpecifiedMediaType", mp_specified_media_type, 0x39a0, 0x20, true, 0x10de2c56ff421d04)
#define _m433 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.TimestampFlags", timestamp_flags, 0x53c0, 0x20, true, 0x3a7e7c589f05f882)
#define _m434 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_NDIS_MINIPORT_BLOCK.PnPInstanceId", pn_p_instance_id, 0xa780, 0x40, true, 0x3f9876280342fbe6)
#define _m435 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::rss_dpc_worker_context_t*), "_NDIS_MINIPORT_BLOCK.RssV2Context", rss_v2_context, 0xb280, 0x40, true, 0x17f54c6d8dfaace5)
#define _m436 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_NDIS_MINIPORT_BLOCK.RssV2CompletionCount", rss_v2_completion_count, 0xb2c0, 0x20, true, 0x3d5dbe1ff198d38c)
#define _m437 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_MINIPORT_BLOCK.RssV2CompletionEvent", rss_v2_completion_event, 0xb300, 0xc0, true, 0xd416c22ed9e41496)
#define _m438 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.RssV2Initialized", rss_v2_initialized, 0xb3c0, 0x8, true, 0x90da1403b0ebae2a)
#define _m439 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_MINIPORT_BLOCK.SynchronousOidCalls", synchronous_oid_calls, 0xb400, 0x80, true, 0xd6e2c80d18eb5fe)
#define _m440 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timestamp_capabilities_t*), "_NDIS_MINIPORT_BLOCK.HwTimestampCapabilities", hw_timestamp_capabilities, 0xb480, 0x40, true, 0xfb2621b0e4bf5014)
#define _m441 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timestamp_capabilities_t*), "_NDIS_MINIPORT_BLOCK.HwTimestampCurrentConfig", hw_timestamp_current_config, 0xb4c0, 0x40, true, 0x1690ed11b81e7c55)
#define _m442 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timestamp_capabilities_t*), "_NDIS_MINIPORT_BLOCK.TopTimestampConfig", top_timestamp_config, 0xb500, 0x40, true, 0x751850cd0c203e43)
#define _m443 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timestamp_capabilities_t*), "_NDIS_MINIPORT_BLOCK.TopHwTimestampCapabilities", top_hw_timestamp_capabilities, 0xb540, 0x40, true, 0xfcccbde5aa41d823)
#define _m444 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pktmon_component_context_t), "_NDIS_MINIPORT_BLOCK.PktMonComp", pkt_mon_comp, 0xb580, 0x80, true, 0x8d51888e157dc890)
#define _m445 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pktmon_edge_context_t), "_NDIS_MINIPORT_BLOCK.PktMonEdge", pkt_mon_edge, 0xb600, 0xc0, true, 0xc6f84b68814f7df2)
#define _m446 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_MINIPORT_BLOCK.ModernStandbySystemWakeEnabled", modern_standby_system_wake_enabled, 0xb240, 0x8, true, 0xbbadb35c40a9eda1)
#define _m447 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_setup_store_type_t), "_NDIS_MINIPORT_BLOCK.LWMConfigurationStore", lwm_configuration_store, 0xb6c0, 0x20, true, 0xc23576ba10d55fcc)
#define _m448 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.LockDbg", lock_dbg, 0x0, 0x0, false, 0x4d160dcf76b537bf)
#define _m449 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.LockDbgX", lock_dbg_x, 0x0, 0x0, false, 0xa223ff8d662758af)
#define _m450 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.RecvLockDbg", recv_lock_dbg, 0x0, 0x0, false, 0xffe84af02f4937ab)
#define _m451 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.cDpcSendCompletes", c_dpc_send_completes, 0x0, 0x0, false, 0x84bf8fcc65d78bd1)
#define _m452 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.cDpcRcvIndications", c_dpc_rcv_indications, 0x0, 0x0, false, 0x61676b08511ddaf7)
#define _m453 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.cDpcRcvIndicationCalls", c_dpc_rcv_indication_calls, 0x0, 0x0, false, 0x2a2eec99777565d5)
#define _m454 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.cDpcNbSendCompletes", c_dpc_nb_send_completes, 0x0, 0x0, false, 0x8db5e43d550565bb)
#define _m455 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.cDpcNblSendCompletes", c_dpc_nbl_send_completes, 0x0, 0x0, false, 0x5a2d8670ccb910e)
#define _m456 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.cDpcNblIndications", c_dpc_nbl_indications, 0x0, 0x0, false, 0xb7099f1814f4767)
#define _m457 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.cDpcMaxPacketsIndicated", c_dpc_max_packets_indicated, 0x0, 0x0, false, 0x4ffcdc5f8822a13d)
#define _m458 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.cDpcTotalDpcCount", c_dpc_total_dpc_count, 0x0, 0x0, false, 0x22359ec6cd64f627)
#define _m459 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.SlotNumber", slot_number, 0x0, 0x0, false, 0x64ee7445c0642cb)
#define _m460 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_BLOCK.StatusProcessingDbgX", status_processing_dbg_x, 0x0, 0x0, false, 0xf43f00327c493e14)
#define _m461 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::recorder_log_t*), "_NDIS_MINIPORT_BLOCK.BlackBoxHandle", black_box_handle, 0x0, 0x0, false, 0xbe6e3cc9a5bc38c9)
#define _m462 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_MINIPORT_BLOCK.PowerCompleteEvent", power_complete_event, 0x0, 0x0, false, 0xe14c71afa1bf876c)
#define _m463 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_MINIPORT_BLOCK.PowerCompleteStatus", power_complete_status, 0x0, 0x0, false, 0x5d93c4477405c940)
#define _m464 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class ndis::knob_namespace_t), "_NDIS_MINIPORT_BLOCK.PollModeConfigKnobsNamespace", poll_mode_config_knobs_namespace, 0x0, 0x0, false, 0x5a65e77b58d5e58d)
#define _m465 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::execution_context_runtime_knobs_t), "_NDIS_MINIPORT_BLOCK.PollModeConfigKnobs", poll_mode_config_knobs, 0x0, 0x0, false, 0x8786ac2b89b5086c)
#define _m466 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_BLOCK.WdfCxPowerManagement", wdf_cx_power_management, 0x0, 0x0, false, 0x3dbf994f76d31858)
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
#define _m136
#define _m137
#define _m138
#define _m139
#define _m140
#define _m141
#define _m142
#define _m143
#define _m144
#define _m145
#define _m146
#define _m147
#define _m148
#define _m149
#define _m150
#define _m151
#define _m152
#define _m153
#define _m154
#define _m155
#define _m156
#define _m157
#define _m158
#define _m159
#define _m160
#define _m161
#define _m162
#define _m163
#define _m164
#define _m165
#define _m166
#define _m167
#define _m168
#define _m169
#define _m170
#define _m171
#define _m172
#define _m173
#define _m174
#define _m175
#define _m176
#define _m177
#define _m178
#define _m179
#define _m180
#define _m181
#define _m182
#define _m183
#define _m184
#define _m185
#define _m186
#define _m187
#define _m188
#define _m189
#define _m190
#define _m191
#define _m192
#define _m193
#define _m194
#define _m195
#define _m196
#define _m197
#define _m198
#define _m199
#define _m200
#define _m201
#define _m202
#define _m203
#define _m204
#define _m205
#define _m206
#define _m207
#define _m208
#define _m209
#define _m210
#define _m211
#define _m212
#define _m213
#define _m214
#define _m215
#define _m216
#define _m217
#define _m218
#define _m219
#define _m220
#define _m221
#define _m222
#define _m223
#define _m224
#define _m225
#define _m226
#define _m227
#define _m228
#define _m229
#define _m230
#define _m231
#define _m232
#define _m233
#define _m234
#define _m235
#define _m236
#define _m237
#define _m238
#define _m239
#define _m240
#define _m241
#define _m242
#define _m243
#define _m244
#define _m245
#define _m246
#define _m247
#define _m248
#define _m249
#define _m250
#define _m251
#define _m252
#define _m253
#define _m254
#define _m255
#define _m256
#define _m257
#define _m258
#define _m259
#define _m260
#define _m261
#define _m262
#define _m263
#define _m264
#define _m265
#define _m266
#define _m267
#define _m268
#define _m269
#define _m270
#define _m271
#define _m272
#define _m273
#define _m274
#define _m275
#define _m276
#define _m277
#define _m278
#define _m279
#define _m280
#define _m281
#define _m282
#define _m283
#define _m284
#define _m285
#define _m286
#define _m287
#define _m288
#define _m289
#define _m290
#define _m291
#define _m292
#define _m293
#define _m294
#define _m295
#define _m296
#define _m297
#define _m298
#define _m299
#define _m300
#define _m301
#define _m302
#define _m303
#define _m304
#define _m305
#define _m306
#define _m307
#define _m308
#define _m309
#define _m310
#define _m311
#define _m312
#define _m313
#define _m314
#define _m315
#define _m316
#define _m317
#define _m318
#define _m319
#define _m320
#define _m321
#define _m322
#define _m323
#define _m324
#define _m325
#define _m326
#define _m327
#define _m328
#define _m329
#define _m330
#define _m331
#define _m332
#define _m333
#define _m334
#define _m335
#define _m336
#define _m337
#define _m338
#define _m339
#define _m340
#define _m341
#define _m342
#define _m343
#define _m344
#define _m345
#define _m346
#define _m347
#define _m348
#define _m349
#define _m350
#define _m351
#define _m352
#define _m353
#define _m354
#define _m355
#define _m356
#define _m357
#define _m358
#define _m359
#define _m360
#define _m361
#define _m362
#define _m363
#define _m364
#define _m365
#define _m366
#define _m367
#define _m368
#define _m369
#define _m370
#define _m371
#define _m372
#define _m373
#define _m374
#define _m375
#define _m376
#define _m377
#define _m378
#define _m379
#define _m380
#define _m381
#define _m382
#define _m383
#define _m384
#define _m385
#define _m386
#define _m387
#define _m388
#define _m389
#define _m390
#define _m391
#define _m392
#define _m393
#define _m394
#define _m395
#define _m396
#define _m397
#define _m398
#define _m399
#define _m400
#define _m401
#define _m402
#define _m403
#define _m404
#define _m405
#define _m406
#define _m407
#define _m408
#define _m409
#define _m410
#define _m411
#define _m412
#define _m413
#define _m414
#define _m415
#define _m416
#define _m417
#define _m418
#define _m419
#define _m420
#define _m421
#define _m422
#define _m423
#define _m424
#define _m425
#define _m426
#define _m427
#define _m428
#define _m429
#define _m430
#define _m431
#define _m432
#define _m433
#define _m434
#define _m435
#define _m436
#define _m437
#define _m438
#define _m439
#define _m440
#define _m441
#define _m442
#define _m443
#define _m444
#define _m445
#define _m446
#define _m447
#define _m448
#define _m449
#define _m450
#define _m451
#define _m452
#define _m453
#define _m454
#define _m455
#define _m456
#define _m457
#define _m458
#define _m459
#define _m460
#define _m461
#define _m462
#define _m463
#define _m464
#define _m465
#define _m466
#endif