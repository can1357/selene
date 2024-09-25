#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_5.Size", size, 0x0, 0x0, false, 0x623d379b34755b39)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_version_information_t), "_WDF_USB_DEVICE_INFORMATION_V1_5.UsbdVersionInformation", usbd_version_information, 0x0, 0x0, false, 0xf380e3a1b03a516f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_5.HcdPortCapabilities", hcd_port_capabilities, 0x0, 0x0, false, 0x2a7231c5e6fe7e51)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_5.Traits", traits, 0x0, 0x0, false, 0x57c74f667894ff6f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif