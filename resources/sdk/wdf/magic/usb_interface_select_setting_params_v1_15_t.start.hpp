#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_15.Size", size, 0x0, 0x0, false, 0x29edb41bdfb186ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_usb_target_device_select_setting_type_t ), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_15.Type", type, 0x0, 0x0, false, 0xe7ccd793ea05ff6c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_15.Types.Descriptor.InterfaceDescriptor", interface_descriptor, 0x0, 0x0, false, 0xe7f658d7f2ed2c52)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_15.Types.Descriptor", descriptor, 0x0, 0x0, false, 0x4f6a4c81d8e5a1fd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_15.Types.Interface.SettingIndex", setting_index, 0x0, 0x0, false, 0xde0f99d7aa5ee15d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_interface_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_15.Types.Interface", interface, 0x0, 0x0, false, 0xdde1ac776d11521a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_15.Types.Urb.Urb", urb, 0x0, 0x0, false, 0x1af47d3ea4b91c9e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_urb_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_15.Types.Urb", urb, 0x0, 0x0, false, 0xf8ad59c1cc584460)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_15.Types", types, 0x0, 0x0, false, 0xe1ae037019084c5f)
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