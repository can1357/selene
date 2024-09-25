#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_RETRIEVE_INFO_V1_1.Size", size, 0x0, 0x0, false, 0x413a19b71985b684)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_identification_description_header_v1_1_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_1.IdentificationDescription", identification_description, 0x0, 0x0, false, 0x5e82532a0415a559)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_address_description_header_v1_1_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_1.AddressDescription", address_description, 0x0, 0x0, false, 0xa505e78ee004fbe3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::child_list_retrieve_device_status_t), "_WDF_CHILD_RETRIEVE_INFO_V1_1.Status", status, 0x0, 0x0, false, 0xd96ebf2c8e74626e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_1.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0x11cdaadfb0a26357)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif