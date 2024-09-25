#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_POLICIES_INFO.cPolicyInfo", c_policy_info, 0x0, 0x20, true, 0xf1149814d9ceb6ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_policy_info_t*), "_CERT_POLICIES_INFO.rgPolicyInfo", rg_policy_info, 0x40, 0x40, true, 0x2d0f42286f5a47c9)
#else
#define _m00
#define _m01
#endif