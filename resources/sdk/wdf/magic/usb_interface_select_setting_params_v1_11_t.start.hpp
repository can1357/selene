#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_11.Size", size, 0x0, 0x0, false, 0x980c0dff3a94859a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_usb_target_device_select_setting_type_t ), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_11.Type", type, 0x0, 0x0, false, 0xb294c788280337a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_11.Types.Descriptor.InterfaceDescriptor", interface_descriptor, 0x0, 0x0, false, 0x1b322387c2246b2c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_11.Types.Descriptor", descriptor, 0x0, 0x0, false, 0x153f2286ee038990)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_11.Types.Interface.SettingIndex", setting_index, 0x0, 0x0, false, 0xded49a50e0fc0b76)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_interface_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_11.Types.Interface", interface, 0x0, 0x0, false, 0x7af64ad852065b7c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_11.Types.Urb.Urb", urb, 0x0, 0x0, false, 0xfc5394ae9bdc0705)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_urb_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_11.Types.Urb", urb, 0x0, 0x0, false, 0x512063245433dad)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_11.Types", types, 0x0, 0x0, false, 0xb13de166c7df1e1)
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