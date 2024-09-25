#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_0.Size", size, 0x0, 0x0, false, 0x923578b5773c7a1e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_usb_target_device_select_setting_type_t ), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_0.Type", type, 0x0, 0x0, false, 0xbd592d5e09505d6c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_0.Types.Descriptor.InterfaceDescriptor", interface_descriptor, 0x0, 0x0, false, 0xcc3aab8bf15e1494)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_0.Types.Descriptor", descriptor, 0x0, 0x0, false, 0xd77eeb2d76e7ef6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_0.Types.Interface.SettingIndex", setting_index, 0x0, 0x0, false, 0xbaa8c8a2c22863ae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_interface_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_0.Types.Interface", interface, 0x0, 0x0, false, 0x2d7ba4110a280bc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_0.Types.Urb.Urb", urb, 0x0, 0x0, false, 0xdb2aba4107b86ba0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_urb_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_0.Types.Urb", urb, 0x0, 0x0, false, 0xa563a9755f1327a0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_0.Types", types, 0x0, 0x0, false, 0xb1aa978a74f49830)
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