#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "INDIRECT_DISPLAY_INFO.DisplayAdapterLuid", display_adapter_luid, 0x0, 0x40, true, 0x67544810b62ce5c8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "INDIRECT_DISPLAY_INFO.Flags", flags, 0x40, 0x20, true, 0x7f44257561c83853)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "INDIRECT_DISPLAY_INFO.NumMonitors", num_monitors, 0x60, 0x20, true, 0xfc123ed2a0028c72)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "INDIRECT_DISPLAY_INFO.DisplayAdapterTargetBase", display_adapter_target_base, 0x80, 0x20, true, 0xda5274cdf398cfb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif