#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_RETRIEVE_INFO_V1_17.Size", size, 0x0, 0x0, false, 0x9597609b559e736)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_identification_description_header_v1_17_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_17.IdentificationDescription", identification_description, 0x0, 0x0, false, 0xa429b99a18b57631)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_address_description_header_v1_17_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_17.AddressDescription", address_description, 0x0, 0x0, false, 0x7ddc617345fdc852)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::child_list_retrieve_device_status_t), "_WDF_CHILD_RETRIEVE_INFO_V1_17.Status", status, 0x0, 0x0, false, 0x85ddf7ad4282c828)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_17.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0xd67a92385f77fafd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif