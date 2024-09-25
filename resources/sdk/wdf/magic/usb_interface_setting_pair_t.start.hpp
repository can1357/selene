#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_INTERFACE_SETTING_PAIR.UsbInterface", usb_interface, 0x0, 0x40, true, 0x1d4e56ef8584fa2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SETTING_PAIR.SettingIndex", setting_index, 0x40, 0x8, true, 0x7640097a056f3cb5)
#else
#define _m00
#define _m01
#endif