#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_9.Size", size, 0x0, 0x0, false, 0x24f4e92af9276c52)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_version_information_t), "_WDF_USB_DEVICE_INFORMATION_V1_9.UsbdVersionInformation", usbd_version_information, 0x0, 0x0, false, 0x4a03b03ae0a7380a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_9.HcdPortCapabilities", hcd_port_capabilities, 0x0, 0x0, false, 0xdb458a5842926512)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_9.Traits", traits, 0x0, 0x0, false, 0x90188de8ec4734c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif