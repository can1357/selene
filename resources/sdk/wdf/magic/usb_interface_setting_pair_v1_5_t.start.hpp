#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_5.UsbInterface", usb_interface, 0x0, 0x0, false, 0x2da52a6e1a1fe8f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_5.SettingIndex", setting_index, 0x0, 0x0, false, 0x1824bb8cb42d7deb)
#else
#define _m00
#define _m01
#endif