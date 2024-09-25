#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NET_IF_INFORMATION.Header", header, 0x0, 0x20, true, 0xdd1aeccbbc378283)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_IF_INFORMATION.Flags", flags, 0x20, 0x20, true, 0x81ade9a0ced6adb4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::net_physical_location_lh_t), "_NET_IF_INFORMATION.PhysicalLocation", physical_location, 0x40, 0x60, true, 0x4e7963f67bfb4a62)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_IF_INFORMATION.WanTunnelType", wan_tunnel_type, 0xa0, 0x20, true, 0xaa15bbd745fe562f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_IF_INFORMATION.PortNumber", port_number, 0xc0, 0x20, true, 0xbb344d6ed9f0c1e0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_access_type_t), "_NET_IF_INFORMATION.AccessType", access_type, 0xe0, 0x20, true, 0xa24376eb3792a59e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_direction_type_t), "_NET_IF_INFORMATION.DirectionType", direction_type, 0x100, 0x20, true, 0xfddd3688df51c9f6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_connection_type_t), "_NET_IF_INFORMATION.ConnectionType", connection_type, 0x120, 0x20, true, 0x633c9618a1d035b1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NET_IF_INFORMATION.ifConnectorPresent", if_connector_present, 0x140, 0x8, true, 0x3eff10d1d71d04b2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NET_IF_INFORMATION.PhysAddressLength", phys_address_length, 0x150, 0x10, true, 0x2b816eff2e36446e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NET_IF_INFORMATION.PhysAddressOffset", phys_address_offset, 0x160, 0x10, true, 0x6fd2d62580bb7e61)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NET_IF_INFORMATION.PermanentPhysAddressOffset", permanent_phys_address_offset, 0x170, 0x10, true, 0x952176cad951ad15)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NET_IF_INFORMATION.FriendlyNameLength", friendly_name_length, 0x180, 0x10, true, 0x6b5d1dcd60e5e3cd)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NET_IF_INFORMATION.FriendlyNameOffset", friendly_name_offset, 0x190, 0x10, true, 0x3f915fef6d80ec79)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NET_IF_INFORMATION.InterfaceGuid", interface_guid, 0x1a0, 0x80, true, 0x59b46e4f8c6027fa)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NET_IF_INFORMATION.NetworkGuid", network_guid, 0x220, 0x80, true, 0x143b74e68e26ad0d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_IF_INFORMATION.SupportedStatistics", supported_statistics, 0x2a0, 0x20, true, 0x27fdfb0f6d0a4d2f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NET_IF_INFORMATION.MediaType", media_type, 0x2c0, 0x20, true, 0x3c54cea2c38ef6f2)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::physical_medium_t), "_NET_IF_INFORMATION.PhysicalMediumType", physical_medium_type, 0x2e0, 0x20, true, 0xaf8f6b3ebe9329ce)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif