#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_BOOTDISK_INFORMATION.BootPartitionOffset", boot_partition_offset, 0x0, 0x40, true, 0x688a7dfca09e767d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_BOOTDISK_INFORMATION.SystemPartitionOffset", system_partition_offset, 0x40, 0x40, true, 0xce9d65d52345c231)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOTDISK_INFORMATION.BootDeviceSignature", boot_device_signature, 0x80, 0x20, true, 0x4d7ddf2968547cca)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOTDISK_INFORMATION.SystemDeviceSignature", system_device_signature, 0xa0, 0x20, true, 0x522ca640bb801c40)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif