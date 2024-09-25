#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Size", size, 0x0, 0x0, false, 0x629f3beafc848d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_target_device_select_config_type_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Type", type, 0x0, 0x0, false, 0x6371d426d8b5d7cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_configuration_descriptor_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.Descriptor.ConfigurationDescriptor", configuration_descriptor, 0x0, 0x0, false, 0xb9310bc181534704)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t**), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.Descriptor.InterfaceDescriptors", interface_descriptors, 0x0, 0x0, false, 0xb2bdc13d5544a569)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.Descriptor.NumInterfaceDescriptors", num_interface_descriptors, 0x0, 0x0, false, 0xd8341b43f050cc18)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.Descriptor", descriptor, 0x0, 0x0, false, 0x71116ef8a904c18d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.Urb.Urb", urb, 0x0, 0x0, false, 0x1b8545a744afc907)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_urb_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.Urb", urb, 0x0, 0x0, false, 0xdac19c8a4180d225)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.SingleInterface.NumberConfiguredPipes", number_configured_pipes, 0x0, 0x0, false, 0xf41991ccd430b346)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.SingleInterface.ConfiguredUsbInterface", configured_usb_interface, 0x0, 0x0, false, 0x6b1ddd64f7ccc5d6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_single_interface_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.SingleInterface", single_interface, 0x0, 0x0, false, 0xc3065bd5d5852835)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.MultiInterface.NumberInterfaces", number_interfaces, 0x0, 0x0, false, 0x3e991089052119f3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_setting_pair_v1_0_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.MultiInterface.Pairs", pairs, 0x0, 0x0, false, 0xbd348d2e39d1bcda)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.MultiInterface.NumberOfConfiguredInterfaces", number_of_configured_interfaces, 0x0, 0x0, false, 0xf715910ca804c0e7)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_multi_interface_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types.MultiInterface", multi_interface, 0x0, 0x0, false, 0xa3f980fe9adf180b)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_0.Types", types, 0x0, 0x0, false, 0x977b9d65fb8ff871)
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