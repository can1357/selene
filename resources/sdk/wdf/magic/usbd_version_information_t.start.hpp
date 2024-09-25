#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_VERSION_INFORMATION.USBDI_Version", usbdi_version, 0x0, 0x20, true, 0x85f82b30ffe194b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_VERSION_INFORMATION.Supported_USB_Version", supported_usb_version, 0x20, 0x20, true, 0x3ee5af62ed06912)
#else
#define _m00
#define _m01
#endif