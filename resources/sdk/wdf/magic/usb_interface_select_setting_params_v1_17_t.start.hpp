#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Size", size, 0x0, 0x0, false, 0x5b2bd9c68c94c2b7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_usb_target_device_select_setting_type_t ), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Type", type, 0x0, 0x0, false, 0x147f9b75db122e3a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Types.Descriptor.InterfaceDescriptor", interface_descriptor, 0x0, 0x0, false, 0xf6f7746e4f913e48)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Types.Descriptor", descriptor, 0x0, 0x0, false, 0xdf1fe433bef4802)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Types.Interface.SettingIndex", setting_index, 0x0, 0x0, false, 0x966332e61e1d90da)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_interface_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Types.Interface", interface, 0x0, 0x0, false, 0x5275ff34346e165a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Types.Urb.Urb", urb, 0x0, 0x0, false, 0x24cd5ba56d1e7c40)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_urb_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Types.Urb", urb, 0x0, 0x0, false, 0xc069050555900725)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_17.Types", types, 0x0, 0x0, false, 0xf4881c8e241d6896)
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