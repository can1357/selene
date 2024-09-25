#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SECURITY_MODEL_INFORMATION.SecurityModelFlags.AllowDeviceOwnerProtectionDowngrade", allow_device_owner_protection_downgrade, 0x1, 0x1, true, 0xf42725691019956e, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SECURITY_MODEL_INFORMATION.SecurityModelFlags.SModeAdminlessEnabled", s_mode_adminless_enabled, 0x0, 0x1, true, 0x885b2fbb8e677eec, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_SECURITY_MODEL_INFORMATION.SecurityModelFlags.ReservedFlag", reserved_flag, 0x0, 0x0, false, 0x6abd835264acea1d, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_security_model_flags_t), "_SYSTEM_SECURITY_MODEL_INFORMATION.SecurityModelFlags", security_model_flags, 0x0, 0x20, true, 0x219b4af87f447d03)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif