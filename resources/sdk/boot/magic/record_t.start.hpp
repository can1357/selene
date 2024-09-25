#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_BOOT_RECORD.BootFlags", boot_flags, 0x0, 0x40, true, 0x7b73a3246397c4e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BOOT_RECORD.FirmwareType", firmware_type, 0x40, 0x20, true, 0xafcff24badafa11d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_BOOT_RECORD.SecureBootEnabled", secure_boot_enabled, 0x60, 0x8, true, 0x7152415c74e5efd4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_BOOT_RECORD.SecureBootCapable", secure_boot_capable, 0x68, 0x8, true, 0x8a5f2848ce363f7a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif