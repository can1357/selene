#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_RETRIEVE_INFO_V1_9.Size", size, 0x0, 0x0, false, 0x10c1e704f725b209)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_identification_description_header_v1_9_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_9.IdentificationDescription", identification_description, 0x0, 0x0, false, 0x6d2d55850ad85377)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_address_description_header_v1_9_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_9.AddressDescription", address_description, 0x0, 0x0, false, 0x98e5ebb0ec3cd99a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::child_list_retrieve_device_status_t), "_WDF_CHILD_RETRIEVE_INFO_V1_9.Status", status, 0x0, 0x0, false, 0xa3174ac9c24abffa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_9.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0x4390396d7cdab3da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif