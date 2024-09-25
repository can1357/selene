#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_9.UsbInterface", usb_interface, 0x0, 0x0, false, 0x29419dd35a38cadc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_9.SettingIndex", setting_index, 0x0, 0x0, false, 0xcd8d503bd9d3065a)
#else
#define _m00
#define _m01
#endif