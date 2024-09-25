#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_POLICY_CONSTRAINTS_INFO.fRequireExplicitPolicy", f_require_explicit_policy, 0x0, 0x20, true, 0x9df2717db76fe4d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_POLICY_CONSTRAINTS_INFO.dwRequireExplicitPolicySkipCerts", dw_require_explicit_policy_skip_certs, 0x20, 0x20, true, 0x97bc7d5fc0a233e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_POLICY_CONSTRAINTS_INFO.fInhibitPolicyMapping", f_inhibit_policy_mapping, 0x40, 0x20, true, 0x4e4d7ec379891ccd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_POLICY_CONSTRAINTS_INFO.dwInhibitPolicyMappingSkipCerts", dw_inhibit_policy_mapping_skip_certs, 0x60, 0x20, true, 0xf525255a7691fb9b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif