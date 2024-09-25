#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_NDK_REQUEST_PARAMETERS.RdmaRequested", rdma_requested, 0x0, 0x8, true, 0x45fa377fb1611415)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NDK_REQUEST_PARAMETERS.SwitchPortId", switch_port_id, 0x20, 0x20, true, 0x6f5dfb31a2b84b7e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NDK_REQUEST_PARAMETERS.IfIndex", if_index, 0x40, 0x20, true, 0xdf138ca6eaa20d42)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_NDK_REQUEST_PARAMETERS.MacAddress", mac_address, 0x60, 0x0, true, 0xc1dc5fe4bfd2986a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NDK_REQUEST_PARAMETERS.VlanId", vlan_id, 0x160, 0x20, true, 0xc6dec9969166d475)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ndk_capabilities_t), "_NDIS_NDK_REQUEST_PARAMETERS.NdkReserved", ndk_reserved, 0x180, 0xc0, true, 0xaecb29b56ea04c03)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif