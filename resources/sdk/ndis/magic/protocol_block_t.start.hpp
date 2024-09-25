#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PROTOCOL_BLOCK.Header", header, 0x0, 0x20, true, 0x6bb3db278969349)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PROTOCOL_BLOCK.ProtocolDriverContext", protocol_driver_context, 0x40, 0x40, true, 0xbe1c1993433519ac)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::protocol_block_t*), "_NDIS_PROTOCOL_BLOCK.NextProtocol", next_protocol, 0x80, 0x40, true, 0x1c132117fdca31b4)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::open_block_t*), "_NDIS_PROTOCOL_BLOCK.OpenQueue", open_queue, 0xc0, 0x40, true, 0x38b144046d303ea7)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::reference_ex_t), "_NDIS_PROTOCOL_BLOCK.Ref", ref, 0x100, 0xc0, true, 0x6074f4f57df72f3)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PROTOCOL_BLOCK.MajorNdisVersion", major_ndis_version, 0x1c0, 0x8, true, 0x402681f2f497125d)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PROTOCOL_BLOCK.MinorNdisVersion", minor_ndis_version, 0x1c8, 0x8, true, 0x4fc02734c0f5edf7)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PROTOCOL_BLOCK.MajorDriverVersion", major_driver_version, 0x1d0, 0x8, true, 0xcb576207bb84f5b5)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PROTOCOL_BLOCK.MinorDriverVersion", minor_driver_version, 0x1d8, 0x8, true, 0xec8127cdcebb3149)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROTOCOL_BLOCK.Flags", flags, 0x200, 0x20, true, 0x885126ad3458b9c6)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_PROTOCOL_BLOCK.Name", name, 0x240, 0x80, true, 0xd6fc6646c84e042a)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PROTOCOL_BLOCK.IsIPv4", is_i_pv4, 0x2c0, 0x8, true, 0x236f5c56c556b60f)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PROTOCOL_BLOCK.IsIPv6", is_i_pv6, 0x2c8, 0x8, true, 0x9fd0faf9e428de74)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PROTOCOL_BLOCK.IsNdisTest6", is_ndis_test6, 0x2d0, 0x8, true, 0x32120d9e07cd1fff)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::bind_parameters_t*)>*), "_NDIS_PROTOCOL_BLOCK.BindAdapterHandlerEx", bind_adapter_handler_ex, 0x300, 0x40, true, 0x53009167a2cd167)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_NDIS_PROTOCOL_BLOCK.UnbindAdapterHandlerEx", unbind_adapter_handler_ex, 0x340, 0x40, true, 0x2f591b203f095c36)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS_PROTOCOL_BLOCK.OpenAdapterCompleteHandlerEx", open_adapter_complete_handler_ex, 0x380, 0x40, true, 0x4c38946e557d45)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_PROTOCOL_BLOCK.CloseAdapterCompleteHandlerEx", close_adapter_complete_handler_ex, 0x3c0, 0x40, true, 0xb9be9437d9ada155)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_pnp_event_t*)>*), "_NDIS_PROTOCOL_BLOCK.PnPEventHandler", pn_p_event_handler, 0x400, 0x40, true, 0x5606d77f0f375e97)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_pnp_event_notification_t*)>*), "_NDIS_PROTOCOL_BLOCK.NetPnPEventHandler", net_pn_p_event_handler, 0x400, 0x40, true, 0xb448830352baee4c)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_NDIS_PROTOCOL_BLOCK.UnloadHandler", unload_handler, 0x440, 0x40, true, 0xb4a45aa1d1867e29)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_NDIS_PROTOCOL_BLOCK.UninstallHandler", uninstall_handler, 0x480, 0x40, true, 0xc96756b93973aa53)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::request_t*, int32_t)>*), "_NDIS_PROTOCOL_BLOCK.RequestCompleteHandler", request_complete_handler, 0x4c0, 0x40, true, 0x788f78fb675968af)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::status_indication_t*)>*), "_NDIS_PROTOCOL_BLOCK.StatusHandlerEx", status_handler_ex, 0x500, 0x40, true, 0x1cfd77f175fd7b3c)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t, void*, uint32_t)>*), "_NDIS_PROTOCOL_BLOCK.StatusHandler", status_handler, 0x500, 0x40, true, 0x94c03efa90bc01c6)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_PROTOCOL_BLOCK.StatusCompleteHandler", status_complete_handler, 0x540, 0x40, true, 0x84c5bd6a03acaad6)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_PROTOCOL_BLOCK.ReceiveNetBufferListsHandler", receive_net_buffer_lists_handler, 0x580, 0x40, true, 0x9ad0e1e1c926f497)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_PROTOCOL_BLOCK.SendNetBufferListsCompleteHandler", send_net_buffer_lists_complete_handler, 0x5c0, 0x40, true, 0xb9ccc3d9f4e5ee76)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, struct ndis::status_indication_t*)>*), "_NDIS_PROTOCOL_BLOCK.CoStatusHandlerEx", co_status_handler_ex, 0x600, 0x40, true, 0x64724c1ebd75234b)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, int32_t, void*, uint32_t)>*), "_NDIS_PROTOCOL_BLOCK.CoStatusHandler", co_status_handler, 0x600, 0x40, true, 0xe1322558865fda8b)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::co_address_family_t*)>*), "_NDIS_PROTOCOL_BLOCK.CoAfRegisterNotifyHandler", co_af_register_notify_handler, 0x640, 0x40, true, 0x1eaaa1639aa16737)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*), "_NDIS_PROTOCOL_BLOCK.CoReceiveNetBufferListsHandler", co_receive_net_buffer_lists_handler, 0x680, 0x40, true, 0x3587a1cda3129905)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_PROTOCOL_BLOCK.CoSendNetBufferListsCompleteHandler", co_send_net_buffer_lists_complete_handler, 0x6c0, 0x40, true, 0xd827f54e658eb4b6)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t, int32_t)>*), "_NDIS_PROTOCOL_BLOCK.OpenAdapterCompleteHandler", open_adapter_complete_handler, 0x700, 0x40, true, 0xde116c8d266ec6f4)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS_PROTOCOL_BLOCK.CloseAdapterCompleteHandler", close_adapter_complete_handler, 0x740, 0x40, true, 0x77d288207b21e278)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*), "_NDIS_PROTOCOL_BLOCK.SendCompleteHandler", send_complete_handler, 0x780, 0x40, true, 0x6044944b579c1259)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::wan_packet_t*, int32_t)>*), "_NDIS_PROTOCOL_BLOCK.WanSendCompleteHandler", wan_send_complete_handler, 0x780, 0x40, true, 0xa62946b86993f0ca)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::packet_t*, int32_t, uint32_t)>*), "_NDIS_PROTOCOL_BLOCK.TransferDataCompleteHandler", transfer_data_complete_handler, 0x7c0, 0x40, true, 0x219eb2fa912e4007)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_NDIS_PROTOCOL_BLOCK.WanTransferDataCompleteHandler", wan_transfer_data_complete_handler, 0x7c0, 0x40, true, 0xb3f796cdb28ab3f8)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int32_t)>*), "_NDIS_PROTOCOL_BLOCK.ResetCompleteHandler", reset_complete_handler, 0x800, 0x40, true, 0x887aa3c64c88350d)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void*, uint32_t, void*, uint32_t, uint32_t)>*), "_NDIS_PROTOCOL_BLOCK.ReceiveHandler", receive_handler, 0x840, 0x40, true, 0x3194b83044f6c610)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t*, uint32_t)>*), "_NDIS_PROTOCOL_BLOCK.WanReceiveHandler", wan_receive_handler, 0x840, 0x40, true, 0xb64ee32c3d4dedd)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_PROTOCOL_BLOCK.ReceiveCompleteHandler", receive_complete_handler, 0x880, 0x40, true, 0xad05a27a3e2597bb)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::packet_t*)>*), "_NDIS_PROTOCOL_BLOCK.ReceivePacketHandler", receive_packet_handler, 0x8c0, 0x40, true, 0xa45c44fa3f02236)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t*, void*, nt::unicode_view*, void*, void*)>*), "_NDIS_PROTOCOL_BLOCK.BindAdapterHandler", bind_adapter_handler, 0x900, 0x40, true, 0xfd33bcf0e33da7d5)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t*, void*, void*)>*), "_NDIS_PROTOCOL_BLOCK.UnbindAdapterHandler", unbind_adapter_handler, 0x940, 0x40, true, 0x577a3312ce57972d)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(int32_t, void*, struct ndis::packet_t*)>*), "_NDIS_PROTOCOL_BLOCK.CoSendCompleteHandler", co_send_complete_handler, 0x980, 0x40, true, 0x334f831377d2fcc0)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, void*, struct ndis::packet_t*)>*), "_NDIS_PROTOCOL_BLOCK.CoReceivePacketHandler", co_receive_packet_handler, 0x9c0, 0x40, true, 0xbddd0f978b2c548b)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*), "_NDIS_PROTOCOL_BLOCK.OidRequestCompleteHandler", oid_request_complete_handler, 0xa00, 0x40, true, 0xaa798ff3d64f4844)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_NDIS_PROTOCOL_BLOCK.WorkItem", work_item, 0xa40, 0x0, true, 0xc4976a121cf26e67)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_NDIS_PROTOCOL_BLOCK.Mutex", mutex, 0xb40, 0xc0, true, 0x145790c72132c143)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PROTOCOL_BLOCK.MutexOwnerThread", mutex_owner_thread, 0xd00, 0x40, true, 0xe892f81570cefe7)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROTOCOL_BLOCK.MutexOwnerCount", mutex_owner_count, 0xd40, 0x20, true, 0x3bb501d8db5200be)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_PROTOCOL_BLOCK.BindDeviceName", bind_device_name, 0xd80, 0x40, true, 0xbeb153bd21c8b226)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_PROTOCOL_BLOCK.RootDeviceName", root_device_name, 0xdc0, 0x40, true, 0x9bd9cabd4b7b2042)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::m_driver_block_t*), "_NDIS_PROTOCOL_BLOCK.AssociatedMiniDriver", associated_mini_driver, 0xe00, 0x40, true, 0xa2d1764a0ff88573)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_PROTOCOL_BLOCK.BindingAdapter", binding_adapter, 0xe40, 0x40, true, 0xa07f6087e7bf6c6c)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_PROTOCOL_BLOCK.DeregEvent", dereg_event, 0xe80, 0x40, true, 0x9e61c18a9c321d03)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_client_optional_handlers_t), "_NDIS_PROTOCOL_BLOCK.ClientChars", client_chars, 0xec0, 0x0, true, 0xb5fd587f0fd97708)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_call_manager_optional_handlers_t), "_NDIS_PROTOCOL_BLOCK.CallMgrChars", call_mgr_chars, 0x13c0, 0x80, true, 0xf7a922db7d3fa054)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*), "_NDIS_PROTOCOL_BLOCK.DirectOidRequestCompleteHandler", direct_oid_request_complete_handler, 0x1840, 0x40, true, 0x7dd75e1ec423a9a5)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::shared_memory_parameters_t*, void**)>*), "_NDIS_PROTOCOL_BLOCK.AllocateSharedMemoryHandler", allocate_shared_memory_handler, 0x1880, 0x40, true, 0xd91ea753f3711d6c)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_NDIS_PROTOCOL_BLOCK.FreeSharedMemoryHandler", free_shared_memory_handler, 0x18c0, 0x40, true, 0x430f495ab7e1e305)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_PROTOCOL_BLOCK.AllocateSharedMemoryContext", allocate_shared_memory_context, 0x1900, 0x40, true, 0x63e887ccfd8375e8)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_PROTOCOL_BLOCK.ImageName", image_name, 0x1940, 0x80, true, 0x5127afb8696126c5)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROTOCOL_BLOCK.MutexOwner", mutex_owner, 0x0, 0x0, false, 0x3d336465ba86ebe)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_PROTOCOL_BLOCK.InitiateOffloadCompleteHandler", initiate_offload_complete_handler, 0x0, 0x0, false, 0x3dd9ce9960213b5b)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_PROTOCOL_BLOCK.TerminateOffloadCompleteHandler", terminate_offload_complete_handler, 0x0, 0x0, false, 0xb5838f3a536610e2)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_PROTOCOL_BLOCK.UpdateOffloadCompleteHandler", update_offload_complete_handler, 0x0, 0x0, false, 0x7c6b9d4b1773da89)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_PROTOCOL_BLOCK.InvalidateOffloadCompleteHandler", invalidate_offload_complete_handler, 0x0, 0x0, false, 0x47361cfc5249e0a0)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*), "_NDIS_PROTOCOL_BLOCK.QueryOffloadCompleteHandler", query_offload_complete_handler, 0x0, 0x0, false, 0x6817b7c1f4ce3d7c)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*, uint32_t)>*), "_NDIS_PROTOCOL_BLOCK.IndicateOffloadEventHandler", indicate_offload_event_handler, 0x0, 0x0, false, 0xc6258879d573b4a6)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_PROTOCOL_BLOCK.TcpOffloadSendCompleteHandler", tcp_offload_send_complete_handler, 0x0, 0x0, false, 0xc22bfdac48d5b753)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_PROTOCOL_BLOCK.TcpOffloadReceiveCompleteHandler", tcp_offload_receive_complete_handler, 0x0, 0x0, false, 0xe22bad502526e959)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_PROTOCOL_BLOCK.TcpOffloadDisconnectCompleteHandler", tcp_offload_disconnect_complete_handler, 0x0, 0x0, false, 0x2db447cf5d1eef46)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_PROTOCOL_BLOCK.TcpOffloadForwardCompleteHandler", tcp_offload_forward_complete_handler, 0x0, 0x0, false, 0xaf634ed640390c97)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_NDIS_PROTOCOL_BLOCK.TcpOffloadEventHandler", tcp_offload_event_handler, 0x0, 0x0, false, 0x66d61d60a452d4eb)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*), "_NDIS_PROTOCOL_BLOCK.TcpOffloadReceiveIndicateHandler", tcp_offload_receive_indicate_handler, 0x0, 0x0, false, 0x2079ce55020dfc8d)
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
#endif