#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9.Size", size, 0x0, 0x0, false, 0xf6bc8c3b3a056433)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_usb_target_device_select_setting_type_t ), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9.Type", type, 0x0, 0x0, false, 0x82cb36af082aaf43)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9.Types.Descriptor.InterfaceDescriptor", interface_descriptor, 0x0, 0x0, false, 0x541a545d43add859)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9.Types.Descriptor", descriptor, 0x0, 0x0, false, 0xe22eaa7ef66dc3df)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9.Types.Interface.SettingIndex", setting_index, 0x0, 0x0, false, 0x1a41bd3770569b56)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_interface_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9.Types.Interface", interface, 0x0, 0x0, false, 0xbdfa08f3d2ad2a8d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9.Types.Urb.Urb", urb, 0x0, 0x0, false, 0xb4af80993a773ec3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_urb_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9.Types.Urb", urb, 0x0, 0x0, false, 0x3b7c542323f407ae)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_INTERFACE_SELECT_SETTING_PARAMS_V1_9.Types", types, 0x0, 0x0, false, 0x32e2213593864547)
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