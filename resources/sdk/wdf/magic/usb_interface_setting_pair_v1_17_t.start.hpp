#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_17.UsbInterface", usb_interface, 0x0, 0x0, false, 0x8e9ebeb6a8d54be2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_17.SettingIndex", setting_index, 0x0, 0x0, false, 0xb6c8caefc3e6e31f)
#else
#define _m00
#define _m01
#endif