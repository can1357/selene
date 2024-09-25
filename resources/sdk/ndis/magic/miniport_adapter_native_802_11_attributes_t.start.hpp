#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0x778abf4c23a08c60)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES.OpModeCapability", op_mode_capability, 0x20, 0x20, true, 0x399899f0ebd992e3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES.NumOfTXBuffers", num_of_tx_buffers, 0x40, 0x20, true, 0x15132f2b6e36af42)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES.NumOfRXBuffers", num_of_rx_buffers, 0x60, 0x20, true, 0x1fb8622d1045a634)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES.MultiDomainCapabilityImplemented", multi_domain_capability_implemented, 0x80, 0x8, true, 0x356f00d3bb338533)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES.NumSupportedPhys", num_supported_phys, 0xa0, 0x20, true, 0x8bdeb8f9776ee05d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_phy_attributes_t*), "_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES.SupportedPhyAttributes", supported_phy_attributes, 0xc0, 0x40, true, 0xee02dda5fb8c060f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_extsta_attributes_t*), "_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES.ExtSTAAttributes", ext_sta_attributes, 0x100, 0x40, true, 0x9b414ae31bfdd583)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_vwifi_attributes_t*), "_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES.VWiFiAttributes", v_wi_fi_attributes, 0x140, 0x40, true, 0xd1b9f68e9edfe300)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_extap_attributes_t*), "_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES.ExtAPAttributes", ext_ap_attributes, 0x180, 0x40, true, 0x54b3ffcfcf10b8ed)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_wfd_attributes_t*), "_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES.WFDAttributes", wfd_attributes, 0x1c0, 0x40, true, 0x540b6b9139d99ede)
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
#endif