#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_1.UsbInterface", usb_interface, 0x0, 0x0, false, 0xafeb082f87fc0b16)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SETTING_PAIR_V1_1.SettingIndex", setting_index, 0x0, 0x0, false, 0x2ba0301626ab7587)
#else
#define _m00
#define _m01
#endif