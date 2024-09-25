#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_SIMPLE_CHAIN.cbSize", cb_size, 0x0, 0x20, true, 0xb1a90ada90e29fb6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_trust_status_t), "_CERT_SIMPLE_CHAIN.TrustStatus", trust_status, 0x20, 0x40, true, 0xbed8b044eb17ce4f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_SIMPLE_CHAIN.cElement", c_element, 0x60, 0x20, true, 0xf9dcbf1b2b351c5a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_chain_element_t**), "_CERT_SIMPLE_CHAIN.rgpElement", rgp_element, 0x80, 0x40, true, 0x3b49764f1b3145cb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cert_trust_list_info_t*), "_CERT_SIMPLE_CHAIN.pTrustListInfo", p_trust_list_info, 0xc0, 0x40, true, 0xb907577c81e6069e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_SIMPLE_CHAIN.fHasRevocationFreshnessTime", f_has_revocation_freshness_time, 0x100, 0x20, true, 0xd558e28707b3cd40)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_SIMPLE_CHAIN.dwRevocationFreshnessTime", dw_revocation_freshness_time, 0x120, 0x20, true, 0x3bcd94d424e759b3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif