#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7.Size", size, 0x0, 0x0, false, 0x4805d1259373cbd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_usb_target_device_select_setting_type_t ), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7.Type", type, 0x0, 0x0, false, 0x5efe70f143899c04)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7.Types.Descriptor.InterfaceDescriptor", interface_descriptor, 0x0, 0x0, false, 0xafe98844ec36d1d8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7.Types.Descriptor", descriptor, 0x0, 0x0, false, 0x3f66198b271f981a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7.Types.Interface.SettingIndex", setting_index, 0x0, 0x0, false, 0x7abbb1b0ff056cc5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_interface_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7.Types.Interface", interface, 0x0, 0x0, false, 0x1090ff8dd2df72c2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7.Types.Urb.Urb", urb, 0x0, 0x0, false, 0xa253141765f8779a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_urb_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7.Types.Urb", urb, 0x0, 0x0, false, 0x68e7393ea032a617)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_7.Types", types, 0x0, 0x0, false, 0xf7703aabac6c1e8a)
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