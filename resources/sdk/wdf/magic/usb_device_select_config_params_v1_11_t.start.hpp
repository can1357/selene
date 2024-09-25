#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Size", size, 0x0, 0x0, false, 0xff064f3ed90717ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_target_device_select_config_type_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Type", type, 0x0, 0x0, false, 0x2374ef41f4503023)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_configuration_descriptor_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.Descriptor.ConfigurationDescriptor", configuration_descriptor, 0x0, 0x0, false, 0xaba8994cb224f472)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t**), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.Descriptor.InterfaceDescriptors", interface_descriptors, 0x0, 0x0, false, 0xd211991796ff83f8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.Descriptor.NumInterfaceDescriptors", num_interface_descriptors, 0x0, 0x0, false, 0x4c36459dd82ed12e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.Descriptor", descriptor, 0x0, 0x0, false, 0x4c9b390e18d4028f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.Urb.Urb", urb, 0x0, 0x0, false, 0x7cfc96b2286002d7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_urb_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.Urb", urb, 0x0, 0x0, false, 0xf910c1e682eb6528)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.SingleInterface.NumberConfiguredPipes", number_configured_pipes, 0x0, 0x0, false, 0x4f17d46bcf8651af)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.SingleInterface.ConfiguredUsbInterface", configured_usb_interface, 0x0, 0x0, false, 0x4ba108833ececb69)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_single_interface_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.SingleInterface", single_interface, 0x0, 0x0, false, 0xd807810fea1f83cc)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.MultiInterface.NumberInterfaces", number_interfaces, 0x0, 0x0, false, 0x2cbac7f20a8be19)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_setting_pair_v1_11_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.MultiInterface.Pairs", pairs, 0x0, 0x0, false, 0xb8a0e87639542270)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.MultiInterface.NumberOfConfiguredInterfaces", number_of_configured_interfaces, 0x0, 0x0, false, 0x2d9c8f3dc427b7f2)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_multi_interface_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types.MultiInterface", multi_interface, 0x0, 0x0, false, 0x8ea751d13d47d6e1)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_11.Types", types, 0x0, 0x0, false, 0xc69648bde131c889)
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