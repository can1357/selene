#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX.EnableIntegrity", enable_integrity, 0x0, 0x8, true, 0xc07873e94c7dfc34)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX.KeepIntegrityStateUnchanged", keep_integrity_state_unchanged, 0x8, 0x8, true, 0x45e4e952912d52f0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX.Flags", flags, 0x20, 0x20, true, 0x3c41223ddaeb9050)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX.Version", version, 0x40, 0x8, true, 0xec7220409a726db7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif