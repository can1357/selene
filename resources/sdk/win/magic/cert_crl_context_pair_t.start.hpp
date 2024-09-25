#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_context_t*), "_CERT_CRL_CONTEXT_PAIR.pCertContext", p_cert_context, 0x0, 0x40, true, 0x51957c659cae61de)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::crl_context_t*), "_CERT_CRL_CONTEXT_PAIR.pCrlContext", p_crl_context, 0x40, 0x40, true, 0x340fd5a9917abcd1)
#else
#define _m00
#define _m01
#endif