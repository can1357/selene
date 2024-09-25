#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_SESSION_TIMEOUTS.InputTimeout", input_timeout, 0x0, 0x20, true, 0x3dcdac3700d48329)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_POWER_SESSION_TIMEOUTS.DisplayTimeout", display_timeout, 0x20, 0x20, true, 0x83382811630384e7)
#else
#define _m00
#define _m01
#endif