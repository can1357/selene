#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_WMI_INFO.GuidCount", guid_count, 0x0, 0x20, true, 0x85dbd17f2fe66bf5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guidreginfo_t*), "_CLASS_WMI_INFO.GuidRegInfo", guid_reg_info, 0x40, 0x40, true, 0x8845e40d65aea1b7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_query_wmi_reginfo_t ), "_CLASS_WMI_INFO.ClassQueryWmiRegInfo", class_query_wmi_reg_info, 0x80, 0x40, true, 0xae83e4bda4f424d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint8_t*)>*), "_CLASS_WMI_INFO.ClassQueryWmiDataBlock", class_query_wmi_data_block, 0xc0, 0x40, true, 0x3ab89941840336a1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, uint32_t, uint32_t, uint8_t*)>*), "_CLASS_WMI_INFO.ClassSetWmiDataBlock", class_set_wmi_data_block, 0x100, 0x40, true, 0x93eaea382d7d49a2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_set_wmi_dataitem_t ), "_CLASS_WMI_INFO.ClassSetWmiDataItem", class_set_wmi_data_item, 0x140, 0x40, true, 0x4df35ca19404c480)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_execute_wmi_method_t ), "_CLASS_WMI_INFO.ClassExecuteWmiMethod", class_execute_wmi_method, 0x180, 0x40, true, 0x17c77179e311b32b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_wmi_function_control_t ), "_CLASS_WMI_INFO.ClassWmiFunctionControl", class_wmi_function_control, 0x1c0, 0x40, true, 0xd60a81bb47c6886e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif