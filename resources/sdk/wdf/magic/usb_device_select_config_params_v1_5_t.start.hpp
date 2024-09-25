#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Size", size, 0x0, 0x0, false, 0x66f5c2cb69bb436d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_target_device_select_config_type_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Type", type, 0x0, 0x0, false, 0x3dcd68494f9a809f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_configuration_descriptor_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.Descriptor.ConfigurationDescriptor", configuration_descriptor, 0x0, 0x0, false, 0x9038c89384e2b738)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t**), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.Descriptor.InterfaceDescriptors", interface_descriptors, 0x0, 0x0, false, 0xbc9538690e0249c8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.Descriptor.NumInterfaceDescriptors", num_interface_descriptors, 0x0, 0x0, false, 0xdae7276c95a0d2c4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.Descriptor", descriptor, 0x0, 0x0, false, 0xa87e5ab1fe95dab2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.Urb.Urb", urb, 0x0, 0x0, false, 0x2bcc32bec248b29e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_urb_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.Urb", urb, 0x0, 0x0, false, 0x32ef982c65e3c7a6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.SingleInterface.NumberConfiguredPipes", number_configured_pipes, 0x0, 0x0, false, 0x2cfa8f5e0569ab65)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.SingleInterface.ConfiguredUsbInterface", configured_usb_interface, 0x0, 0x0, false, 0xe2906ddc050f1c0)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_single_interface_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.SingleInterface", single_interface, 0x0, 0x0, false, 0x51918045328ed5f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.MultiInterface.NumberInterfaces", number_interfaces, 0x0, 0x0, false, 0x2327edf7ccda7af4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_setting_pair_v1_5_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.MultiInterface.Pairs", pairs, 0x0, 0x0, false, 0x8847c7948947b507)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.MultiInterface.NumberOfConfiguredInterfaces", number_of_configured_interfaces, 0x0, 0x0, false, 0x62a07e3ca6183245)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_multi_interface_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types.MultiInterface", multi_interface, 0x0, 0x0, false, 0xe3f6836b03e0257)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_5.Types", types, 0x0, 0x0, false, 0x1b99c868f5e278b3)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif