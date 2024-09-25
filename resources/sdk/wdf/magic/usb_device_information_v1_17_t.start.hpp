#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_17.Size", size, 0x0, 0x0, false, 0x9b351b1dcc358526)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_version_information_t), "_WDF_USB_DEVICE_INFORMATION_V1_17.UsbdVersionInformation", usbd_version_information, 0x0, 0x0, false, 0x55c5a264f9959d61)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_17.HcdPortCapabilities", hcd_port_capabilities, 0x0, 0x0, false, 0x83246f1f2ad0acb7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_17.Traits", traits, 0x0, 0x0, false, 0xc4739147b4ab7971)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif