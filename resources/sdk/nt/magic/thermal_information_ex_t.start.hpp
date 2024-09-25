#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION_EX.ThermalStamp", thermal_stamp, 0x0, 0x20, true, 0x66979f210979aa55)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION_EX.ThermalConstant1", thermal_constant1, 0x20, 0x20, true, 0x516b0aa2eb584d43)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION_EX.ThermalConstant2", thermal_constant2, 0x40, 0x20, true, 0xb186f769ef39e86e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION_EX.SamplingPeriod", sampling_period, 0x60, 0x20, true, 0xd4a9dd45bd1fd001)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION_EX.CurrentTemperature", current_temperature, 0x80, 0x20, true, 0xd3d78c78a206fbb6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION_EX.PassiveTripPoint", passive_trip_point, 0xa0, 0x20, true, 0xe80af12c4363219f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION_EX.ThermalStandbyTripPoint", thermal_standby_trip_point, 0xc0, 0x20, true, 0x790a98e79864160d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION_EX.CriticalTripPoint", critical_trip_point, 0xe0, 0x20, true, 0x370da40cf1912351)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_THERMAL_INFORMATION_EX.ActiveTripPointCount", active_trip_point_count, 0x100, 0x8, true, 0xb1744b0f4b1db3b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 10>), "_THERMAL_INFORMATION_EX.ActiveTripPoint", active_trip_point, 0x120, 0x40, true, 0x660d5663a5949f00)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION_EX.S4TransitionTripPoint", s4_transition_trip_point, 0x260, 0x20, true, 0x8079c1326733d906)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION_EX.MinimumThrottle", minimum_throttle, 0x280, 0x20, true, 0xe85f49df0446a765)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION_EX.OverThrottleThreshold", over_throttle_threshold, 0x2a0, 0x20, true, 0xf3cc86048991586d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_THERMAL_INFORMATION_EX.PassiveCoolingDevicesPresent", passive_cooling_devices_present, 0x108, 0x8, true, 0x2cc8ff9858fe9ed1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_INFORMATION_EX.PollingPeriod", polling_period, 0x2c0, 0x20, true, 0xb109a81e12bf24ba)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif