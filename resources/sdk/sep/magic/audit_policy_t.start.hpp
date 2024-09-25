#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::token_audit_policy_t), "_SEP_AUDIT_POLICY.AdtTokenPolicy", adt_token_policy, 0x0, 0xf0, true, 0x79d85e1b2e6bea30)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEP_AUDIT_POLICY.PolicySetStatus", policy_set_status, 0xf0, 0x8, true, 0x44393501d9167091)
#else
#define _m00
#define _m01
#endif