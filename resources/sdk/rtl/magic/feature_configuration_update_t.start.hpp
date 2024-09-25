#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_FEATURE_CONFIGURATION_UPDATE.FeatureId", feature_id, 0x0, 0x20, true, 0x669798f81382bc8e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rtl::feature_configuration_priority_t), "_RTL_FEATURE_CONFIGURATION_UPDATE.Priority", priority, 0x20, 0x20, true, 0xa1e63f932589fe6d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rtl::feature_enabled_state_t), "_RTL_FEATURE_CONFIGURATION_UPDATE.EnabledState", enabled_state, 0x40, 0x20, true, 0xf429bba860937b99)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rtl::feature_enabled_state_options_t), "_RTL_FEATURE_CONFIGURATION_UPDATE.EnabledStateOptions", enabled_state_options, 0x60, 0x20, true, 0xe2b7438335121a2f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_FEATURE_CONFIGURATION_UPDATE.Variant", variant, 0x80, 0x8, true, 0x785057e2ac16532f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rtl::feature_variant_payload_kind_t), "_RTL_FEATURE_CONFIGURATION_UPDATE.VariantPayloadKind", variant_payload_kind, 0xa0, 0x20, true, 0x25d8b83c17c5eeb4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_FEATURE_CONFIGURATION_UPDATE.VariantPayload", variant_payload, 0xc0, 0x20, true, 0xd9961af2ffb723cb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum rtl::feature_configuration_operation_t), "_RTL_FEATURE_CONFIGURATION_UPDATE.Operation", operation, 0xe0, 0x20, true, 0xc01aefae2a1c6f16)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif