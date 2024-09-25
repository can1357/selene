#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION_V1.BootIdentifier", boot_identifier, 0x0, 0x80, true, 0x4b3ec4175654061d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::firmware_type_t), "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION_V1.FirmwareType", firmware_type, 0x80, 0x20, true, 0x7b861978200f3fd9)
#else
#define _m00
#define _m01
#endif