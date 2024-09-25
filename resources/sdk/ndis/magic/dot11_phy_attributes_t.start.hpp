#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_PHY_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0x4c7dca3b314fa5e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_phy_type_t), "DOT11_PHY_ATTRIBUTES.PhyType", phy_type, 0x20, 0x20, true, 0xeb3c9a086b65c6b6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_PHY_ATTRIBUTES.bHardwarePhyState", b_hardware_phy_state, 0x40, 0x8, true, 0xbf5577ed1023205f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_PHY_ATTRIBUTES.bSoftwarePhyState", b_software_phy_state, 0x48, 0x8, true, 0x68102e7fc3a9cc98)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_PHY_ATTRIBUTES.bCFPollable", b_cf_pollable, 0x50, 0x8, true, 0xcb727158b6d601e5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_PHY_ATTRIBUTES.uMPDUMaxLength", u_mpdu_max_length, 0x60, 0x20, true, 0x5b18e860cbce3466)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_temp_type_t), "DOT11_PHY_ATTRIBUTES.TempType", temp_type, 0x80, 0x20, true, 0x37664d0354a9761e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::dot11_diversity_support_t), "DOT11_PHY_ATTRIBUTES.DiversitySupport", diversity_support, 0xa0, 0x20, true, 0xc9425b967ac992e3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_hrdsss_phy_attributes_t), "DOT11_PHY_ATTRIBUTES.PhySpecificAttributes.HRDSSSAttributes", hrdsss_attributes, 0x0, 0x40, true, 0x754ef84af104c907)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_ofdm_phy_attributes_t), "DOT11_PHY_ATTRIBUTES.PhySpecificAttributes.OFDMAttributes", ofdm_attributes, 0x0, 0x20, true, 0x95d9c84fa8cedb8c)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_erp_phy_attributes_t), "DOT11_PHY_ATTRIBUTES.PhySpecificAttributes.ERPAttributes", erp_attributes, 0x0, 0x60, true, 0x5ba91db911431c0f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_phy_specific_attributes_t), "DOT11_PHY_ATTRIBUTES.PhySpecificAttributes", phy_specific_attributes, 0xc0, 0x60, true, 0xf59334bd05f7511c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_PHY_ATTRIBUTES.uNumberSupportedPowerLevels", u_number_supported_power_levels, 0x120, 0x20, true, 0xa1c228a34020ed65)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 8>), "DOT11_PHY_ATTRIBUTES.TxPowerLevels", tx_power_levels, 0x140, 0x0, true, 0x58588e3735ddeb9e)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_PHY_ATTRIBUTES.uNumDataRateMappingEntries", u_num_data_rate_mapping_entries, 0x240, 0x20, true, 0xfd6f138fc0bc0524)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::dot11_data_rate_mapping_entry_t, 126>), "DOT11_PHY_ATTRIBUTES.DataRateMappingEntries", data_rate_mapping_entries, 0x260, 0xc0, true, 0x2d2639de8ad7b667)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_supported_data_rates_value_v2_t), "DOT11_PHY_ATTRIBUTES.SupportedDataRatesValue", supported_data_rates_value, 0x1220, 0xf0, true, 0xa8bae80e0ee3c538)
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
#endif