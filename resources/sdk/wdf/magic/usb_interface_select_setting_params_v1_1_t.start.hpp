#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_1.Size", size, 0x0, 0x0, false, 0x39d751cbd73724da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_usb_target_device_select_setting_type_t ), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_1.Type", type, 0x0, 0x0, false, 0xa94e7eea39644712)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_1.Types.Descriptor.InterfaceDescriptor", interface_descriptor, 0x0, 0x0, false, 0xb66ba2c09a320058)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_1.Types.Descriptor", descriptor, 0x0, 0x0, false, 0x5d9e263064fd8fda)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_1.Types.Interface.SettingIndex", setting_index, 0x0, 0x0, false, 0xe8f5cb85a6acad4f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_interface_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_1.Types.Interface", interface, 0x0, 0x0, false, 0xd58bc9762584dde)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_1.Types.Urb.Urb", urb, 0x0, 0x0, false, 0xe7dbb550ddbe0598)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_urb_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_1.Types.Urb", urb, 0x0, 0x0, false, 0xef2577ceeb705355)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_1.Types", types, 0x0, 0x0, false, 0x3d215e07cb6bbe9a)
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