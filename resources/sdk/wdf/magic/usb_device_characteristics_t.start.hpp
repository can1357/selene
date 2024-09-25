#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CHARACTERISTICS.Version", version, 0x0, 0x20, true, 0xd4173536ad5b097f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CHARACTERISTICS.UsbDeviceCharacteristicsFlags", usb_device_characteristics_flags, 0x60, 0x20, true, 0x18e5d9a34d2c7c51)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CHARACTERISTICS.MaximumSendPathDelayInMilliSeconds", maximum_send_path_delay_in_milli_seconds, 0x80, 0x20, true, 0xfe1a421e1dc32de9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CHARACTERISTICS.MaximumCompletionPathDelayInMilliSeconds", maximum_completion_path_delay_in_milli_seconds, 0xa0, 0x20, true, 0xcf2d248bf627ce9d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif