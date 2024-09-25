#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA.cbSize", cb_size, 0x0, 0x20, true, 0xe689a02d649e485b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA.dwRegPolicySettings", dw_reg_policy_settings, 0x20, 0x20, true, 0x64d72eeac19fd141)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmsg_signer_info_t*), "_AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA.pSignerInfo", p_signer_info, 0x40, 0x40, true, 0x6bd2cdd8c6ec601f)
#else
#define _m00
#define _m01
#define _m02
#endif