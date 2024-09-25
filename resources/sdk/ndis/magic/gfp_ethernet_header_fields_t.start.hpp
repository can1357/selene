#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_GFP_ETHERNET_HEADER_FIELDS.DestinationMacAddress", destination_mac_address, 0x0, 0x30, true, 0xe0e0b76198e95b41)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_GFP_ETHERNET_HEADER_FIELDS.SourceMacAddress", source_mac_address, 0x30, 0x30, true, 0xf6b02a3de1933075)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFP_ETHERNET_HEADER_FIELDS.EthType", eth_type, 0x60, 0x10, true, 0x9866642a4340b575)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFP_ETHERNET_HEADER_FIELDS.CustomerVlanId", customer_vlan_id, 0x70, 0x10, true, 0x4e16db34a8d584aa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_GFP_ETHERNET_HEADER_FIELDS.ProviderVlanId", provider_vlan_id, 0x80, 0x10, true, 0x3aaf014292775137)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_GFP_ETHERNET_HEADER_FIELDS.Priority", priority, 0x90, 0x8, true, 0x17068c5087641981)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif