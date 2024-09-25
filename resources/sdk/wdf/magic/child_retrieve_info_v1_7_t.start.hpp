#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_RETRIEVE_INFO_V1_7.Size", size, 0x0, 0x0, false, 0xc594dd9d386c2be3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_identification_description_header_v1_7_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_7.IdentificationDescription", identification_description, 0x0, 0x0, false, 0xcbb5a78c331e4b65)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_address_description_header_v1_7_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_7.AddressDescription", address_description, 0x0, 0x0, false, 0x3179d878015a03f9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::child_list_retrieve_device_status_t), "_WDF_CHILD_RETRIEVE_INFO_V1_7.Status", status, 0x0, 0x0, false, 0x6c91093d22dcb50)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_7.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0x14c49f8cf94f881a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif