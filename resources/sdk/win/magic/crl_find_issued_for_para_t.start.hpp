#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_context_t*), "_CRL_FIND_ISSUED_FOR_PARA.pSubjectCert", p_subject_cert, 0x0, 0x40, true, 0x5f800531e2a5b434)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_context_t*), "_CRL_FIND_ISSUED_FOR_PARA.pIssuerCert", p_issuer_cert, 0x40, 0x40, true, 0x1369218ba05504f1)
#else
#define _m00
#define _m01
#endif