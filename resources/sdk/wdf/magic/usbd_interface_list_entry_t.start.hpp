#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_interface_descriptor_t*), "_USBD_INTERFACE_LIST_ENTRY.InterfaceDescriptor", interface_descriptor, 0x0, 0x40, true, 0x918598caee1307e5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_interface_information_t*), "_USBD_INTERFACE_LIST_ENTRY.Interface", interface, 0x40, 0x40, true, 0x283e04e51b922733)
#else
#define _m00
#define _m01
#endif