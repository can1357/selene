#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EV_EXTRA_CERT_CHAIN_POLICY_STATUS.cbSize", cb_size, 0x0, 0x20, true, 0xd0f590ed46d60197)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EV_EXTRA_CERT_CHAIN_POLICY_STATUS.dwQualifiers", dw_qualifiers, 0x20, 0x20, true, 0xce163d62a3ef9801)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EV_EXTRA_CERT_CHAIN_POLICY_STATUS.dwIssuanceUsageIndex", dw_issuance_usage_index, 0x40, 0x20, true, 0x2d2a05b90b9c4a95)
#else
#define _m00
#define _m01
#define _m02
#endif