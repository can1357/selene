#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_11.UsbInterface", usb_interface, 0x0, 0x0, false, 0xddc0028bd6cb4456)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_11.SettingIndex", setting_index, 0x0, 0x0, false, 0x35da9314fde27113)
#else
#define _m00
#define _m01
#endif