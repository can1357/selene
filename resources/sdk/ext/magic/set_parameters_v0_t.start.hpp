#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXT_SET_PARAMETERS_V0.Version", version, 0x0, 0x20, true, 0x7ea8df34139dc85e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_EXT_SET_PARAMETERS_V0.NoWakeTolerance", no_wake_tolerance, 0x40, 0x40, true, 0x757da56c4e781cca)
#else
#define _m00
#define _m01
#endif