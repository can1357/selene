#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crl_entry_t*), "_CRL_REVOCATION_INFO.pCrlEntry", p_crl_entry, 0x0, 0x40, true, 0x9c9ed9b6c85673ba)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::crl_context_t*), "_CRL_REVOCATION_INFO.pCrlContext", p_crl_context, 0x40, 0x40, true, 0x6c6303ded16a54a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_chain_context_t*), "_CRL_REVOCATION_INFO.pCrlIssuerChain", p_crl_issuer_chain, 0x80, 0x40, true, 0x2e7fedd2798d6676)
#else
#define _m00
#define _m01
#define _m02
#endif