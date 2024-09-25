#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0x227a3cf1e4f51825)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_15.IdentificationDescriptionSize", identification_description_size, 0x0, 0x0, false, 0x1debb4c1d9fa8dd8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_15.AddressDescriptionSize", address_description_size, 0x0, 0x0, false, 0xc7c17cf4326b378)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_create_device_t ), "_WDF_CHILD_LIST_CONFIG_V1_15.EvtChildListCreateDevice", evt_child_list_create_device, 0x0, 0x0, false, 0xffa5905d52dcee46)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_scan_for_children_t ), "_WDF_CHILD_LIST_CONFIG_V1_15.EvtChildListScanForChildren", evt_child_list_scan_for_children, 0x0, 0x0, false, 0x40383c0a40621d7e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_copy_t ), "_WDF_CHILD_LIST_CONFIG_V1_15.EvtChildListIdentificationDescriptionCopy", evt_child_list_identification_description_copy, 0x0, 0x0, false, 0xde726b8e30545cc1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_duplicate_t ), "_WDF_CHILD_LIST_CONFIG_V1_15.EvtChildListIdentificationDescriptionDuplicate", evt_child_list_identification_description_duplicate, 0x0, 0x0, false, 0x93f3609a00313ed4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_cleanup_t ), "_WDF_CHILD_LIST_CONFIG_V1_15.EvtChildListIdentificationDescriptionCleanup", evt_child_list_identification_description_cleanup, 0x0, 0x0, false, 0xae7d35048a726e46)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_LIST_CONFIG_V1_15.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0xb482f7a36fc53bd4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_copy_t ), "_WDF_CHILD_LIST_CONFIG_V1_15.EvtChildListAddressDescriptionCopy", evt_child_list_address_description_copy, 0x0, 0x0, false, 0x6634cb1546a15edb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_duplicate_t ), "_WDF_CHILD_LIST_CONFIG_V1_15.EvtChildListAddressDescriptionDuplicate", evt_child_list_address_description_duplicate, 0x0, 0x0, false, 0x4c47c2dcf3375d38)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_cleanup_t ), "_WDF_CHILD_LIST_CONFIG_V1_15.EvtChildListAddressDescriptionCleanup", evt_child_list_address_description_cleanup, 0x0, 0x0, false, 0x21aa45eaf01e7670)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_device_reenumerated_t ), "_WDF_CHILD_LIST_CONFIG_V1_15.EvtChildListDeviceReenumerated", evt_child_list_device_reenumerated, 0x0, 0x0, false, 0xe2301e402c4745ed)
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
#endif