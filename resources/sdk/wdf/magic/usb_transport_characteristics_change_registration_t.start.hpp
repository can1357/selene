#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_TRANSPORT_CHARACTERISTICS_CHANGE_REGISTRATION.ChangeNotificationInputFlags", change_notification_input_flags, 0x0, 0x20, true, 0x589c01ce11f1b2fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_change_registration_handle_t*), "_USB_TRANSPORT_CHARACTERISTICS_CHANGE_REGISTRATION.Handle", handle, 0x20, 0x40, true, 0xae92d465a6e32d2d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_transport_characteristics_t), "_USB_TRANSPORT_CHARACTERISTICS_CHANGE_REGISTRATION.UsbTransportCharacteristics", usb_transport_characteristics, 0x60, 0xc0, true, 0xb56ad78802f4302d)
#else
#define _m00
#define _m01
#define _m02
#endif