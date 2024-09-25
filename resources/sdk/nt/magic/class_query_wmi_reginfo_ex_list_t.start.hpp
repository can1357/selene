#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_QUERY_WMI_REGINFO_EX_LIST.Size", size, 0x0, 0x20, true, 0xe1277321d1a2cbfd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_query_wmi_reginfo_ex_t ), "_CLASS_QUERY_WMI_REGINFO_EX_LIST.ClassFdoQueryWmiRegInfoEx", class_fdo_query_wmi_reg_info_ex, 0x40, 0x40, true, 0xaf45819d734ad3ea)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_query_wmi_reginfo_ex_t ), "_CLASS_QUERY_WMI_REGINFO_EX_LIST.ClassPdoQueryWmiRegInfoEx", class_pdo_query_wmi_reg_info_ex, 0x80, 0x40, true, 0xc4b871a93370653e)
#else
#define _m00
#define _m01
#define _m02
#endif