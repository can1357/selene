#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.Type", type, 0x0, 0x8, true, 0xaefdfafb515a7a31)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.Revision", revision, 0x8, 0x8, true, 0x4f1d35cd6b045ea0)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_IF_BLOCK.Size", size, 0x10, 0x10, true, 0x86c0e22a866c1d0b)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.ifIndex", if_index, 0x20, 0x20, true, 0x547311e50f3a47a1)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_IF_BLOCK.ifDescr", if_descr, 0x40, 0x20, true, 0x6d617e33e7ac91f1)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_IF_BLOCK.ifType", if_type, 0x1060, 0x10, true, 0x7d76e5be6922a6c9)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_access_type_t), "_NDIS_IF_BLOCK.AccessType", access_type, 0x1080, 0x20, true, 0x41ed1c6502e72ba9)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_direction_type_t), "_NDIS_IF_BLOCK.DirectionType", direction_type, 0x10a0, 0x20, true, 0xf27983e1f3a26397)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_connection_type_t), "_NDIS_IF_BLOCK.ConnectionType", connection_type, 0x10c0, 0x20, true, 0x2b94a2910eea740a)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_IF_BLOCK.InterfaceGuid", interface_guid, 0x10e0, 0x80, true, 0xd3caab055802d4cb)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.ifConnectorPresent", if_connector_present, 0x1160, 0x8, true, 0xd42dded659133998)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.ifFlags", if_flags, 0x1180, 0x20, true, 0xbc7456507c59bb5e)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NDIS_IF_BLOCK.MediaType", media_type, 0x11a0, 0x20, true, 0x399159a74570d271)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::physical_medium_t), "_NDIS_IF_BLOCK.PhysicalMediumType", physical_medium_type, 0x11c0, 0x20, true, 0x1b775adc0f6c17ab)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.CompartmentId", compartment_id, 0x1200, 0x20, true, 0xd7e3961b542fbdf0)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_IF_BLOCK.NetworkGuid", network_guid, 0x1220, 0x80, true, 0x7a3e6ef84a304602)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_IF_BLOCK.ifAlias", if_alias, 0x12a0, 0x20, true, 0x4721e76346ae8c54)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_oper_status_t), "_NDIS_IF_BLOCK.ifOperStatus", if_oper_status, 0x22c0, 0x20, true, 0xa412d0e05b678e76)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.ifOperStatusFlags", if_oper_status_flags, 0x22e0, 0x20, true, 0xb373cf0d1c6054a3)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.ifMtu", if_mtu, 0x2300, 0x20, true, 0x226640c0936857f7)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_physical_address_lh_t), "_NDIS_IF_BLOCK.ifPhysAddress", if_phys_address, 0x2320, 0x10, true, 0x4cc441b32e2e0895)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_physical_address_lh_t), "_NDIS_IF_BLOCK.PermanentPhysAddress", permanent_phys_address, 0x2430, 0x10, true, 0xaf7948e8e351ee63)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_admin_status_t), "_NDIS_IF_BLOCK.ifAdminStatus", if_admin_status, 0x2540, 0x20, true, 0x1a9384c5a3f7083c)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_IF_BLOCK.XmitLinkSpeed", xmit_link_speed, 0x2580, 0x40, true, 0x319748356b850a96)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_IF_BLOCK.RcvLinkSpeed", rcv_link_speed, 0x25c0, 0x40, true, 0x235846e3764f42de)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.ifPromiscuousMode", if_promiscuous_mode, 0x2600, 0x8, true, 0x954729b2ddac5c7)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.ifDeviceWakeUpEnable", if_device_wake_up_enable, 0x2608, 0x8, true, 0xc5b466da19963b6f)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_connect_state_t), "_NDIS_IF_BLOCK.MediaConnectState", media_connect_state, 0x2620, 0x20, true, 0xa4271af9a26aa1)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_duplex_state_t), "_NDIS_IF_BLOCK.MediaDuplexState", media_duplex_state, 0x2640, 0x20, true, 0xe61d72368f0a656f)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_IF_BLOCK.Link", link, 0x2680, 0x80, true, 0xbe69fa8b59586d25)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_IF_BLOCK.ProviderLink", provider_link, 0x2700, 0x80, true, 0x3d1a12d46fa0ffb2)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_IF_BLOCK.NetworkLink", network_link, 0x2780, 0x80, true, 0x3e308e1f377ddb9d)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_rcv_address_t*), "_NDIS_IF_BLOCK.ifRcvAddressTable", if_rcv_address_table, 0x2800, 0x40, true, 0x5ab23e020b8c21a6)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.ifRcvAddressCount", if_rcv_address_count, 0x2840, 0x20, true, 0xc8a57618fb297e4a)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.ifMaxRcvAddressCount", if_max_rcv_address_count, 0x2860, 0x20, true, 0x96ecff32138e0220)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.LowerLayerIfCount", lower_layer_if_count, 0x2880, 0x20, true, 0x624590c5f27e0983)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.HigherLayerIfCount", higher_layer_if_count, 0x28a0, 0x20, true, 0xbb7ae39d9b27aa8d)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_IF_BLOCK.Ref", ref, 0x28c0, 0x20, true, 0x89d6c0715581207c)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_IF_BLOCK.NetLuid", net_luid, 0x2900, 0x40, true, 0xfe43f01c1a66fe76)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_IF_BLOCK.ProviderIfContext", provider_if_context, 0x2940, 0x40, true, 0xa1f341e6ee6431c1)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_provider_block_t*), "_NDIS_IF_BLOCK.ProviderHandle", provider_handle, 0x2980, 0x40, true, 0x9251cd4b4e5cfd80)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.Flags", flags, 0x29c0, 0x20, true, 0x2217c71bb6c59937)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.WanTunnelType", wan_tunnel_type, 0x29e0, 0x20, true, 0xc2c1c717c8a5a7b7)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.PortNumber", port_number, 0x2a00, 0x20, true, 0x15fc6e785d31fe8e)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_IF_BLOCK.ifLastChange", if_last_change, 0x2a40, 0x40, true, 0x25a57c8a742b9f51)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_IF_BLOCK.ifCounterDiscontinuityTime", if_counter_discontinuity_time, 0x2a80, 0x40, true, 0xb61f23c3c27d2942)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_network_block_t*), "_NDIS_IF_BLOCK.Network", network, 0x2ac0, 0x40, true, 0xc84589aac9755980)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_compartment_block_t*), "_NDIS_IF_BLOCK.Compartment", compartment, 0x2b00, 0x40, true, 0xfd124a1004bc6e1f)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_NDIS_IF_BLOCK.AsyncEvent", async_event, 0x2b40, 0x40, true, 0x8f42bcb2c6be77ca)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.AlreadyDeregistered", already_deregistered, 0x2b80, 0x8, true, 0x2724ec540089f45d)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.bNdisIsProvider", b_ndis_is_provider, 0x2b88, 0x8, true, 0xaa1fbabe24d28d8d)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.IsNdisFilter", is_ndis_filter, 0x2b90, 0x8, true, 0x450d2d16b8c08e0b)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.MiniportAvailable", miniport_available, 0x2b98, 0x8, true, 0xb98a837a44e9af6c)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.MiniportLinkReference", miniport_link_reference, 0x2ba0, 0x20, true, 0x9b2bc4b2d03447d6)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::if_block_source_t), "_NDIS_IF_BLOCK.Source", source, 0x2bc0, 0x20, true, 0xec017139cb7073b)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_IF_BLOCK.Miniport", miniport, 0x2c00, 0x40, true, 0x7d3355002d3c3890)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::filter_block_t*), "_NDIS_IF_BLOCK.Filter", filter, 0x2c00, 0x40, true, 0x98257f6de328f7ac)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.SupportedStatistics", supported_statistics, 0x2c40, 0x20, true, 0xbda9982b37b9e3ba)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t*), "_NDIS_IF_BLOCK.ifL2NetworkInfo", if_l2_network_info, 0x2c80, 0x40, true, 0x7ce376870278fb6f)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::refcount_handle_t*), "_NDIS_IF_BLOCK.RefCountTracker", ref_count_tracker, 0x2cc0, 0x40, true, 0xc4246e4371bd9f0d)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::refcount_handle_t*), "_NDIS_IF_BLOCK.MpRefCountTracker", mp_ref_count_tracker, 0x2d00, 0x40, true, 0xb5e3eced3c20e4ab)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_IF_BLOCK.InterlockedFlags", interlocked_flags, 0x2d40, 0x20, true, 0x28a170dd8367fe51)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::miniport_event_t), "_NDIS_IF_BLOCK.LastMiniportFatalErrorReason", last_miniport_fatal_error_reason, 0x2d60, 0x10, true, 0xa7984a3d664100d9)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 3>), "_NDIS_IF_BLOCK.MiniportFatalErrorTimestamp", miniport_fatal_error_timestamp, 0x2d80, 0xc0, true, 0x80c2982fe44fe1c3)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.MiniportFatalErrorTimestampIndex", miniport_fatal_error_timestamp_index, 0x2e40, 0x8, true, 0xefc1e6cfb52f9a3d)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.NetworkIdOverridden", network_id_overridden, 0x2e48, 0x8, true, 0xf6a1d69c7def8827)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pcw_data_block_t*), "_NDIS_IF_BLOCK.PcwDataBlock", pcw_data_block, 0x2e80, 0x40, true, 0xd6ec11cd7ff224a7)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.ifHideInterfaceInUi", if_hide_interface_in_ui, 0x2610, 0x8, true, 0x3b79fd285f4da9b)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_IF_BLOCK.IsWDFMiniportInterface", is_wdf_miniport_interface, 0x2e50, 0x8, true, 0x6c8ea32f34aa1f12)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::nsi_interface_purpose_t), "_NDIS_IF_BLOCK.ifPurpose", if_purpose, 0x2e60, 0x20, true, 0xe3df1790075915c0)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_physical_location_lh_t), "_NDIS_IF_BLOCK.PhysicalLocation", physical_location, 0x0, 0x0, false, 0x48f836edc7fdcc69)
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
#endif