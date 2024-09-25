#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_PARA.cbSize", cb_size, 0x0, 0x20, true, 0xce3369cf1eb91cea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_context_t*), "_CERT_REVOCATION_PARA.pIssuerCert", p_issuer_cert, 0x40, 0x40, true, 0x4f7d58cd8f2d809b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_PARA.cCertStore", c_cert_store, 0x80, 0x20, true, 0x40775f8d7b9e34a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_CERT_REVOCATION_PARA.rgCertStore", rg_cert_store, 0xc0, 0x40, true, 0x1e9986df98f04c1e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_REVOCATION_PARA.hCrlStore", h_crl_store, 0x100, 0x40, true, 0x8e3fe35e96f7d045)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t*), "_CERT_REVOCATION_PARA.pftTimeToUse", pft_time_to_use, 0x140, 0x40, true, 0xe24584cdcd1b5e56)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif