#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_POLICY_MAPPINGS_INFO.cPolicyMapping", c_policy_mapping, 0x0, 0x20, true, 0xa838157236bf825e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_policy_mapping_t*), "_CERT_POLICY_MAPPINGS_INFO.rgPolicyMapping", rg_policy_mapping, 0x40, 0x40, true, 0xfd330456f036f1ab)
#else
#define _m00
#define _m01
#endif