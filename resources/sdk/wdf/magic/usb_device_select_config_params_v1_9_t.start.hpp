#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Size", size, 0x0, 0x0, false, 0x8fed52bb8b0339cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_target_device_select_config_type_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Type", type, 0x0, 0x0, false, 0x1358ab34bf91b356)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_configuration_descriptor_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.Descriptor.ConfigurationDescriptor", configuration_descriptor, 0x0, 0x0, false, 0xb2215bbe10525738)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t**), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.Descriptor.InterfaceDescriptors", interface_descriptors, 0x0, 0x0, false, 0xae24439e47444209)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.Descriptor.NumInterfaceDescriptors", num_interface_descriptors, 0x0, 0x0, false, 0x132b7f9e3caa76ce)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.Descriptor", descriptor, 0x0, 0x0, false, 0xbc42bc66e6035dae)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.Urb.Urb", urb, 0x0, 0x0, false, 0xe30b275ddee3db35)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_urb_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.Urb", urb, 0x0, 0x0, false, 0x191902ac9e97c64)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.SingleInterface.NumberConfiguredPipes", number_configured_pipes, 0x0, 0x0, false, 0xf0a55787b18462f0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.SingleInterface.ConfiguredUsbInterface", configured_usb_interface, 0x0, 0x0, false, 0x199ac40533b64239)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_single_interface_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.SingleInterface", single_interface, 0x0, 0x0, false, 0xd779e9ee0e5b4532)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.MultiInterface.NumberInterfaces", number_interfaces, 0x0, 0x0, false, 0xbfc567e3cb084b69)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_setting_pair_v1_9_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.MultiInterface.Pairs", pairs, 0x0, 0x0, false, 0xd953fe7c9a1a2a09)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.MultiInterface.NumberOfConfiguredInterfaces", number_of_configured_interfaces, 0x0, 0x0, false, 0xc1c1c16616014b56)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_multi_interface_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types.MultiInterface", multi_interface, 0x0, 0x0, false, 0x74626f40ac9283d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_9.Types", types, 0x0, 0x0, false, 0x98e8c3da8c002123)
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