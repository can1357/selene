#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cptableinfo_t), "_RTL_NLS_STATE.DefaultAcpTableInfo", default_acp_table_info, 0x0, 0x0, false, 0xa2f778585d83971d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cptableinfo_t), "_RTL_NLS_STATE.DefaultOemTableInfo", default_oem_table_info, 0x0, 0x0, false, 0x84acbef3923e3bca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RTL_NLS_STATE.ActiveCodePageData", active_code_page_data, 0x0, 0x0, false, 0xd6b52322ae4febf2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RTL_NLS_STATE.OemCodePageData", oem_code_page_data, 0x0, 0x0, false, 0x813f6f531e815f5b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RTL_NLS_STATE.LeadByteInfo", lead_byte_info, 0x0, 0x0, false, 0x7085c9b160ed326b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RTL_NLS_STATE.OemLeadByteInfo", oem_lead_byte_info, 0x0, 0x0, false, 0x67fe52b3e9d692a8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RTL_NLS_STATE.CaseMappingData", case_mapping_data, 0x0, 0x0, false, 0xd6b1e8d398f4f53b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RTL_NLS_STATE.UnicodeUpcaseTable844", unicode_upcase_table844, 0x0, 0x0, false, 0xf292017ff83ce1af)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_RTL_NLS_STATE.UnicodeLowercaseTable844", unicode_lowercase_table844, 0x0, 0x0, false, 0x816d51e3989fa69c)
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
#endif