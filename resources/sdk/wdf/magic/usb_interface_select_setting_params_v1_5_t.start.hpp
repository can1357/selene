#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_5.Size", size, 0x0, 0x0, false, 0x5eb16a19c4ebc05a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_usb_target_device_select_setting_type_t ), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_5.Type", type, 0x0, 0x0, false, 0x308a67810b4483d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_5.Types.Descriptor.InterfaceDescriptor", interface_descriptor, 0x0, 0x0, false, 0xc75d6fc8469184ec)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_5.Types.Descriptor", descriptor, 0x0, 0x0, false, 0xd584664295eaba50)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_5.Types.Interface.SettingIndex", setting_index, 0x0, 0x0, false, 0xe40da2a48199c870)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_interface_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_5.Types.Interface", interface, 0x0, 0x0, false, 0x1def360a61b5a7cd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_5.Types.Urb.Urb", urb, 0x0, 0x0, false, 0xb8edf9ccc36d8bfe)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_urb_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_5.Types.Urb", urb, 0x0, 0x0, false, 0xa6f9aaea6a4c0c51)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_5.Types", types, 0x0, 0x0, false, 0xee79bc1cb4b49857)
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