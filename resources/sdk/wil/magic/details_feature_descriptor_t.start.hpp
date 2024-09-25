#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union wil::details_feature_state_cache_t*), "wil_details_FeatureDescriptor.featureStateCache", feature_state_cache, 0x0, 0x40, true, 0x1356a62f3fc2d83a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_FeatureDescriptor.featureId", feature_id, 0x40, 0x20, true, 0xcd6b03e0ab711158)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "wil_details_FeatureDescriptor.changeTime", change_time, 0x60, 0x8, true, 0x6767d9b5b2a52033)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "wil_details_FeatureDescriptor.isAlwaysDisabled", is_always_disabled, 0x68, 0x8, true, 0xecf6e96ba457ffa6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "wil_details_FeatureDescriptor.isAlwaysEnabled", is_always_enabled, 0x70, 0x8, true, 0xecf3596d3461e580)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "wil_details_FeatureDescriptor.isEnabledByDefault", is_enabled_by_default, 0x78, 0x8, true, 0xb40d25834a3cce9f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct wil::details_feature_descriptor_t const**), "wil_details_FeatureDescriptor.requiresFeatures", requires_features, 0x80, 0x40, true, 0xf9459bfecf7d51d2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wil::details_feature_reporting_cache_t*), "wil_details_FeatureDescriptor.featureReportingCache", feature_reporting_cache, 0x0, 0x0, false, 0xea4bd225479dba2a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "wil_details_FeatureDescriptor.variant", variant, 0x0, 0x0, false, 0x8d35c9d84052a941)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wil::feature_variant_payload_kind_t), "wil_details_FeatureDescriptor.payloadKind", payload_kind, 0x0, 0x0, false, 0x35a5501a0586172e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_FeatureDescriptor.payload", payload, 0x0, 0x0, false, 0x3ed7790bf7999c77)
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
#endif