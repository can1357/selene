#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_CONTEXT.cbSize", cb_size, 0x0, 0x20, true, 0x547aba8a569ca571)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_trust_status_t), "_CERT_CHAIN_CONTEXT.TrustStatus", trust_status, 0x20, 0x40, true, 0x3a213d281c4f4a2f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_CONTEXT.cChain", c_chain, 0x60, 0x20, true, 0xe35cebc5797a9d27)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_simple_chain_t**), "_CERT_CHAIN_CONTEXT.rgpChain", rgp_chain, 0x80, 0x40, true, 0xa666f750bce947dc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_CONTEXT.cLowerQualityChainContext", c_lower_quality_chain_context, 0xc0, 0x20, true, 0x48510310d48609f1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_chain_context_t**), "_CERT_CHAIN_CONTEXT.rgpLowerQualityChainContext", rgp_lower_quality_chain_context, 0x100, 0x40, true, 0x2efebf658c27ba80)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_CHAIN_CONTEXT.fHasRevocationFreshnessTime", f_has_revocation_freshness_time, 0x140, 0x20, true, 0x7235b88e8c9cd4d0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_CONTEXT.dwRevocationFreshnessTime", dw_revocation_freshness_time, 0x160, 0x20, true, 0x6b07dd1118076113)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_CONTEXT.dwCreateFlags", dw_create_flags, 0x180, 0x20, true, 0x91e05bd1d90cd501)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CERT_CHAIN_CONTEXT.ChainId", chain_id, 0x1a0, 0x80, true, 0x5206b994c9828c62)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif