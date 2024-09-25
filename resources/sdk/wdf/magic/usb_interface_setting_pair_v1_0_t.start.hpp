#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_0.UsbInterface", usb_interface, 0x0, 0x0, false, 0x3fe23e3d7153048d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_0.SettingIndex", setting_index, 0x0, 0x0, false, 0xa02cd2b12f2b4f00)
#else
#define _m00
#define _m01
#endif