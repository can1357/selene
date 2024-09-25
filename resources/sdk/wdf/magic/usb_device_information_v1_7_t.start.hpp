#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_7.Size", size, 0x0, 0x0, false, 0x259bb4608813eb00)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_version_information_t), "_WDF_USB_DEVICE_INFORMATION_V1_7.UsbdVersionInformation", usbd_version_information, 0x0, 0x0, false, 0xeb7850de6cf600d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_7.HcdPortCapabilities", hcd_port_capabilities, 0x0, 0x0, false, 0xceb49b3866b78868)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_7.Traits", traits, 0x0, 0x0, false, 0x75c7e2841ec56a88)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif