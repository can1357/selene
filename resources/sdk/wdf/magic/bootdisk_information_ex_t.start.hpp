#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_BOOTDISK_INFORMATION_EX.BootPartitionOffset", boot_partition_offset, 0x0, 0x40, true, 0xcb5fdd8f157a7793)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_BOOTDISK_INFORMATION_EX.SystemPartitionOffset", system_partition_offset, 0x40, 0x40, true, 0xae79b128af318090)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOTDISK_INFORMATION_EX.BootDeviceSignature", boot_device_signature, 0x80, 0x20, true, 0x144dba71d5c9f6ce)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOTDISK_INFORMATION_EX.SystemDeviceSignature", system_device_signature, 0xa0, 0x20, true, 0x678cc41f36e2ba65)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_BOOTDISK_INFORMATION_EX.BootDeviceGuid", boot_device_guid, 0xc0, 0x80, true, 0x8e4b5730571f4ff4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_BOOTDISK_INFORMATION_EX.SystemDeviceGuid", system_device_guid, 0x140, 0x80, true, 0x4f1adf2f202bb81d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_BOOTDISK_INFORMATION_EX.BootDeviceIsGpt", boot_device_is_gpt, 0x1c0, 0x8, true, 0xa3f29160ec1f971f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_BOOTDISK_INFORMATION_EX.SystemDeviceIsGpt", system_device_is_gpt, 0x1c8, 0x8, true, 0xc75555cc0431e694)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif