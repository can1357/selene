#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_11.Size", size, 0x0, 0x0, false, 0x1ed84a9b7d878f78)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_version_information_t), "_WDF_USB_DEVICE_INFORMATION_V1_11.UsbdVersionInformation", usbd_version_information, 0x0, 0x0, false, 0xb25602cdda638d6d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_11.HcdPortCapabilities", hcd_port_capabilities, 0x0, 0x0, false, 0xde6a1de2b8479712)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_11.Traits", traits, 0x0, 0x0, false, 0xf499a232603fc655)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif