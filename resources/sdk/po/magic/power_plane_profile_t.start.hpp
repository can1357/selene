#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_POWER_PLANE_PROFILE.ExclusivePowerMw", exclusive_power_mw, 0x0, 0x20, true, 0x3c263e5f564a7fad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PO_POWER_PLANE_PROFILE.PeakPowerMw", peak_power_mw, 0x20, 0x20, true, 0x27fcdd22111f7871)
#else
#define _m00
#define _m01
#endif