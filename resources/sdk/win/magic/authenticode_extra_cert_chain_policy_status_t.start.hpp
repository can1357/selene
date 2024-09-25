#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_STATUS.cbSize", cb_size, 0x0, 0x20, true, 0x6043584be6a29316)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_STATUS.fCommercial", f_commercial, 0x20, 0x20, true, 0x91f1348e16bef272)
#else
#define _m00
#define _m01
#endif