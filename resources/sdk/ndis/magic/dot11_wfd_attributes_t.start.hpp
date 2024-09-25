#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_DOT11_WFD_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0x3c965c6aad5c0cfb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_WFD_ATTRIBUTES.uNumConcurrentGORole", u_num_concurrent_go_role, 0x20, 0x20, true, 0x8eae467a2564e196)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_WFD_ATTRIBUTES.uNumConcurrentClientRole", u_num_concurrent_client_role, 0x40, 0x20, true, 0x2d680afcdd96cab4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_WFD_ATTRIBUTES.WPSVersionsSupported", wps_versions_supported, 0x60, 0x20, true, 0x701acf5ce703882b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DOT11_WFD_ATTRIBUTES.bServiceDiscoverySupported", b_service_discovery_supported, 0x80, 0x8, true, 0xa035e9f901de7ed1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DOT11_WFD_ATTRIBUTES.bClientDiscoverabilitySupported", b_client_discoverability_supported, 0x88, 0x8, true, 0x72a37aa16c497d2e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DOT11_WFD_ATTRIBUTES.bInfrastructureManagementSupported", b_infrastructure_management_supported, 0x90, 0x8, true, 0x1ce4198a87dae8a6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_WFD_ATTRIBUTES.uMaxSecondaryDeviceTypeListSize", u_max_secondary_device_type_list_size, 0xa0, 0x20, true, 0xcf5de8bd3627b5e3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_DOT11_WFD_ATTRIBUTES.DeviceAddress", device_address, 0xc0, 0x30, true, 0xf089df14bcbf5190)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_WFD_ATTRIBUTES.uInterfaceAddressListCount", u_interface_address_list_count, 0x100, 0x20, true, 0xff8d61209bf2e928)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>*), "_DOT11_WFD_ATTRIBUTES.pInterfaceAddressList", p_interface_address_list, 0x140, 0x40, true, 0xc4119989bee39207)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_WFD_ATTRIBUTES.uNumSupportedCountryOrRegionStrings", u_num_supported_country_or_region_strings, 0x180, 0x20, true, 0x7cf82e3fc1fabff6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>*), "_DOT11_WFD_ATTRIBUTES.pSupportedCountryOrRegionStrings", p_supported_country_or_region_strings, 0x1c0, 0x40, true, 0x9c1b337a2e965fdf)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_WFD_ATTRIBUTES.uDiscoveryFilterListSize", u_discovery_filter_list_size, 0x200, 0x20, true, 0xf431ffdee6567ad3)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_WFD_ATTRIBUTES.uGORoleClientTableSize", u_go_role_client_table_size, 0x220, 0x20, true, 0x9608030cfdc44abb)
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
#endif