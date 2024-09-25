#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_RETRIEVE_INFO_V1_15.Size", size, 0x0, 0x0, false, 0xbcf2fdd4338d35c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_identification_description_header_v1_15_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_15.IdentificationDescription", identification_description, 0x0, 0x0, false, 0xa18fefcaa7aaf01d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pwdf_child_address_description_header_v1_15_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_15.AddressDescription", address_description, 0x0, 0x0, false, 0x430800ad1b0c1ee7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::child_list_retrieve_device_status_t), "_WDF_CHILD_RETRIEVE_INFO_V1_15.Status", status, 0x0, 0x0, false, 0xf361f6bad40be8e2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_RETRIEVE_INFO_V1_15.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x0, 0x0, false, 0x83605441060f1a36)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif