#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_1.Size", size, 0x0, 0x0, false, 0x304a0506cead5420)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_1.IdentificationDescriptionSize", identification_description_size, 0x0, 0x0, false, 0x5a32650b3fddc29)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_1.AddressDescriptionSize", address_description_size, 0x0, 0x0, false, 0x58b1934828c98664)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_create_device_t ), "_WDF_CHILD_LIST_CONFIG_V1_1.EvtChildListCreateDevice", evt_child_list_create_device, 0x0, 0x0, false, 0x7083dd3deed78c9f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_scan_for_children_t ), "_WDF_CHILD_LIST_CONFIG_V1_1.EvtChildListScanForChildren", evt_child_list_scan_for_children, 0x0, 0x0, false, 0x2263e3a70254b646)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_copy_t ), "_WDF_CHILD_LIST_CONFIG_V1_1.EvtChildListIdentificationDescriptionCopy", evt_child_list_identification_description_copy, 0x0, 0x0, false, 0x79efb33b4e912ee5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_duplicate_t ), "_WDF_CHILD_LIST_CONFIG_V1_1.EvtChildListIdentificationDescriptionDuplicate", evt_child_list_identification_description_duplicate, 0x0, 0x0, false, 0x4f4609ae39a6d3b4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_cleanup_t ), "_WDF_CHILD_LIST_CONFIG_V1_1.EvtChildListIdentificationDescriptionCleanup", evt_child_list_identification_description_cleanup, 0x0, 0x0, false, 0x25ccb7a013c14efb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_LIST_CONFIG_V1_1.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0xc0119d5a0558294b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_copy_t ), "_WDF_CHILD_LIST_CONFIG_V1_1.EvtChildListAddressDescriptionCopy", evt_child_list_address_description_copy, 0x0, 0x0, false, 0xdb4bde86a96c53a1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_duplicate_t ), "_WDF_CHILD_LIST_CONFIG_V1_1.EvtChildListAddressDescriptionDuplicate", evt_child_list_address_description_duplicate, 0x0, 0x0, false, 0xfa11d19d7cc9a797)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_cleanup_t ), "_WDF_CHILD_LIST_CONFIG_V1_1.EvtChildListAddressDescriptionCleanup", evt_child_list_address_description_cleanup, 0x0, 0x0, false, 0xe4d2c0710ee76b92)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_device_reenumerated_t ), "_WDF_CHILD_LIST_CONFIG_V1_1.EvtChildListDeviceReenumerated", evt_child_list_device_reenumerated, 0x0, 0x0, false, 0x468bd07164f5992)
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