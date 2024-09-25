#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_SELECT_INTERFACE_WITH_ENDPOINT_OFFLOAD.Hdr", hdr, 0x0, 0xc0, true, 0x37f8dc3787a6af0b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_SELECT_INTERFACE_WITH_ENDPOINT_OFFLOAD.ConfigurationHandle", configuration_handle, 0xc0, 0x40, true, 0xa0669b7208ee1efe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_SELECT_INTERFACE_WITH_ENDPOINT_OFFLOAD.NumberOfEndpointsToOffload", number_of_endpoints_to_offload, 0x100, 0x20, true, 0x62cf8a506b78ea7e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_SELECT_INTERFACE_WITH_ENDPOINT_OFFLOAD.InternalEndpointInformationArray", internal_endpoint_information_array, 0x140, 0x40, true, 0xe54c308e217ba1c0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_interface_information_t), "_URB_SELECT_INTERFACE_WITH_ENDPOINT_OFFLOAD.Interface", interface, 0x180, 0x80, true, 0xcea0e5bba0f06f9c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif