#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_13.Size", size, 0x0, 0x0, false, 0x30e0720dc06105d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbd_version_information_t), "_WDF_USB_DEVICE_INFORMATION_V1_13.UsbdVersionInformation", usbd_version_information, 0x0, 0x0, false, 0x208e914869619598)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_13.HcdPortCapabilities", hcd_port_capabilities, 0x0, 0x0, false, 0x515b435c98f59556)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_INFORMATION_V1_13.Traits", traits, 0x0, 0x0, false, 0x274b9a14a0e3094e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif