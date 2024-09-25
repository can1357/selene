#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_0.Size", size, 0x0, 0x0, false, 0xbc477c5f6e552adc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_version_information_t), "_WDF_USB_DEVICE_INFORMATION_V1_0.UsbdVersionInformation", usbd_version_information, 0x0, 0x0, false, 0x6662512d0504302b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_0.HcdPortCapabilities", hcd_port_capabilities, 0x0, 0x0, false, 0x72d45067565a7e21)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_0.Traits", traits, 0x0, 0x0, false, 0xfb3f76da8083980)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif