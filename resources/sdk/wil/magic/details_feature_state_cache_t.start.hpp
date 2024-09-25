#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_FeatureStateCache.exchange", exchange, 0x0, 0x20, true, 0x1cb8fecdad88584a)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_FeatureStateCache.stateCached", state_cached, 0x0, 0x1, true, 0xba03d5b01831831f, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_FeatureStateCache.hasNotificationCached", has_notification_cached, 0x1, 0x1, true, 0xfdd5da5174079d67, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_FeatureStateCache.variantCached", variant_cached, 0x2, 0x1, true, 0x8e08937de48e9181, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_FeatureStateCache.effectiveState", effective_state, 0x3, 0x1, true, 0x7ea9db3d0a85dfb3, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_FeatureStateCache.desiredState", desired_state, 0x4, 0x1, true, 0xdbfc833ecb461961, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_FeatureStateCache.hasNotification", has_notification, 0x8, 0x1, true, 0x487651d0d6e2d29e, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "wil_details_FeatureStateCache.variant", variant, 0xa, 0x6, true, 0xd15fa7849dcce3b1, 6, uint32_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_FeatureStateCache.payloadId", payload_id, 0x20, 0x20, true, 0x41f328f4f6b6670e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "wil_details_FeatureStateCache.exchange64", exchange64, 0x0, 0x40, true, 0x3b4164495ba9409b)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_FeatureStateCache.isVariant", is_variant, 0x9, 0x1, true, 0x7dcf4800d0aefc69, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "wil_details_FeatureStateCache.configuredState", configured_state, 0x5, 0x2, true, 0x5dd5bec1d720428a, 2, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_FeatureStateCache.needsRefresh", needs_refresh, 0x7, 0x1, true, 0xd2d76052f421c717, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "wil_details_FeatureStateCache.reservedForKernelModeSupport", reserved_for_kernel_mode_support, 0x0, 0x0, false, 0x33436cd755422911, 2, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_FeatureStateCache.isWexpConfiguration", is_wexp_configuration, 0x0, 0x0, false, 0xb1042f57052e23b7, 1, uint32_t)
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