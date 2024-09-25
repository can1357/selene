#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_SELECT_CONFIGURATION.Hdr", hdr, 0x0, 0xc0, true, 0xaef4f711887a1f2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_configuration_descriptor_t*), "_URB_SELECT_CONFIGURATION.ConfigurationDescriptor", configuration_descriptor, 0xc0, 0x40, true, 0x9a3be4d1b6e69ea7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_SELECT_CONFIGURATION.ConfigurationHandle", configuration_handle, 0x100, 0x40, true, 0xe1233ec3e60b3735)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_interface_information_t), "_URB_SELECT_CONFIGURATION.Interface", interface, 0x140, 0x80, true, 0xe6785a1d210cea93)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif