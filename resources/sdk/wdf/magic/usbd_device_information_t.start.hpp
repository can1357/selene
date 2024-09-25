#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_DEVICE_INFORMATION.OffsetNext", offset_next, 0x0, 0x20, true, 0xda5d138832a75a26)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USBD_DEVICE_INFORMATION.UsbdDeviceHandle", usbd_device_handle, 0x40, 0x40, true, 0xc5ce4d07ed9d405c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usb_device_descriptor_t), "_USBD_DEVICE_INFORMATION.DeviceDescriptor", device_descriptor, 0x80, 0x90, true, 0xf027a6dc0f8fb479)
#else
#define _m00
#define _m01
#define _m02
#endif