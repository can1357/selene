#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_15.Size", size, 0x0, 0x0, false, 0x3d7fdda1c61e257b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_version_information_t), "_WDF_USB_DEVICE_INFORMATION_V1_15.UsbdVersionInformation", usbd_version_information, 0x0, 0x0, false, 0xca92418293755765)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_15.HcdPortCapabilities", hcd_port_capabilities, 0x0, 0x0, false, 0x8a2c15a7b7ef900a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_15.Traits", traits, 0x0, 0x0, false, 0x39528ccb1d5c1033)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif