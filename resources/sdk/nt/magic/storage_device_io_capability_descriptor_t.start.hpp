#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_IO_CAPABILITY_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x713b7202ca6d2f97)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_IO_CAPABILITY_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0xa5dc74793d47db57)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_IO_CAPABILITY_DESCRIPTOR.LunMaxIoCount", lun_max_io_count, 0x40, 0x20, true, 0x3ddd9963b52da0a0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_IO_CAPABILITY_DESCRIPTOR.AdapterMaxIoCount", adapter_max_io_count, 0x60, 0x20, true, 0x7c2b941e9103a751)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif