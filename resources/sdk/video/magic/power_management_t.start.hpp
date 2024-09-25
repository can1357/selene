#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POWER_MANAGEMENT.Length", length, 0x0, 0x20, true, 0xe62d86822763ac52)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POWER_MANAGEMENT.DPMSVersion", dpms_version, 0x20, 0x20, true, 0x5a22570e89c8d8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_POWER_MANAGEMENT.PowerState", power_state, 0x40, 0x20, true, 0xb89e5bf9979505ea)
#else
#define _m00
#define _m01
#define _m02
#endif