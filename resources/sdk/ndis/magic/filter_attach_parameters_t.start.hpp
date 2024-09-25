#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_FILTER_ATTACH_PARAMETERS.Header", header, 0x0, 0x20, true, 0x90f9575254029c74)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_ATTACH_PARAMETERS.IfIndex", if_index, 0x20, 0x20, true, 0xe13bef27310a44dd)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_FILTER_ATTACH_PARAMETERS.NetLuid", net_luid, 0x40, 0x40, true, 0x2ddbdd4fde457889)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_FILTER_ATTACH_PARAMETERS.FilterModuleGuidName", filter_module_guid_name, 0x80, 0x40, true, 0xd4d26286fa92a0de)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_ATTACH_PARAMETERS.BaseMiniportIfIndex", base_miniport_if_index, 0xc0, 0x20, true, 0x3308a1374b2e102)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_FILTER_ATTACH_PARAMETERS.BaseMiniportInstanceName", base_miniport_instance_name, 0x100, 0x40, true, 0xf99f345dae29d48)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_NDIS_FILTER_ATTACH_PARAMETERS.BaseMiniportName", base_miniport_name, 0x140, 0x40, true, 0xe046cbb8229ed4d4)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_connect_state_t), "_NDIS_FILTER_ATTACH_PARAMETERS.MediaConnectState", media_connect_state, 0x180, 0x20, true, 0xb14bfdcdbddad4e6)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_duplex_state_t), "_NDIS_FILTER_ATTACH_PARAMETERS.MediaDuplexState", media_duplex_state, 0x1a0, 0x20, true, 0xee865d32f5ff9e00)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_FILTER_ATTACH_PARAMETERS.XmitLinkSpeed", xmit_link_speed, 0x1c0, 0x40, true, 0x2b4570cc476b7510)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_FILTER_ATTACH_PARAMETERS.RcvLinkSpeed", rcv_link_speed, 0x200, 0x40, true, 0x81bbf019e2b85972)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NDIS_FILTER_ATTACH_PARAMETERS.MiniportMediaType", miniport_media_type, 0x240, 0x20, true, 0xb8b2b4fc690e5d2b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::physical_medium_t), "_NDIS_FILTER_ATTACH_PARAMETERS.MiniportPhysicalMediaType", miniport_physical_media_type, 0x260, 0x20, true, 0x8de92263207a3554)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_FILTER_ATTACH_PARAMETERS.MiniportMediaSpecificAttributes", miniport_media_specific_attributes, 0x280, 0x40, true, 0xff2a0fd64cd639cc)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_t*), "_NDIS_FILTER_ATTACH_PARAMETERS.DefaultOffloadConfiguration", default_offload_configuration, 0x2c0, 0x40, true, 0x87293cd3f15c30b1)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_FILTER_ATTACH_PARAMETERS.MacAddressLength", mac_address_length, 0x300, 0x10, true, 0xf1dd71da802e2cce)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_FILTER_ATTACH_PARAMETERS.CurrentMacAddress", current_mac_address, 0x310, 0x0, true, 0x1bf0412b62ee6d23)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_FILTER_ATTACH_PARAMETERS.BaseMiniportNetLuid", base_miniport_net_luid, 0x440, 0x40, true, 0x36eae0de8ff6532a)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_ATTACH_PARAMETERS.LowerIfIndex", lower_if_index, 0x480, 0x20, true, 0xeba6845fae954009)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_FILTER_ATTACH_PARAMETERS.LowerIfNetLuid", lower_if_net_luid, 0x4c0, 0x40, true, 0x4fada4eddfb70803)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_ATTACH_PARAMETERS.Flags", flags, 0x500, 0x20, true, 0x808ce2d60e0ccbbd)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::hd_split_current_config_t*), "_NDIS_FILTER_ATTACH_PARAMETERS.HDSplitCurrentConfig", hd_split_current_config, 0x540, 0x40, true, 0x6fd9787c1f774112)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_filter_capabilities_t*), "_NDIS_FILTER_ATTACH_PARAMETERS.ReceiveFilterCapabilities", receive_filter_capabilities, 0x580, 0x40, true, 0x716479d73c73e188)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_NDIS_FILTER_ATTACH_PARAMETERS.MiniportPhysicalDeviceObject", miniport_physical_device_object, 0x5c0, 0x40, true, 0x2fb74400e5edd45)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_capabilities_t*), "_NDIS_FILTER_ATTACH_PARAMETERS.NicSwitchCapabilities", nic_switch_capabilities, 0x600, 0x40, true, 0x33d80b6720cac83a)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_FILTER_ATTACH_PARAMETERS.BaseMiniportIfConnectorPresent", base_miniport_if_connector_present, 0x640, 0x8, true, 0xdaef3baffab9ae9e)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::sriov_capabilities_t*), "_NDIS_FILTER_ATTACH_PARAMETERS.SriovCapabilities", sriov_capabilities, 0x680, 0x40, true, 0x9bc9eab970926295)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_info_array_t*), "_NDIS_FILTER_ATTACH_PARAMETERS.NicSwitchArray", nic_switch_array, 0x6c0, 0x40, true, 0x5861a1961d595b7a)
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
#endif