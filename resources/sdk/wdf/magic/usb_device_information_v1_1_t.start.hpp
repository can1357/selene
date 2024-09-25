#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_1.Size", size, 0x0, 0x0, false, 0xb1a15c898ddecf1b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_version_information_t), "_WDF_USB_DEVICE_INFORMATION_V1_1.UsbdVersionInformation", usbd_version_information, 0x0, 0x0, false, 0xd2d688e6f5d238a1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_1.HcdPortCapabilities", hcd_port_capabilities, 0x0, 0x0, false, 0xa343fc5e08c412ac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_1.Traits", traits, 0x0, 0x0, false, 0x6c9558a1c1f2b286)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif