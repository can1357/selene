#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_CRL_INFO.cbSize", cb_size, 0x0, 0x20, true, 0x3097cd14f0ace80b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::crl_context_t*), "_CERT_REVOCATION_CRL_INFO.pBaseCrlContext", p_base_crl_context, 0x40, 0x40, true, 0xa6f3ef749d6e042)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::crl_context_t*), "_CERT_REVOCATION_CRL_INFO.pDeltaCrlContext", p_delta_crl_context, 0x80, 0x40, true, 0x40294b817ad80857)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crl_entry_t*), "_CERT_REVOCATION_CRL_INFO.pCrlEntry", p_crl_entry, 0xc0, 0x40, true, 0xe10b9fd608c20bbf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_REVOCATION_CRL_INFO.fDeltaCrlEntry", f_delta_crl_entry, 0x100, 0x20, true, 0x215d64fc7eb6e100)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif