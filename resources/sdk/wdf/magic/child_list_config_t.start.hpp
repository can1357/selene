#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG.Size", size, 0x0, 0x20, true, 0x1ac928689d47780f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG.IdentificationDescriptionSize", identification_description_size, 0x20, 0x20, true, 0x12c4baee2993b99d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_LIST_CONFIG.AddressDescriptionSize", address_description_size, 0x40, 0x20, true, 0x1f75caf6a671e91a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_create_device_t ), "_WDF_CHILD_LIST_CONFIG.EvtChildListCreateDevice", evt_child_list_create_device, 0x80, 0x40, true, 0x1e663b5b0ea71c4a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_scan_for_children_t ), "_WDF_CHILD_LIST_CONFIG.EvtChildListScanForChildren", evt_child_list_scan_for_children, 0xc0, 0x40, true, 0xb6e6147e31f9defe)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_copy_t ), "_WDF_CHILD_LIST_CONFIG.EvtChildListIdentificationDescriptionCopy", evt_child_list_identification_description_copy, 0x100, 0x40, true, 0xd670960666b69f6a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_duplicate_t ), "_WDF_CHILD_LIST_CONFIG.EvtChildListIdentificationDescriptionDuplicate", evt_child_list_identification_description_duplicate, 0x140, 0x40, true, 0xa96e29f2ff1ae7bf)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_cleanup_t ), "_WDF_CHILD_LIST_CONFIG.EvtChildListIdentificationDescriptionCleanup", evt_child_list_identification_description_cleanup, 0x180, 0x40, true, 0xc50dac14885dca0a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_LIST_CONFIG.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x1c0, 0x40, true, 0x3ef426ea733e427)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_copy_t ), "_WDF_CHILD_LIST_CONFIG.EvtChildListAddressDescriptionCopy", evt_child_list_address_description_copy, 0x200, 0x40, true, 0x8ab283545e838c4f)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_duplicate_t ), "_WDF_CHILD_LIST_CONFIG.EvtChildListAddressDescriptionDuplicate", evt_child_list_address_description_duplicate, 0x240, 0x40, true, 0xf4ae419eb9d5c57f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_address_description_cleanup_t ), "_WDF_CHILD_LIST_CONFIG.EvtChildListAddressDescriptionCleanup", evt_child_list_address_description_cleanup, 0x280, 0x40, true, 0xadd5d7e859e474e4)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_device_reenumerated_t ), "_WDF_CHILD_LIST_CONFIG.EvtChildListDeviceReenumerated", evt_child_list_device_reenumerated, 0x2c0, 0x40, true, 0x32ca4c5508bdc5d7)
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