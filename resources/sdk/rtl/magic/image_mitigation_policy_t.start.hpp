#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_RTL_IMAGE_MITIGATION_POLICY.AuditState", audit_state, 0x0, 0x2, true, 0x7c8169eef1fb43e3, 2, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_IMAGE_MITIGATION_POLICY.AuditFlag", audit_flag, 0x2, 0x1, true, 0x19a670296467f6b5, 1, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_IMAGE_MITIGATION_POLICY.EnableAdditionalAuditingOption", enable_additional_auditing_option, 0x3, 0x1, true, 0x9ea893db86be2768, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_RTL_IMAGE_MITIGATION_POLICY.PolicyState", policy_state, 0x0, 0x2, true, 0x8d33b032646aff97, 2, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_IMAGE_MITIGATION_POLICY.AlwaysInherit", always_inherit, 0x2, 0x1, true, 0x330f923e42caafab, 1, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_IMAGE_MITIGATION_POLICY.EnableAdditionalPolicyOption", enable_additional_policy_option, 0x3, 0x1, true, 0x12690026cbdbfec4, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint60_t), "_RTL_IMAGE_MITIGATION_POLICY.AuditReserved", audit_reserved, 0x4, 0x3c, true, 0xa4768eb253b35a44, 60, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif