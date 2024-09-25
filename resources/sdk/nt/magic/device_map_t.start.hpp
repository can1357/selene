#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_directory_t*), "_DEVICE_MAP.DosDevicesDirectory", dos_devices_directory, 0x0, 0x40, true, 0xc92db7bed52131cb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_directory_t*), "_DEVICE_MAP.GlobalDosDevicesDirectory", global_dos_devices_directory, 0x40, 0x40, true, 0xab23571ae115c2ea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DEVICE_MAP.DosDevicesDirectoryHandle", dos_devices_directory_handle, 0x80, 0x40, true, 0xa3bcae85d2090219)
#define _m03 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int64_t), "_DEVICE_MAP.ReferenceCount", reference_count, 0xc0, 0x20, true, 0x695cb60114f3d1f7, 0, uint32_t,uint64_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_MAP.DriveMap", drive_map, 0xe0, 0x20, true, 0xf1d7d98ce59d3ac3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_DEVICE_MAP.DriveType", drive_type, 0x100, 0x0, true, 0xfd4c0932efa87f97)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_DEVICE_MAP.ServerSilo", server_silo, 0x200, 0x40, true, 0x71459a4c287397c0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_map_t*), "_DEVICE_MAP.GlobalDeviceMap", global_device_map, 0x0, 0x0, false, 0xa2769a99766037c1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ex::fast_ref_t, 26>), "_DEVICE_MAP.DriveObject", drive_object, 0x0, 0x0, false, 0x35c79d229304729)
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