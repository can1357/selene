#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Size", size, 0x0, 0x20, true, 0x6e522ffe3aa827f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_usb_target_device_select_setting_type_t ), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Type", type, 0x20, 0x20, true, 0xeb69ccc8634eb409)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Types.Descriptor.InterfaceDescriptor", interface_descriptor, 0x0, 0x40, true, 0xe647037f3a91033e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_descriptor_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Types.Descriptor", descriptor, 0x0, 0x40, true, 0x9806d1e777165ef3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Types.Interface.SettingIndex", setting_index, 0x0, 0x8, true, 0xff5532a7273ed54)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_interface_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Types.Interface", interface, 0x0, 0x8, true, 0x3a5dea362d862c8e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Types.Urb.Urb", urb, 0x0, 0x40, true, 0xe78281d35d7a55a8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_urb_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Types.Urb", urb, 0x0, 0x40, true, 0xb78e4eb896d12130)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS.Types", types, 0x40, 0x40, true, 0x89f461e408225ed3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif