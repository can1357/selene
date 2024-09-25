#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_EXT_SET_PARAMETERS.Version", version, 0x0, 0x20, true, 0x9dacc27bda5bba9d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_STOR_EXT_SET_PARAMETERS.NoWakeTolerance", no_wake_tolerance, 0x40, 0x40, true, 0x1bd4062b0096b6dd)
#else
#define _m00
#define _m01
#endif