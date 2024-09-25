#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "wil_details_StagingConfigHeader.version", version, 0x0, 0x8, true, 0xf49ef0b236153e2c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "wil_details_StagingConfigHeader.versionMinor", version_minor, 0x8, 0x8, true, 0xb574e4714484c18f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "wil_details_StagingConfigHeader.headerSizeBytes", header_size_bytes, 0x10, 0x10, true, 0x497a0c78ef186e24)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "wil_details_StagingConfigHeader.featureCount", feature_count, 0x20, 0x10, true, 0x5a9931b60835877b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "wil_details_StagingConfigHeader.featureUsageTriggerCount", feature_usage_trigger_count, 0x30, 0x10, true, 0x988b2a4dfba23899)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wil::details_staging_config_header_properties_t), "wil_details_StagingConfigHeader.sessionProperties", session_properties, 0x40, 0x20, true, 0xfb4f87c411ec1ef0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wil::details_staging_config_header_properties_t), "wil_details_StagingConfigHeader.properties", properties, 0x60, 0x20, true, 0x1bd91c7b68418304)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif