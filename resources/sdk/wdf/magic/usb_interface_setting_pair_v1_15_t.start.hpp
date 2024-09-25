#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_15.UsbInterface", usb_interface, 0x0, 0x0, false, 0x38b47605a715221f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_15.SettingIndex", setting_index, 0x0, 0x0, false, 0xdb7ad482551b3750)
#else
#define _m00
#define _m01
#endif