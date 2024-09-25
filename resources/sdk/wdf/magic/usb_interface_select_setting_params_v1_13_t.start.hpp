#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_13.Size", size, 0x0, 0x0, false, 0x3df20caeaf2094b3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_usb_target_device_select_setting_type_t ), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_13.Type", type, 0x0, 0x0, false, 0x1bbef0192e1ec855)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_13.Types.Descriptor.InterfaceDescriptor", interface_descriptor, 0x0, 0x0, false, 0x5a31ee831079dd4b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_13.Types.Descriptor", descriptor, 0x0, 0x0, false, 0x7285a5805d825d46)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_13.Types.Interface.SettingIndex", setting_index, 0x0, 0x0, false, 0xf3d7e71c550e96ae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_interface_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_13.Types.Interface", interface, 0x0, 0x0, false, 0xcccdbaf3158a5a02)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_13.Types.Urb.Urb", urb, 0x0, 0x0, false, 0xf1baff9c978660cd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_urb_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_13.Types.Urb", urb, 0x0, 0x0, false, 0xed1bef176dcaf121)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_13.Types", types, 0x0, 0x0, false, 0xf694fe7e946449b6)
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