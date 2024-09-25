#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0x4637f70eb0830e31)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.Flags", flags, 0x20, 0x20, true, 0xf8232b02e08f00ee)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.MediaType", media_type, 0x40, 0x20, true, 0x95eec8878fde86c9)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::physical_medium_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.PhysicalMediumType", physical_medium_type, 0x60, 0x20, true, 0x7a90406c7b9a1685)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.MtuSize", mtu_size, 0x80, 0x20, true, 0x79bd347491e061db)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.MaxXmitLinkSpeed", max_xmit_link_speed, 0xc0, 0x40, true, 0x9dcdcac21f1c185f)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.XmitLinkSpeed", xmit_link_speed, 0x100, 0x40, true, 0xeda5fb3e559ef81c)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.MaxRcvLinkSpeed", max_rcv_link_speed, 0x140, 0x40, true, 0xe7e5e90f185679de)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.RcvLinkSpeed", rcv_link_speed, 0x180, 0x40, true, 0x69f29b3df7219627)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_connect_state_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.MediaConnectState", media_connect_state, 0x1c0, 0x20, true, 0xb7764e5cb820e808)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_duplex_state_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.MediaDuplexState", media_duplex_state, 0x1e0, 0x20, true, 0xe34a1182c8f58f12)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.LookaheadSize", lookahead_size, 0x200, 0x20, true, 0x7c2183b7f25c1af2)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pnp_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.PowerManagementCapabilities", power_management_capabilities, 0x240, 0x40, true, 0xe4ce6aa0dbac22bc)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.MacOptions", mac_options, 0x280, 0x20, true, 0x981cc66261f7f331)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.SupportedPacketFilters", supported_packet_filters, 0x2a0, 0x20, true, 0x65195b942d3b8277)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.MaxMulticastListSize", max_multicast_list_size, 0x2c0, 0x20, true, 0x9cef0c9cb165d2d7)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.MacAddressLength", mac_address_length, 0x2e0, 0x10, true, 0x3d21a4dc4e2612d7)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.PermanentMacAddress", permanent_mac_address, 0x2f0, 0x0, true, 0xac42cf1ca80e03d3)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.CurrentMacAddress", current_mac_address, 0x3f0, 0x0, true, 0x20ca714144637b4e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_scale_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.RecvScaleCapabilities", recv_scale_capabilities, 0x500, 0x40, true, 0xd8e05cdf6d6cbff6)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_access_type_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.AccessType", access_type, 0x540, 0x20, true, 0xed98b55819896db7)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_direction_type_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.DirectionType", direction_type, 0x560, 0x20, true, 0x750e67013159470a)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_connection_type_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.ConnectionType", connection_type, 0x580, 0x20, true, 0x9e40f9846ad23542)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.IfType", if_type, 0x5a0, 0x10, true, 0x5dc047e661a7e961)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.IfConnectorPresent", if_connector_present, 0x5b0, 0x8, true, 0xf53cd90b6b740bfa)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.SupportedStatistics", supported_statistics, 0x5c0, 0x20, true, 0x160c49fb6379dcab)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.SupportedPauseFunctions", supported_pause_functions, 0x5e0, 0x20, true, 0x83a4540aa976c46c)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.DataBackFillSize", data_back_fill_size, 0x600, 0x20, true, 0x734a26dc54257410)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.ContextBackFillSize", context_back_fill_size, 0x620, 0x20, true, 0xf2404344616cee93)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.SupportedOidList", supported_oid_list, 0x640, 0x40, true, 0x19a467f44e92a639)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.SupportedOidListLength", supported_oid_list_length, 0x680, 0x20, true, 0xb87ec6b6eb159c2b)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.AutoNegotiationFlags", auto_negotiation_flags, 0x6a0, 0x20, true, 0x6b1bf5edbd798b52)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pm_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.PowerManagementCapabilitiesEx", power_management_capabilities_ex, 0x6c0, 0x40, true, 0xe1e78ef2aa3aeff9)
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
#endif