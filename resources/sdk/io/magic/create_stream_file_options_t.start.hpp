#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_CREATE_STREAM_FILE_OPTIONS.Size", size, 0x0, 0x10, true, 0xf471047f8ccf88aa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_CREATE_STREAM_FILE_OPTIONS.Flags", flags, 0x10, 0x10, true, 0x8e6cfd02edb8175c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IO_CREATE_STREAM_FILE_OPTIONS.TargetDeviceObject", target_device_object, 0x40, 0x40, true, 0x1f0f806b3313195a)
#else
#define _m00
#define _m01
#define _m02
#endif