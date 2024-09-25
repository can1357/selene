#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TARGET_DEVICE_REMOVAL_NOTIFICATION.Version", version, 0x0, 0x10, true, 0x6fa3abd712e09dc1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TARGET_DEVICE_REMOVAL_NOTIFICATION.Size", size, 0x10, 0x10, true, 0xeb16f39fc1c2e07a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TARGET_DEVICE_REMOVAL_NOTIFICATION.Event", event, 0x20, 0x80, true, 0xc53b0526a5e692fa)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_TARGET_DEVICE_REMOVAL_NOTIFICATION.FileObject", file_object, 0xc0, 0x40, true, 0x2d5f444ff40b5457)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif