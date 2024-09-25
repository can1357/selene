#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_RETRIEVE_INFO_V1_0.Size", size, 0x0, 0x0, false, 0x1fa0ad81a0e61432)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_identification_description_header_v1_0_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_0.IdentificationDescription", identification_description, 0x0, 0x0, false, 0x1d7af87905e603cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_address_description_header_v1_0_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_0.AddressDescription", address_description, 0x0, 0x0, false, 0x3db93969f02c8b26)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::child_list_retrieve_device_status_t), "_WDF_CHILD_RETRIEVE_INFO_V1_0.Status", status, 0x0, 0x0, false, 0xb20d5d8834bb27bb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_0.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0xeb923e38ccad1b64)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif