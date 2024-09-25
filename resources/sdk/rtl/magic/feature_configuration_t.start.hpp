#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_FEATURE_CONFIGURATION.FeatureId", feature_id, 0x0, 0x20, true, 0x9012b43cbb2f5608)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_RTL_FEATURE_CONFIGURATION.Priority", priority, 0x20, 0x4, true, 0x503f33ddf1475511, 4, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_RTL_FEATURE_CONFIGURATION.EnabledState", enabled_state, 0x24, 0x2, true, 0x62671f9a79afa084, 2, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_FEATURE_CONFIGURATION.IsWexpConfiguration", is_wexp_configuration, 0x26, 0x1, true, 0x5032174cfa468cc3, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_FEATURE_CONFIGURATION.HasSubscriptions", has_subscriptions, 0x27, 0x1, true, 0x6708c25f981006c6, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_RTL_FEATURE_CONFIGURATION.Variant", variant, 0x28, 0x6, true, 0x6a8f8b7dca9c3475, 6, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_RTL_FEATURE_CONFIGURATION.VariantPayloadKind", variant_payload_kind, 0x2e, 0x2, true, 0x185fea561afdee85, 2, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_FEATURE_CONFIGURATION.VariantPayload", variant_payload, 0x40, 0x20, true, 0xebc8f7750c44483e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_FEATURE_CONFIGURATION.Flags", flags, 0x20, 0x20, true, 0xc1345d9c593d375d)
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