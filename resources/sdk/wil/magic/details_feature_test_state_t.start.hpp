#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wil::details_feature_test_state_kind_t), "wil_details_FeatureTestState.kind", kind, 0x0, 0x20, true, 0xc10f6014e577f13)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_FeatureTestState.featureId", feature_id, 0x20, 0x20, true, 0x801e5aebd1688550)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wil::feature_enabled_state_t), "wil_details_FeatureTestState.state", state, 0x40, 0x20, true, 0xb347b55129668769)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "wil_details_FeatureTestState.variant", variant, 0x60, 0x8, true, 0xb34fa317995b5c04)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_FeatureTestState.payload", payload, 0x80, 0x20, true, 0x9510b14b58c350bb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wil::feature_variant_payload_kind_t), "wil_details_FeatureTestState.payloadKind", payload_kind, 0xa0, 0x20, true, 0xf2731f8ed5758db8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wil::details_feature_test_state_t*), "wil_details_FeatureTestState.next", next, 0xc0, 0x40, true, 0x1c858104b13e795d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif