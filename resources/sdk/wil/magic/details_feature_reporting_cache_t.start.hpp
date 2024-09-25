#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wil::details_reported_state_t), "wil_details_FeatureReportingCache.reported", reported, 0x0, 0x20, true, 0xd9297f53d1770494)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wil::details_recorded_state_t), "wil_details_FeatureReportingCache.recorded", recorded, 0x20, 0x20, true, 0xffa80b0e91beeb7)
#else
#define _m00
#define _m01
#endif