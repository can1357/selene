#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_change_registration_handle_t*), "_USB_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION.Handle", handle, 0x0, 0x40, true, 0xb48f925cd00f8595)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_transport_characteristics_t), "_USB_TRANSPORT_CHARACTERISTICS_CHANGE_NOTIFICATION.UsbTransportCharacteristics", usb_transport_characteristics, 0x40, 0xc0, true, 0x573fc9592b9ec58c)
#else
#define _m00
#define _m01
#endif