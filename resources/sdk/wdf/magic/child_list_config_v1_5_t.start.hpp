#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_5.Size", size, 0x0, 0x0, false, 0xb6085b3bbb7ed6fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_5.IdentificationDescriptionSize", identification_description_size, 0x0, 0x0, false, 0x869098b600d444e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_5.AddressDescriptionSize", address_description_size, 0x0, 0x0, false, 0xe20ac08c653bf1f9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_create_device_t ), "_WDF_CHILD_LIST_CONFIG_V1_5.EvtChildListCreateDevice", evt_child_list_create_device, 0x0, 0x0, false, 0xc3810c7530ae88a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_scan_for_children_t ), "_WDF_CHILD_LIST_CONFIG_V1_5.EvtChildListScanForChildren", evt_child_list_scan_for_children, 0x0, 0x0, false, 0xb382b83e182ca488)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_copy_t ), "_WDF_CHILD_LIST_CONFIG_V1_5.EvtChildListIdentificationDescriptionCopy", evt_child_list_identification_description_copy, 0x0, 0x0, false, 0xc53ac445f9269b77)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_duplicate_t ), "_WDF_CHILD_LIST_CONFIG_V1_5.EvtChildListIdentificationDescriptionDuplicate", evt_child_list_identification_description_duplicate, 0x0, 0x0, false, 0xe5d1537bc5483b6d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_cleanup_t ), "_WDF_CHILD_LIST_CONFIG_V1_5.EvtChildListIdentificationDescriptionCleanup", evt_child_list_identification_description_cleanup, 0x0, 0x0, false, 0xdfadf57f53796059)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_LIST_CONFIG_V1_5.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0xeb45b529ccf9f4a9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_copy_t ), "_WDF_CHILD_LIST_CONFIG_V1_5.EvtChildListAddressDescriptionCopy", evt_child_list_address_description_copy, 0x0, 0x0, false, 0x407368d63e7bae2a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_duplicate_t ), "_WDF_CHILD_LIST_CONFIG_V1_5.EvtChildListAddressDescriptionDuplicate", evt_child_list_address_description_duplicate, 0x0, 0x0, false, 0xc3429c9eec2e32d5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_cleanup_t ), "_WDF_CHILD_LIST_CONFIG_V1_5.EvtChildListAddressDescriptionCleanup", evt_child_list_address_description_cleanup, 0x0, 0x0, false, 0xdcd145752402470c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_device_reenumerated_t ), "_WDF_CHILD_LIST_CONFIG_V1_5.EvtChildListDeviceReenumerated", evt_child_list_device_reenumerated, 0x0, 0x0, false, 0xa88e688022065645)
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