#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_HID_DEVICE_EXTENSION.PhysicalDeviceObject", physical_device_object, 0x0, 0x40, true, 0x687851cb9f8b9faa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_HID_DEVICE_EXTENSION.NextDeviceObject", next_device_object, 0x40, 0x40, true, 0xcbe506c2c8bbbc6b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HID_DEVICE_EXTENSION.MiniDeviceExtension", mini_device_extension, 0x80, 0x40, true, 0x3642e15a0152b2ec)
#else
#define _m00
#define _m01
#define _m02
#endif