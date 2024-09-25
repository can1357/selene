#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CHILD_RETRIEVE_INFO.Size", size, 0x0, 0x20, true, 0x83e68c20c1f1481a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pwdf_child_identification_description_header_t ), "_WDF_CHILD_RETRIEVE_INFO.IdentificationDescription", identification_description, 0x40, 0x40, true, 0x2d5d66f3ec6ce864)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::child_address_description_header_t*), "_WDF_CHILD_RETRIEVE_INFO.AddressDescription", address_description, 0x80, 0x40, true, 0xa7791c3872db7f0f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::child_list_retrieve_device_status_t), "_WDF_CHILD_RETRIEVE_INFO.Status", status, 0xc0, 0x20, true, 0x90ea3f72081824d3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_child_list_identification_description_compare_t ), "_WDF_CHILD_RETRIEVE_INFO.EvtChildListIdentificationDescriptionCompare", evt_child_list_identification_description_compare, 0x100, 0x40, true, 0xf42edc92b2dfadd5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif