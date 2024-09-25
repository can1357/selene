#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_ZONE_COUNTERS.Temperature", temperature, 0x0, 0x20, true, 0x28c933356d6928b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_ZONE_COUNTERS.ThrottleLimit", throttle_limit, 0x20, 0x20, true, 0x5837445c3fcb0e13)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_ZONE_COUNTERS.ThrottleReasons", throttle_reasons, 0x40, 0x20, true, 0xb61bc8a43286b7ab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_ZONE_COUNTERS.TemperatureHighPrecision", temperature_high_precision, 0x60, 0x20, true, 0x48c9c83f1558fe65)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif