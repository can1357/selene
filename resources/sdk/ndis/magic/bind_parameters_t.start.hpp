#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_BIND_PARAMETERS.Header", header, 0x0, 0x20, true, 0x778ba90116340768)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_BIND_PARAMETERS.ProtocolSection", protocol_section, 0x40, 0x40, true, 0x69bee671ece43a2e)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_BIND_PARAMETERS.AdapterName", adapter_name, 0x80, 0x40, true, 0xa380adb528d4a538)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_NDIS_BIND_PARAMETERS.PhysicalDeviceObject", physical_device_object, 0xc0, 0x40, true, 0x59161185dbe53278)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NDIS_BIND_PARAMETERS.MediaType", media_type, 0x100, 0x20, true, 0xe9783f06bef20df4)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_BIND_PARAMETERS.MtuSize", mtu_size, 0x120, 0x20, true, 0xb1019a9f4aafc23b)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_BIND_PARAMETERS.MaxXmitLinkSpeed", max_xmit_link_speed, 0x140, 0x40, true, 0x70b6663591e1503c)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_BIND_PARAMETERS.XmitLinkSpeed", xmit_link_speed, 0x180, 0x40, true, 0x8fab96e74776a9d0)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_BIND_PARAMETERS.MaxRcvLinkSpeed", max_rcv_link_speed, 0x1c0, 0x40, true, 0x7c729a28433687e9)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_BIND_PARAMETERS.RcvLinkSpeed", rcv_link_speed, 0x200, 0x40, true, 0x865d29f6ff953df2)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_connect_state_t), "_NDIS_BIND_PARAMETERS.MediaConnectState", media_connect_state, 0x240, 0x20, true, 0x766289bf0315dea7)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_duplex_state_t), "_NDIS_BIND_PARAMETERS.MediaDuplexState", media_duplex_state, 0x260, 0x20, true, 0xdd6c25dc88847dd3)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_BIND_PARAMETERS.LookaheadSize", lookahead_size, 0x280, 0x20, true, 0xc47961822b88a2d7)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pnp_capabilities_t*), "_NDIS_BIND_PARAMETERS.PowerManagementCapabilities", power_management_capabilities, 0x2c0, 0x40, true, 0xaf1eeb4a74660ecf)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_BIND_PARAMETERS.SupportedPacketFilters", supported_packet_filters, 0x300, 0x20, true, 0x8fc3968627206738)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_BIND_PARAMETERS.MaxMulticastListSize", max_multicast_list_size, 0x320, 0x20, true, 0xd6af827023fcf3c1)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_BIND_PARAMETERS.MacAddressLength", mac_address_length, 0x340, 0x10, true, 0x6cc9b6595b48366f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_BIND_PARAMETERS.CurrentMacAddress", current_mac_address, 0x350, 0x0, true, 0xf1fbf39dfc15d497)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::physical_medium_t), "_NDIS_BIND_PARAMETERS.PhysicalMediumType", physical_medium_type, 0x460, 0x20, true, 0xcfa62d4896c906a7)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_scale_capabilities_t*), "_NDIS_BIND_PARAMETERS.RcvScaleCapabilities", rcv_scale_capabilities, 0x480, 0x40, true, 0x1759e3989124b63f)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_BIND_PARAMETERS.BoundIfNetluid", bound_if_netluid, 0x4c0, 0x40, true, 0x7f157b05a8c5c8af)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_BIND_PARAMETERS.BoundIfIndex", bound_if_index, 0x500, 0x20, true, 0x53a41761a87211d2)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_BIND_PARAMETERS.LowestIfNetluid", lowest_if_netluid, 0x540, 0x40, true, 0x59dfb7595e98747)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_BIND_PARAMETERS.LowestIfIndex", lowest_if_index, 0x580, 0x20, true, 0xcd84d75843ab1039)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_access_type_t), "_NDIS_BIND_PARAMETERS.AccessType", access_type, 0x5a0, 0x20, true, 0x2dd275698894766c)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_direction_type_t), "_NDIS_BIND_PARAMETERS.DirectionType", direction_type, 0x5c0, 0x20, true, 0x6a8c131d026b29f3)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_connection_type_t), "_NDIS_BIND_PARAMETERS.ConnectionType", connection_type, 0x5e0, 0x20, true, 0xec848924f28f8f39)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_BIND_PARAMETERS.IfType", if_type, 0x600, 0x10, true, 0x256b6382d5c1d7df)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_BIND_PARAMETERS.IfConnectorPresent", if_connector_present, 0x610, 0x8, true, 0x441c7447673b6ecb)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::port_t*), "_NDIS_BIND_PARAMETERS.ActivePorts", active_ports, 0x640, 0x40, true, 0x11904fe463c45798)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_BIND_PARAMETERS.DataBackFillSize", data_back_fill_size, 0x680, 0x20, true, 0x5c7a8a3d22699de8)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_BIND_PARAMETERS.ContextBackFillSize", context_back_fill_size, 0x6a0, 0x20, true, 0x6cc6826d26bbbd7b)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_BIND_PARAMETERS.MacOptions", mac_options, 0x6c0, 0x20, true, 0xb9200055ef089c7f)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_BIND_PARAMETERS.CompartmentId", compartment_id, 0x6e0, 0x20, true, 0xaede08f82d8cf1b3)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_t*), "_NDIS_BIND_PARAMETERS.DefaultOffloadConfiguration", default_offload_configuration, 0x700, 0x40, true, 0x2669dece44090bec)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::tcp_connection_offload_t*), "_NDIS_BIND_PARAMETERS.TcpConnectionOffloadCapabilities", tcp_connection_offload_capabilities, 0x740, 0x40, true, 0xd3a0c41b12eef64f)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_BIND_PARAMETERS.BoundAdapterName", bound_adapter_name, 0x780, 0x40, true, 0xa037706099de477f)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::hd_split_current_config_t*), "_NDIS_BIND_PARAMETERS.HDSplitCurrentConfig", hd_split_current_config, 0x7c0, 0x40, true, 0xebdff708026263ba)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_filter_capabilities_t*), "_NDIS_BIND_PARAMETERS.ReceiveFilterCapabilities", receive_filter_capabilities, 0x800, 0x40, true, 0x64fddfaa27f6d2fb)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_capabilities_t*), "_NDIS_BIND_PARAMETERS.PowerManagementCapabilitiesEx", power_management_capabilities_ex, 0x840, 0x40, true, 0x883f396b6157275c)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_capabilities_t*), "_NDIS_BIND_PARAMETERS.NicSwitchCapabilities", nic_switch_capabilities, 0x880, 0x40, true, 0x469110ca567000d6)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_BIND_PARAMETERS.NDKEnabled", ndk_enabled, 0x8c0, 0x8, true, 0x51d7c3381d966231)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_capabilities_t*), "_NDIS_BIND_PARAMETERS.NDKCapabilities", ndk_capabilities, 0x900, 0x40, true, 0x82a19cdaf46b3d8)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::sriov_capabilities_t*), "_NDIS_BIND_PARAMETERS.SriovCapabilities", sriov_capabilities, 0x940, 0x40, true, 0x835f85f7bba8689d)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_info_array_t*), "_NDIS_BIND_PARAMETERS.NicSwitchArray", nic_switch_array, 0x980, 0x40, true, 0x4882a781cdcb12b2)
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
#endif