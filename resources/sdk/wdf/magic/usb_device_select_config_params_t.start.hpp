#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Size", size, 0x0, 0x20, true, 0x4a6ecb6ec7027622)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::usb_target_device_select_config_type_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Type", type, 0x20, 0x20, true, 0x55d8fcc657560769)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_configuration_descriptor_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.Descriptor.ConfigurationDescriptor", configuration_descriptor, 0x0, 0x40, true, 0xaca5d079cae60669)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t**), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.Descriptor.InterfaceDescriptors", interface_descriptors, 0x40, 0x40, true, 0x23669c3aa4ec8069)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.Descriptor.NumInterfaceDescriptors", num_interface_descriptors, 0x80, 0x20, true, 0x5d68f9bfade0bcad)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_descriptor_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.Descriptor", descriptor, 0x0, 0xc0, true, 0x720342c4d7cdc65a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.Urb.Urb", urb, 0x0, 0x40, true, 0x2efe083857dc377b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_urb_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.Urb", urb, 0x0, 0x40, true, 0x8d4903bd92184296)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.SingleInterface.NumberConfiguredPipes", number_configured_pipes, 0x0, 0x8, true, 0x56517bb81e954e4a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfusbinterface_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.SingleInterface.ConfiguredUsbInterface", configured_usb_interface, 0x40, 0x40, true, 0x368f5c98693f8c2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_single_interface_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.SingleInterface", single_interface, 0x0, 0x80, true, 0xe0fefb2bac613d71)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.MultiInterface.NumberInterfaces", number_interfaces, 0x0, 0x8, true, 0x8d51de405fe8052)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_setting_pair_t*), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.MultiInterface.Pairs", pairs, 0x40, 0x40, true, 0x7dcd0c73b3f192e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.MultiInterface.NumberOfConfiguredInterfaces", number_of_configured_interfaces, 0x80, 0x8, true, 0xb82d3a2be9abb63e)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_multi_interface_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types.MultiInterface", multi_interface, 0x0, 0xc0, true, 0x8e2f2d76e673c584)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_types_t), "_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS.Types", types, 0x40, 0xc0, true, 0x94240d48ef9f8fef)
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