#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_SAN_SETTINGS.Version", version, 0x0, 0x20, true, 0x105e79884ecc32b1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::disk_san_policy_t), "_DISK_SAN_SETTINGS.SanPolicy", san_policy, 0x20, 0x20, true, 0x91ac833fcc2ac3b)
#else
#define _m00
#define _m01
#endif