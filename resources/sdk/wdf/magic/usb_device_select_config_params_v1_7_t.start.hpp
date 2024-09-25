#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Size", size, 0x0, 0x0, false, 0x51d4c18502a38eeb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_target_device_select_config_type_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Type", type, 0x0, 0x0, false, 0x65cbff0a47e45da)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_configuration_descriptor_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.Descriptor.ConfigurationDescriptor", configuration_descriptor, 0x0, 0x0, false, 0x81d7e394d76343fb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t**), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.Descriptor.InterfaceDescriptors", interface_descriptors, 0x0, 0x0, false, 0x74ffb4893634c59a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.Descriptor.NumInterfaceDescriptors", num_interface_descriptors, 0x0, 0x0, false, 0x1f31f59d68b68d43)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_descriptor_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.Descriptor", descriptor, 0x0, 0x0, false, 0x50176f9bab6011ff)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.Urb.Urb", urb, 0x0, 0x0, false, 0x24b8d6c2acff366d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_urb_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.Urb", urb, 0x0, 0x0, false, 0x1fa5e92484378165)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.SingleInterface.NumberConfiguredPipes", number_configured_pipes, 0x0, 0x0, false, 0xe254736afd8fb526)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.SingleInterface.ConfiguredUsbInterface", configured_usb_interface, 0x0, 0x0, false, 0x212b7fc54534258f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_single_interface_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.SingleInterface", single_interface, 0x0, 0x0, false, 0xe242f956ddea15e7)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.MultiInterface.NumberInterfaces", number_interfaces, 0x0, 0x0, false, 0x196aacb5397119b6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_setting_pair_v1_7_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.MultiInterface.Pairs", pairs, 0x0, 0x0, false, 0x832a06ba690e41dc)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.MultiInterface.NumberOfConfiguredInterfaces", number_of_configured_interfaces, 0x0, 0x0, false, 0xfe8daf23e785b470)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_multi_interface_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types.MultiInterface", multi_interface, 0x0, 0x0, false, 0x600307b7067136e2)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS_V1_7.Types", types, 0x0, 0x0, false, 0xd89a1e6fe884bfb4)
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