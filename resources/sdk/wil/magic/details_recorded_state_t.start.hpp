#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_RecordedState.exchange", exchange, 0x0, 0x20, true, 0x2ec12c29786793c)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_RecordedState.recordedDeviceUsage", recorded_device_usage, 0x0, 0x1, true, 0x321499dd95e82ccd, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_RecordedState.recordedDevicePotential", recorded_device_potential, 0x1, 0x1, true, 0xc86fe98863ad690a, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_RecordedState.recordedDeviceOpportunity", recorded_device_opportunity, 0x2, 0x1, true, 0x65f253a3ef7fe7bc, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_RecordedState.recordedDevicePotentialOpportunity", recorded_device_potential_opportunity, 0x3, 0x1, true, 0x1453f3ea8c5e2e7b, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_RecordedState.recordedVariantDeviceUsage", recorded_variant_device_usage, 0x4, 0x1, true, 0x373266e06634b5d6, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "wil_details_RecordedState.recordedVariant", recorded_variant, 0x5, 0x6, true, 0xb9fcda116a0aaf5c, 6, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif