#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wil::feature_enabled_state_t), "wil_FeatureState.enabledState", enabled_state, 0x0, 0x20, true, 0x77cbc557b7054f3d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "wil_FeatureState.variant", variant, 0x20, 0x8, true, 0x21d24a57fb7bd7fd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wil::feature_variant_payload_kind_t), "wil_FeatureState.payloadKind", payload_kind, 0x40, 0x20, true, 0xf42ad35b006db5d2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_FeatureState.payload", payload, 0x60, 0x20, true, 0x3f344bf71986a454)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "wil_FeatureState.hasNotification", has_notification, 0x80, 0x20, true, 0x5b748e540dd95f34)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "wil_FeatureState.isVariantConfiguration", is_variant_configuration, 0xa0, 0x20, true, 0x8af3ae24a3bfb0c3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "wil_FeatureState.isWexpConfiguration", is_wexp_configuration, 0x0, 0x0, false, 0xe30e2caa21cf4268)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif