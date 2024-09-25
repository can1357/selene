#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_9.Size", size, 0x0, 0x0, false, 0xbb543edd25342c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_9.IdentificationDescriptionSize", identification_description_size, 0x0, 0x0, false, 0x98a6227aed1101f1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG_V1_9.AddressDescriptionSize", address_description_size, 0x0, 0x0, false, 0xd5f38ff2a73a5398)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_create_device_t ), "_WDF_CHILD_LIST_CONFIG_V1_9.EvtChildListCreateDevice", evt_child_list_create_device, 0x0, 0x0, false, 0x25ef60196c9d3d55)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_scan_for_children_t ), "_WDF_CHILD_LIST_CONFIG_V1_9.EvtChildListScanForChildren", evt_child_list_scan_for_children, 0x0, 0x0, false, 0x59e9bb6f8f3ae202)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_copy_t ), "_WDF_CHILD_LIST_CONFIG_V1_9.EvtChildListIdentificationDescriptionCopy", evt_child_list_identification_description_copy, 0x0, 0x0, false, 0x44a2f5ea8f8f2b75)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_duplicate_t ), "_WDF_CHILD_LIST_CONFIG_V1_9.EvtChildListIdentificationDescriptionDuplicate", evt_child_list_identification_description_duplicate, 0x0, 0x0, false, 0x7ee7b352549f6be3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_cleanup_t ), "_WDF_CHILD_LIST_CONFIG_V1_9.EvtChildListIdentificationDescriptionCleanup", evt_child_list_identification_description_cleanup, 0x0, 0x0, false, 0x3414896b27897434)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_LIST_CONFIG_V1_9.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0xdfbcb7201b2b5112)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_copy_t ), "_WDF_CHILD_LIST_CONFIG_V1_9.EvtChildListAddressDescriptionCopy", evt_child_list_address_description_copy, 0x0, 0x0, false, 0x399203a19d98e373)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_duplicate_t ), "_WDF_CHILD_LIST_CONFIG_V1_9.EvtChildListAddressDescriptionDuplicate", evt_child_list_address_description_duplicate, 0x0, 0x0, false, 0xcabc78961b1b25ea)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_cleanup_t ), "_WDF_CHILD_LIST_CONFIG_V1_9.EvtChildListAddressDescriptionCleanup", evt_child_list_address_description_cleanup, 0x0, 0x0, false, 0x7fc86f91e416c29c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_device_reenumerated_t ), "_WDF_CHILD_LIST_CONFIG_V1_9.EvtChildListDeviceReenumerated", evt_child_list_device_reenumerated, 0x0, 0x0, false, 0xdfd72ba6487878d9)
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