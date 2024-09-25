#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_ISOLATED_USER_MODE_INFORMATION.SecureKernelRunning", secure_kernel_running, 0x0, 0x1, true, 0xc31116a0271640fe, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_ISOLATED_USER_MODE_INFORMATION.HvciEnabled", hvci_enabled, 0x1, 0x1, true, 0x44d15846fff40d8d, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_ISOLATED_USER_MODE_INFORMATION.HvciStrictMode", hvci_strict_mode, 0x2, 0x1, true, 0xae142523abc05917, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_ISOLATED_USER_MODE_INFORMATION.DebugEnabled", debug_enabled, 0x3, 0x1, true, 0xb8a27df325f5dc20, 1, uint8_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_ISOLATED_USER_MODE_INFORMATION.FirmwarePageProtection", firmware_page_protection, 0x4, 0x1, true, 0x3a9773aba77b1610, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SYSTEM_ISOLATED_USER_MODE_INFORMATION.SpareFlags", spare_flags, 0x6, 0x2, true, 0x9e2fa497fcd1e4cf, 0, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_ISOLATED_USER_MODE_INFORMATION.TrustletRunning", trustlet_running, 0x8, 0x1, true, 0xe6a8a8b58d5814a6, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_SYSTEM_ISOLATED_USER_MODE_INFORMATION.SpareFlags2", spare_flags2, 0xa, 0x6, true, 0xe1cc36894c76ea0c, 0, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_ISOLATED_USER_MODE_INFORMATION.EncryptionKeyAvailable", encryption_key_available, 0x5, 0x1, true, 0x22ad30edde35f01, 1, uint8_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_ISOLATED_USER_MODE_INFORMATION.HvciDisableAllowed", hvci_disable_allowed, 0x9, 0x1, true, 0x318baeb62adb67ce, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_ISOLATED_USER_MODE_INFORMATION.HardwareEnforcedVbs", hardware_enforced_vbs, 0x0, 0x0, false, 0x362a0451032f1e80, 1, uint8_t)
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
#define _m09
#define _m10
#endif