#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_M_DRIVER_BLOCK.Header", header, 0x0, 0x20, true, 0xea90d5569895c12d)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::m_driver_block_t*), "_NDIS_M_DRIVER_BLOCK.NextDriver", next_driver, 0x40, 0x40, true, 0xcc04ea9ed9407414)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_M_DRIVER_BLOCK.MiniportQueue", miniport_queue, 0x80, 0x40, true, 0x5be13458533a4230)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_M_DRIVER_BLOCK.MajorNdisVersion", major_ndis_version, 0xc0, 0x8, true, 0xad6195f32094f36c)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_M_DRIVER_BLOCK.MinorNdisVersion", minor_ndis_version, 0xc8, 0x8, true, 0xb5226a4eaaaa5ed7)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_M_DRIVER_BLOCK.Flags", flags, 0xd0, 0x10, true, 0x3e086e123088442f)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::wrapper_handle_t*), "_NDIS_M_DRIVER_BLOCK.NdisDriverInfo", ndis_driver_info, 0x100, 0x40, true, 0xc3997b17fe031061)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_NDIS_M_DRIVER_BLOCK.DriverObject", driver_object, 0x140, 0x40, true, 0x53133368b8271f42)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_M_DRIVER_BLOCK.ServiceRegPath", service_reg_path, 0x180, 0x80, true, 0x67f2e3ecdb5278c5)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_M_DRIVER_BLOCK.MiniportDriverContext", miniport_driver_context, 0x200, 0x40, true, 0xff5d4294dd64fbbd)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::protocol_block_t*), "_NDIS_M_DRIVER_BLOCK.AssociatedProtocol", associated_protocol, 0x240, 0x40, true, 0x471b4f4934180681)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_M_DRIVER_BLOCK.DeviceList", device_list, 0x280, 0x80, true, 0x5a65f2d01548242c)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pending_im_instance_t*), "_NDIS_M_DRIVER_BLOCK.PendingDeviceList", pending_device_list, 0x300, 0x40, true, 0xea5e21c5a6b5f066)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_NDIS_M_DRIVER_BLOCK.UnloadHandler", unload_handler, 0x340, 0x40, true, 0xb79c69310b78e60f)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_driver_characteristics_t), "_NDIS_M_DRIVER_BLOCK.MiniportDriverCharacteristics", miniport_driver_characteristics, 0x380, 0x0, true, 0x6fd190968341c5db)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndis51_miniport_characteristics_t), "_NDIS_M_DRIVER_BLOCK.MiniportCharacteristics", miniport_characteristics, 0x380, 0x80, true, 0x525884ff8fa8ab28)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::wdf_cx_driver_block_t*), "_NDIS_M_DRIVER_BLOCK.CxBlock", cx_block, 0xb40, 0x40, true, 0x4ef35109fc1437d3)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_NDIS_M_DRIVER_BLOCK.MiniportsRemovedEvent", miniports_removed_event, 0xb80, 0xc0, true, 0x8b7ed9ab1d95dc3f)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::reference_ex_t), "_NDIS_M_DRIVER_BLOCK.Ref", ref, 0xc40, 0xc0, true, 0x14054489b3f0c90a)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kmutant_t), "_NDIS_M_DRIVER_BLOCK.IMStartRemoveMutex", im_start_remove_mutex, 0xd00, 0xc0, true, 0xcb5ac1d85d61d80c)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_M_DRIVER_BLOCK.IMStartRemoveMutexOwnerThread", im_start_remove_mutex_owner_thread, 0xec0, 0x40, true, 0x78528935126bc78a)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_M_DRIVER_BLOCK.DriverVersion", driver_version, 0xf00, 0x20, true, 0xf57b3dca72cbc650)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_M_DRIVER_BLOCK.ServiceName", service_name, 0xf40, 0x80, true, 0xeff63b082141d419)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, void**)>*), "_NDIS_M_DRIVER_BLOCK.CoCreateVcHandler", co_create_vc_handler, 0xfc0, 0x40, true, 0x2f19a2da7b148c86)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_M_DRIVER_BLOCK.CoDeleteVcHandler", co_delete_vc_handler, 0x1000, 0x40, true, 0x9afba1b99d1ce8ec)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*), "_NDIS_M_DRIVER_BLOCK.CoActivateVcHandler", co_activate_vc_handler, 0x1040, 0x40, true, 0x2b322e6916336c4d)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_NDIS_M_DRIVER_BLOCK.CoDeactivateVcHandler", co_deactivate_vc_handler, 0x1080, 0x40, true, 0xa45332b98ec35ef7)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_M_DRIVER_BLOCK.CoSendNetBufferListsHandler", co_send_net_buffer_lists_handler, 0x10c0, 0x40, true, 0x812640fd76b9ecc7)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::request_t*)>*), "_NDIS_M_DRIVER_BLOCK.CoRequestHandler", co_request_handler, 0x1100, 0x40, true, 0x1f68031367229f0d)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::oid_request_t*)>*), "_NDIS_M_DRIVER_BLOCK.CoOidRequestHandler", co_oid_request_handler, 0x1140, 0x40, true, 0x176d6c35ef11a501)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_M_DRIVER_BLOCK.InitiateOffloadHandler", initiate_offload_handler, 0x1180, 0x40, true, 0x374097768f4a190a)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_M_DRIVER_BLOCK.TerminateOffloadHandler", terminate_offload_handler, 0x11c0, 0x40, true, 0xcc3d8c2aa548bad4)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_M_DRIVER_BLOCK.UpdateOffloadHandler", update_offload_handler, 0x1200, 0x40, true, 0xc283c4f5dc425237)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_M_DRIVER_BLOCK.InvalidateOffloadHandler", invalidate_offload_handler, 0x1240, 0x40, true, 0x98eb46a4799850f0)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*), "_NDIS_M_DRIVER_BLOCK.QueryOffloadHandler", query_offload_handler, 0x1280, 0x40, true, 0x2a5bea0e9248b721)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_M_DRIVER_BLOCK.TcpOffloadSendHandler", tcp_offload_send_handler, 0x12c0, 0x40, true, 0xcf8ef25cafdee94)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_M_DRIVER_BLOCK.TcpOffloadReceiveHandler", tcp_offload_receive_handler, 0x1300, 0x40, true, 0xa3a56fcefd8741e1)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_M_DRIVER_BLOCK.TcpOffloadDisconnectHandler", tcp_offload_disconnect_handler, 0x1340, 0x40, true, 0x5ac133ed0973285e)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_M_DRIVER_BLOCK.TcpOffloadForwardHandler", tcp_offload_forward_handler, 0x1380, 0x40, true, 0x9f24c337dae4ad37)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::co_call_manager_optional_handlers_t), "_NDIS_M_DRIVER_BLOCK.CallMgrChars", call_mgr_chars, 0x1400, 0x80, true, 0xe3fd645d5d0061ec)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_NDIS_M_DRIVER_BLOCK.AddDeviceHandler", add_device_handler, 0x1880, 0x40, true, 0xe544a3b20bdd908c)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_M_DRIVER_BLOCK.RemoveDeviceHandler", remove_device_handler, 0x18c0, 0x40, true, 0x37ff80ae59b43ea3)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::irp_t*)>*), "_NDIS_M_DRIVER_BLOCK.FilterResourceRequirementsHandler", filter_resource_requirements_handler, 0x1900, 0x40, true, 0x13ff07ea9ae134bf)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::irp_t*)>*), "_NDIS_M_DRIVER_BLOCK.StartDeviceHandler", start_device_handler, 0x1940, 0x40, true, 0x9860d985ceed01e2)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::open_ndk_adapter_parameters_t*, struct ndis::ndk_adapter_t**)>*), "_NDIS_M_DRIVER_BLOCK.OpenNDKAdapterHandler", open_ndk_adapter_handler, 0x1980, 0x40, true, 0x9559b02a8bd4e0e7)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::ndk_adapter_t*)>*), "_NDIS_M_DRIVER_BLOCK.CloseNDKAdapterHandler", close_ndk_adapter_handler, 0x19c0, 0x40, true, 0x9bd3129fbe4f5c62)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(void*, struct ndis::miniport_syspower_notify_t*)>*, sdk::function<void(void*, const struct ndis::miniport_syspower_notify_t*)>*>), "_NDIS_M_DRIVER_BLOCK.SysPowerNotifyHandler", sys_power_notify_handler, 0x1a00, 0x40, true, 0x2e0f8e8553d01204)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "_NDIS_M_DRIVER_BLOCK.IdleNotificationHandler", idle_notification_handler, 0x1a40, 0x40, true, 0xff4c8c273bc69188)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_M_DRIVER_BLOCK.CancelIdleNotificationHandler", cancel_idle_notification_handler, 0x1a80, 0x40, true, 0x41a1da7e06b4559d)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_NDIS_M_DRIVER_BLOCK.ReenumerateFailedAdapterHandler", reenumerate_failed_adapter_handler, 0x1b00, 0x40, true, 0xe81db8c96e30ea6f)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<int32_t(void*, sdk::function<int32_t(void*, const struct nt::guid_t*, void*, uint32_t)>*, uint32_t, uint64_t, uint64_t, uint64_t, uint64_t, void*)>*, sdk::function<int32_t(struct ndis::memorydump_handle_t*, sdk::function<int32_t(struct ndis::memorydump_handle_t*, const struct nt::guid_t*, void*, uint32_t)>*, uint32_t, uint64_t, uint64_t, uint64_t, uint64_t, void*)>*>), "_NDIS_M_DRIVER_BLOCK.LiveDumpCallback", live_dump_callback, 0x1b40, 0x40, true, 0x51d3fa5221dfd5e)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_M_DRIVER_BLOCK.ImageName", image_name, 0x1b80, 0x80, true, 0xd9528ddb91cc42)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_hook_driver_handle_t*), "_NDIS_M_DRIVER_BLOCK.HookDriverHandle", hook_driver_handle, 0x1c00, 0x40, true, 0x13c75e501200531c)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::miniport_hook_driver_type_t), "_NDIS_M_DRIVER_BLOCK.HookType", hook_type, 0x1c40, 0x20, true, 0x976f783f9bac6fad)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "_NDIS_M_DRIVER_BLOCK.HookRegistered", hook_registered, 0x1c60, 0x8, true, 0xd75cd2a3f8bdc7f7)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_M_DRIVER_BLOCK.AllocateNetBufferListForwardingContextHandler", allocate_net_buffer_list_forwarding_context_handler, 0x1c80, 0x40, true, 0x85f05a825bb1ec2c)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_M_DRIVER_BLOCK.FreeNetBufferListForwardingContextHandler", free_net_buffer_list_forwarding_context_handler, 0x1cc0, 0x40, true, 0x234352e5717fc269)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, struct ndis::switch_port_destination_t*)>*), "_NDIS_M_DRIVER_BLOCK.AddNetBufferListDestinationHandler", add_net_buffer_list_destination_handler, 0x1d00, 0x40, true, 0x24c4bcc6c2a7ec5d)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, uint32_t, uint16_t)>*), "_NDIS_M_DRIVER_BLOCK.SetNetBufferListSourceHandler", set_net_buffer_list_source_handler, 0x1d40, 0x40, true, 0xa8be9dd660171074)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, uint32_t, struct ndis::switch_forwarding_destination_array_t**)>*), "_NDIS_M_DRIVER_BLOCK.GrowNetBufferListDestinationsHandler", grow_net_buffer_list_destinations_handler, 0x1d80, 0x40, true, 0x76eef6183096f22d)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, struct ndis::net_buffer_list_t*, struct ndis::switch_forwarding_destination_array_t**)>*), "_NDIS_M_DRIVER_BLOCK.GetNetBufferListDestinationsHandler", get_net_buffer_list_destinations_handler, 0x1dc0, 0x40, true, 0xc9bb050a9a7184f5)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, uint32_t, struct ndis::switch_forwarding_destination_array_t*)>*), "_NDIS_M_DRIVER_BLOCK.UpdateNetBufferListDestinationsHandler", update_net_buffer_list_destinations_handler, 0x1e00, 0x40, true, 0xf7c75104049bf0d4)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, struct ndis::net_buffer_list_t*, uint32_t)>*), "_NDIS_M_DRIVER_BLOCK.CopyNetBufferListInfoHandler", copy_net_buffer_list_info_handler, 0x1e40, 0x40, true, 0x9ca4acb3da11af31)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint16_t)>*), "_NDIS_M_DRIVER_BLOCK.ReferenceSwitchNicHandler", reference_switch_nic_handler, 0x1e80, 0x40, true, 0xdb924936a16f761f)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint16_t)>*), "_NDIS_M_DRIVER_BLOCK.DereferenceSwitchNicHandler", dereference_switch_nic_handler, 0x1ec0, 0x40, true, 0xcfee660bc5a92083)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "_NDIS_M_DRIVER_BLOCK.ReferenceSwitchPortHandler", reference_switch_port_handler, 0x1f00, 0x40, true, 0xfd54f7a11c716a8a)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "_NDIS_M_DRIVER_BLOCK.DereferenceSwitchPortHandler", dereference_switch_port_handler, 0x1f40, 0x40, true, 0xb5ef4c7032f2121b)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, nt::unicode_view*, nt::unicode_view*, uint32_t, uint32_t, uint32_t, struct ndis::net_buffer_list_t*, nt::unicode_view*)>*), "_NDIS_M_DRIVER_BLOCK.ReportFilteredNetBufferListsHandler", report_filtered_net_buffer_lists_handler, 0x1f80, 0x40, true, 0xe1d90d25e47006fb)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, struct ndis::switch_net_buffer_list_context_type_info_t*, void*)>*), "_NDIS_M_DRIVER_BLOCK.SetNetBufferListSwitchContextHandler", set_net_buffer_list_switch_context_handler, 0x1fc0, 0x40, true, 0xa63f70e44767841)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(void*, struct ndis::net_buffer_list_t*, struct ndis::switch_net_buffer_list_context_type_info_t*)>*), "_NDIS_M_DRIVER_BLOCK.GetNetBufferListSwitchContextHandler", get_net_buffer_list_switch_context_handler, 0x2000, 0x40, true, 0xae8e1ae059a97f71)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_ext_client_context_t*, const struct nt::guid_t*, const nt::unicode_view*, const struct ndis::pd_ext_client_param_t*, const struct ndis::pd_ext_client_dispatch_t*)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderRegisterClient", pd_ext_provider_register_client, 0x2040, 0x40, true, 0x947ed0cdab762a39)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_ext_client_context_t*)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderDeregisterClient", pd_ext_provider_deregister_client, 0x2080, 0x40, true, 0x5424c556db482894)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<struct ndis::pd_buffer_t*(struct ndis::pd_ext_provider_context_t*, uint32_t, uint32_t, uint32_t)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderGetFreePDBuffer", pd_ext_provider_get_free_pd_buffer, 0x20c0, 0x40, true, 0xda356c212643b31e)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, uint32_t)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderReturnPDBuffer", pd_ext_provider_return_pd_buffer, 0x2100, 0x40, true, 0xe114dd7239e206a)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, struct ndis::pd_buffer_t*, uint32_t)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderInjectPDBuffer", pd_ext_provider_inject_pd_buffer, 0x2140, 0x40, true, 0x6863775faf6c7a90)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, const struct ndis::pd_buffer_t*, uint32_t)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderCopyPDBufferInfo", pd_ext_provider_copy_pd_buffer_info, 0x2180, 0x40, true, 0x4845d3adbe28d7fc)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, uint32_t)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderGetPDBufferClientContext", pd_ext_provider_get_pd_buffer_client_context, 0x21c0, 0x40, true, 0x5a70f6ae598e98b5)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, struct ndis::switch_forwarding_destination_array_t**)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderGetPDBufferDestinations", pd_ext_provider_get_pd_buffer_destinations, 0x2200, 0x40, true, 0x631d0805f87115a1)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, const struct ndis::switch_port_destination_t*)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderAddPDBufferDestination", pd_ext_provider_add_pd_buffer_destination, 0x2240, 0x40, true, 0xf3e3cd5bd57f5d3a)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, uint32_t, struct ndis::switch_forwarding_destination_array_t*)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderUpdatePDBufferDestinations", pd_ext_provider_update_pd_buffer_destinations, 0x2280, 0x40, true, 0x241f35a574a15871)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<union ndis::switch_forwarding_detail_net_buffer_list_info_t*(struct ndis::pd_buffer_t*)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderGetPDBufferForwardingDetail", pd_ext_provider_get_pd_buffer_forwarding_detail, 0x22c0, 0x40, true, 0x29422bf2f4b2cf45)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_buffer_t*, const struct ndis::pd_buffer_t*, uint32_t, uint32_t)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderSetupBufferFromPDBuffer", pd_ext_provider_setup_buffer_from_pd_buffer, 0x2300, 0x40, true, 0x56a3151e4d90bf83)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, uint32_t, struct ndis::switch_forwarding_destination_array_t**)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderGrowPDBufferDestinations", pd_ext_provider_grow_pd_buffer_destinations, 0x2340, 0x40, true, 0x4cef90c9e60acdc7)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, uint32_t*)>*), "_NDIS_M_DRIVER_BLOCK.PDExtProviderGetSwitchInfo", pd_ext_provider_get_switch_info, 0x2380, 0x40, true, 0x97cf4bd08dd6995f)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct ndis::pd_bm_domain_parameters_t*, struct ndis::pd_bm_domain_handle_t**)>*), "_NDIS_M_DRIVER_BLOCK.PDBMCreateDomain", pdbm_create_domain, 0x23c0, 0x40, true, 0xf580243b0be15c4c)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_bm_domain_handle_t*, const struct ndis::pd_bm_domain_member_parameters_t*, struct ndis::pd_bm_domain_member_handle_t**)>*), "_NDIS_M_DRIVER_BLOCK.PDBMAddMemberToDomain", pdbm_add_member_to_domain, 0x2400, 0x40, true, 0xf4ff6737957bd53e)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_bm_domain_member_handle_t*)>*), "_NDIS_M_DRIVER_BLOCK.PDBMRemoveMemberFromDomain", pdbm_remove_member_from_domain, 0x2440, 0x40, true, 0x8901be75cce34240)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_bm_domain_handle_t*)>*), "_NDIS_M_DRIVER_BLOCK.PDBMDeleteDomain", pdbm_delete_domain, 0x2480, 0x40, true, 0x7ce58ddf17aef157)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::pd_bm_domain_handle_t*, uint32_t, uint32_t, uint32_t, int64_t*, void**)>*), "_NDIS_M_DRIVER_BLOCK.PDBMAllocateCommonBuffer", pdbm_allocate_common_buffer, 0x24c0, 0x40, true, 0x1f95bedbff7fb6c4)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::pd_bm_domain_handle_t*, uint32_t, int64_t, void*)>*), "_NDIS_M_DRIVER_BLOCK.PDBMFreeCommonBuffer", pdbm_free_common_buffer, 0x2500, 0x40, true, 0xef37bbaa37e38ef7)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*)>*), "_NDIS_M_DRIVER_BLOCK.TcpOffloadReceiveReturnHandler", tcp_offload_receive_return_handler, 0x13c0, 0x40, true, 0x53328fd8dfc17db3)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, enum nt::device_power_state_t)>*), "_NDIS_M_DRIVER_BLOCK.DevicePowerNotifyHandler", device_power_notify_handler, 0x1ac0, 0x40, true, 0x87a4812cb166d326)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_M_DRIVER_BLOCK.CompositeBusDefaultMiniport", composite_bus_default_miniport, 0x0, 0x0, false, 0x572d464651d83ec0)
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
#endif