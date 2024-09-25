#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_POLICY_ID.cCertPolicyElementId", c_cert_policy_element_id, 0x0, 0x20, true, 0xddfbe472010cbca3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char**), "_CERT_POLICY_ID.rgpszCertPolicyElementId", rgpsz_cert_policy_element_id, 0x40, 0x40, true, 0x9d4b388947eec000)
#else
#define _m00
#define _m01
#endif