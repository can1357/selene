#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_SECUREBOOT_INFORMATION.SecureBootEnabled", secure_boot_enabled, 0x0, 0x8, true, 0xb4736b34defe3d7b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_SECUREBOOT_INFORMATION.SecureBootCapable", secure_boot_capable, 0x8, 0x8, true, 0x1f58447a7c8d4204)
#else
#define _m00
#define _m01
#endif