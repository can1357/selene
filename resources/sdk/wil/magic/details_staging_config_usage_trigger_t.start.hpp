#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_StagingConfigUsageTrigger.featureId", feature_id, 0x0, 0x20, true, 0xdae3864166e532ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wil::details_staging_config_wnf_state_name_t), "wil_details_StagingConfigUsageTrigger.trigger", trigger, 0x20, 0x40, true, 0x42a5a8dbf88685e7)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "wil_details_StagingConfigUsageTrigger.serviceReportingKind", service_reporting_kind, 0x60, 0x10, true, 0x499c782d3fa042cd, 16, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_StagingConfigUsageTrigger.isVariantConfig", is_variant_config, 0x70, 0x1, true, 0x774a9f4af08cd5f3, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif