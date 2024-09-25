#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fltmgr::flt_type_t), "_VOLUME_DEVICE_EXTENSION.Type", type, 0x0, 0x20, true, 0xfdf7525d2e58ac6e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_VOLUME_DEVICE_EXTENSION.AttachedToDeviceObject", attached_to_device_object, 0x40, 0x40, true, 0x1d6c7d3d1e8ab311)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_frame_t*), "_VOLUME_DEVICE_EXTENSION.Frame", frame, 0x80, 0x40, true, 0xa9de76e1073d07c8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_VOLUME_DEVICE_EXTENSION.VolumeAccessLock", volume_access_lock, 0xc0, 0xc0, true, 0x5666c3cf2a97db50)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_volume_t*), "_VOLUME_DEVICE_EXTENSION.Volume", volume, 0x280, 0x40, true, 0x7c820c74aafde31f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif