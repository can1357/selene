#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION.Size", size, 0x0, 0x20, true, 0x30d67c4b0b34f7a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_version_information_t), "_WDF_USB_DEVICE_INFORMATION.UsbdVersionInformation", usbd_version_information, 0x20, 0x40, true, 0xf0b942f3f6ad1f7a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION.HcdPortCapabilities", hcd_port_capabilities, 0x60, 0x20, true, 0xa17038e4624d2e24)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION.Traits", traits, 0x80, 0x20, true, 0xafbef50e8a5145d7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif