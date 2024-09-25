#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_RETRIEVE_INFO_V1_13.Size", size, 0x0, 0x0, false, 0xc7f7f452ecb5348a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_identification_description_header_v1_13_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_13.IdentificationDescription", identification_description, 0x0, 0x0, false, 0xcc4a0d39c831ea80)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_address_description_header_v1_13_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_13.AddressDescription", address_description, 0x0, 0x0, false, 0xa0d80ffbadb4a6ab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::child_list_retrieve_device_status_t), "_WDF_CHILD_RETRIEVE_INFO_V1_13.Status", status, 0x0, 0x0, false, 0xcc02a11c377f4d9e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_13.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0x312ec566d9ad7f3a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif