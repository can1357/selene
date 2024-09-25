#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUTHENTICODE_TS_EXTRA_CERT_CHAIN_POLICY_PARA.cbSize", cb_size, 0x0, 0x20, true, 0xca3cc42ebf5cc1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUTHENTICODE_TS_EXTRA_CERT_CHAIN_POLICY_PARA.dwRegPolicySettings", dw_reg_policy_settings, 0x20, 0x20, true, 0x2c8dbe4713768d7b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_AUTHENTICODE_TS_EXTRA_CERT_CHAIN_POLICY_PARA.fCommercial", f_commercial, 0x40, 0x20, true, 0xd29f4def66779db8)
#else
#define _m00
#define _m01
#define _m02
#endif