#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_RETRIEVE_INFO_V1_5.Size", size, 0x0, 0x0, false, 0x82d3f1ebf169659b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_identification_description_header_v1_5_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_5.IdentificationDescription", identification_description, 0x0, 0x0, false, 0x4d964cccee2a6004)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_address_description_header_v1_5_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_5.AddressDescription", address_description, 0x0, 0x0, false, 0xebccdd31b38c82fa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::child_list_retrieve_device_status_t), "_WDF_CHILD_RETRIEVE_INFO_V1_5.Status", status, 0x0, 0x0, false, 0xcecb4e5b3ddfd04e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_5.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0xebf48ad92ba37ebb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif