#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY.Header", header, 0x0, 0x20, true, 0x1932cd0612f9cb95)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY.ElementSize", element_size, 0x20, 0x20, true, 0x53d56f2b99e60d9d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY.NumElements", num_elements, 0x40, 0x20, true, 0xe0c41722e02e1005)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY.NumDestinations", num_destinations, 0x60, 0x20, true, 0x8ef9b12e2bb476a5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY.FirstElement", first_element, 0x80, 0x40, true, 0xc60f221c27150adb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif