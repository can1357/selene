#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_VOLUME_PROPERTIES.DeviceType", device_type, 0x0, 0x20, true, 0x88365da7e5fa459c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_VOLUME_PROPERTIES.DeviceCharacteristics", device_characteristics, 0x20, 0x20, true, 0x1be2f30af05af7ce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_VOLUME_PROPERTIES.DeviceObjectFlags", device_object_flags, 0x40, 0x20, true, 0xbc61653d330a94ec)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_VOLUME_PROPERTIES.AlignmentRequirement", alignment_requirement, 0x60, 0x20, true, 0x248aea1783337a6c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_VOLUME_PROPERTIES.SectorSize", sector_size, 0x80, 0x10, true, 0x347ce56f82b4abe8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FLT_VOLUME_PROPERTIES.Flags", flags, 0x90, 0x10, true, 0xb09f37848cfd9a92)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_VOLUME_PROPERTIES.FileSystemDriverName", file_system_driver_name, 0xc0, 0x80, true, 0xd44df290e8cfc49e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_VOLUME_PROPERTIES.FileSystemDeviceName", file_system_device_name, 0x140, 0x80, true, 0xb2c832488e071d6d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FLT_VOLUME_PROPERTIES.RealDeviceName", real_device_name, 0x1c0, 0x80, true, 0x6a2b9b8cfa642387)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif