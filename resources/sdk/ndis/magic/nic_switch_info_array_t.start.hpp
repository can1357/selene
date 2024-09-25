#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_NIC_SWITCH_INFO_ARRAY.Header", header, 0x0, 0x20, true, 0x2c57ebba00caa96e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_INFO_ARRAY.FirstElementOffset", first_element_offset, 0x20, 0x20, true, 0xe217453aeb284b85)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_INFO_ARRAY.NumElements", num_elements, 0x40, 0x20, true, 0x48083d14c40bb85)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_INFO_ARRAY.ElementSize", element_size, 0x60, 0x20, true, 0xb943cd28071ea7fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif