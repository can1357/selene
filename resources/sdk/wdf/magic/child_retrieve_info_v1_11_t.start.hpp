#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_RETRIEVE_INFO_V1_11.Size", size, 0x0, 0x0, false, 0x264ea13c9afe64f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_identification_description_header_v1_11_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_11.IdentificationDescription", identification_description, 0x0, 0x0, false, 0xd405f6590d63f0a8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_address_description_header_v1_11_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_11.AddressDescription", address_description, 0x0, 0x0, false, 0x80851786a535dd1b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::child_list_retrieve_device_status_t), "_WDF_CHILD_RETRIEVE_INFO_V1_11.Status", status, 0x0, 0x0, false, 0xba1f9118835758b6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_11.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0xaf03ca3e53b5b8dc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif