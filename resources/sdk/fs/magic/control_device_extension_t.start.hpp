#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fltmgr::flt_type_t), "_FS_CONTROL_DEVICE_EXTENSION.Type", type, 0x0, 0x20, true, 0x20fa65e1654b070d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_FS_CONTROL_DEVICE_EXTENSION.AttachedToDeviceObject", attached_to_device_object, 0x40, 0x40, true, 0x38142e7bcc2c9a7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_frame_t*), "_FS_CONTROL_DEVICE_EXTENSION.Frame", frame, 0x80, 0x40, true, 0x42ae77335cbe7f0e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FS_CONTROL_DEVICE_EXTENSION.Link", link, 0xc0, 0x80, true, 0x6e37c4630e14ce1b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_FS_CONTROL_DEVICE_EXTENSION.DeviceObject", device_object, 0x140, 0x40, true, 0xeef9c7c7a9eea86a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FS_CONTROL_DEVICE_EXTENSION.ControlDeviceName", control_device_name, 0x180, 0x80, true, 0x45a493a1431d7bc8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FS_CONTROL_DEVICE_EXTENSION.DriverObjectName", driver_object_name, 0x200, 0x80, true, 0x6fe2769218b82caf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif