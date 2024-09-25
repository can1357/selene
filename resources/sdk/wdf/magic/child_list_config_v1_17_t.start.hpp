#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0xed5f4568824d456e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_17.IdentificationDescriptionSize", identification_description_size, 0x0, 0x0, false, 0xbc0627fd6c3da48c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_17.AddressDescriptionSize", address_description_size, 0x0, 0x0, false, 0x9a148b8e0ef9cc84)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_create_device_t ), "_WDF_CHILD_LIST_CONFIG_V1_17.EvtChildListCreateDevice", evt_child_list_create_device, 0x0, 0x0, false, 0x4ee0e329edc183d0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_scan_for_children_t ), "_WDF_CHILD_LIST_CONFIG_V1_17.EvtChildListScanForChildren", evt_child_list_scan_for_children, 0x0, 0x0, false, 0x61516cbf626b8b0e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_copy_t ), "_WDF_CHILD_LIST_CONFIG_V1_17.EvtChildListIdentificationDescriptionCopy", evt_child_list_identification_description_copy, 0x0, 0x0, false, 0xf5144b9681f1f2f3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_duplicate_t ), "_WDF_CHILD_LIST_CONFIG_V1_17.EvtChildListIdentificationDescriptionDuplicate", evt_child_list_identification_description_duplicate, 0x0, 0x0, false, 0x20d4a90838348592)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_cleanup_t ), "_WDF_CHILD_LIST_CONFIG_V1_17.EvtChildListIdentificationDescriptionCleanup", evt_child_list_identification_description_cleanup, 0x0, 0x0, false, 0xd7c262dd4d40373a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_LIST_CONFIG_V1_17.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0x8a9f495d29043070)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_copy_t ), "_WDF_CHILD_LIST_CONFIG_V1_17.EvtChildListAddressDescriptionCopy", evt_child_list_address_description_copy, 0x0, 0x0, false, 0x8daa3b67741955d3)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_duplicate_t ), "_WDF_CHILD_LIST_CONFIG_V1_17.EvtChildListAddressDescriptionDuplicate", evt_child_list_address_description_duplicate, 0x0, 0x0, false, 0x73821bc9d3bb1972)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_cleanup_t ), "_WDF_CHILD_LIST_CONFIG_V1_17.EvtChildListAddressDescriptionCleanup", evt_child_list_address_description_cleanup, 0x0, 0x0, false, 0x80eb3439ec9a9ae4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_device_reenumerated_t ), "_WDF_CHILD_LIST_CONFIG_V1_17.EvtChildListDeviceReenumerated", evt_child_list_device_reenumerated, 0x0, 0x0, false, 0x65c41c9ed3ec9713)
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