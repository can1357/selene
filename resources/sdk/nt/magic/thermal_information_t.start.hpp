#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION.ThermalStamp", thermal_stamp, 0x0, 0x20, true, 0x5bd06a291ab7a668)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION.ThermalConstant1", thermal_constant1, 0x20, 0x20, true, 0xa2ce5b102ad3c36c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION.ThermalConstant2", thermal_constant2, 0x40, 0x20, true, 0xa31bd8a5bb1f40d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_THERMAL_INFORMATION.Processors", processors, 0x80, 0x40, true, 0xdaa40580041f74b9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION.SamplingPeriod", sampling_period, 0xc0, 0x20, true, 0x17833a82b8dfacd3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION.CurrentTemperature", current_temperature, 0xe0, 0x20, true, 0x170efda6c7508d7e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION.PassiveTripPoint", passive_trip_point, 0x100, 0x20, true, 0x39fe722808392974)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION.CriticalTripPoint", critical_trip_point, 0x120, 0x20, true, 0xfaf633bc876b0ac)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_THERMAL_INFORMATION.ActiveTripPointCount", active_trip_point_count, 0x140, 0x8, true, 0x15d622a57a64e758)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 10>), "_THERMAL_INFORMATION.ActiveTripPoint", active_trip_point, 0x160, 0x40, true, 0x8ee2f3147bc84919)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif