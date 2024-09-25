#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::dynamic_time_zone_information_t), "_EX_TIMEZONE_STATE.TimeZoneInformation", time_zone_information, 0x0, 0x0, false, 0x165ce37de1e864ef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EX_TIMEZONE_STATE.CurrentTimeZoneId", current_time_zone_id, 0x0, 0x0, false, 0x8bbf7e9b31e073a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EX_TIMEZONE_STATE.LastTimeZoneBias", last_time_zone_bias, 0x0, 0x0, false, 0xb9506b83318fff78)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EX_TIMEZONE_STATE.TimeZoneBias", time_zone_bias, 0x0, 0x0, false, 0x1c3f690531b4f97a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::timezone_change_event_t), "_EX_TIMEZONE_STATE.TimeZone", time_zone, 0x0, 0x0, false, 0x9aeb12c0e38145a1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::timezone_change_event_t), "_EX_TIMEZONE_STATE.Century", century, 0x0, 0x0, false, 0x5f8fcb1a63a8d977)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::timezone_change_event_t), "_EX_TIMEZONE_STATE.NextYear", next_year, 0x0, 0x0, false, 0xf6cd1aee6bbd0e0d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EX_TIMEZONE_STATE.OkToTimeZoneRefresh", ok_to_time_zone_refresh, 0x0, 0x0, false, 0x6a71f5f3f16a9b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EX_TIMEZONE_STATE.NextCenturyTimeInUTC", next_century_time_in_utc, 0x0, 0x0, false, 0xaa4ed5c330cbebb6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::time_fields_t), "_EX_TIMEZONE_STATE.NextCenturyTimeFieldsInLocalTime", next_century_time_fields_in_local_time, 0x0, 0x0, false, 0xd708f6c37aa1cdb9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EX_TIMEZONE_STATE.NextYearTimeInUTC", next_year_time_in_utc, 0x0, 0x0, false, 0xe0bfb20abeff56e2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::time_fields_t), "_EX_TIMEZONE_STATE.NextYearTimeFieldsInLocalTime", next_year_time_fields_in_local_time, 0x0, 0x0, false, 0xa756dc7ee994d58f)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_EX_TIMEZONE_STATE.LastDynamicTimeZoneYear", last_dynamic_time_zone_year, 0x0, 0x0, false, 0xb0c568151f00eebf)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_EX_TIMEZONE_STATE.NextSystemCutoverInUTC", next_system_cutover_in_utc, 0x0, 0x0, false, 0x547be9c78c58925d)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EX_TIMEZONE_STATE.RefreshFailures", refresh_failures, 0x0, 0x0, false, 0xe0930c0d7eaac1ab)
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