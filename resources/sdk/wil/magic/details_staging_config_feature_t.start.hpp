#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_StagingConfigFeature.featureId", feature_id, 0x0, 0x20, true, 0x437496c2c4412d94)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_StagingConfigFeature.changedInSession", changed_in_session, 0x20, 0x1, true, 0x4a7006fe7ab65f12, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_StagingConfigFeature.isVariantConfig", is_variant_config, 0x21, 0x1, true, 0xdd13407128836950, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "wil_details_StagingConfigFeature.serviceState", service_state, 0x28, 0x2, true, 0x9c6b392ecf7e941e, 2, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "wil_details_StagingConfigFeature.userState", user_state, 0x2a, 0x2, true, 0x832aabe9ceec1609, 2, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "wil_details_StagingConfigFeature.testState", test_state, 0x2c, 0x2, true, 0xceea096ba66d069f, 2, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "wil_details_StagingConfigFeature.variant", variant, 0x38, 0x6, true, 0xf9de076fa8a285d, 6, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "wil_details_StagingConfigFeature.payloadKind", payload_kind, 0x3e, 0x2, true, 0xbec188aed78759a1, 2, uint32_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_StagingConfigFeature.payload", payload, 0x40, 0x20, true, 0x8e836e97f8483b06)
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
#endif