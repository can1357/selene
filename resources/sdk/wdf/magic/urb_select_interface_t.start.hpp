#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_SELECT_INTERFACE.Hdr", hdr, 0x0, 0xc0, true, 0x5a03cda371219369)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_SELECT_INTERFACE.ConfigurationHandle", configuration_handle, 0xc0, 0x40, true, 0x1e58119b154eddf1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_interface_information_t), "_URB_SELECT_INTERFACE.Interface", interface, 0x100, 0x80, true, 0xc001996872ac2ebc)
#else
#define _m00
#define _m01
#define _m02
#endif