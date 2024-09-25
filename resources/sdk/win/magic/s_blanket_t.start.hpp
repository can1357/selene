#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<wchar_t*, const wchar_t*>), "SBlanket._pPrincipal", p_principal, 0x0, 0x40, true, 0xf8c8ba9d7bf8486a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SBlanket._lAuthnLevel", l_authn_level, 0x40, 0x20, true, 0x709047a29e732aad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SBlanket._lAuthnSvc", l_authn_svc, 0x60, 0x20, true, 0xb3dfe23c0d7d1df7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "SBlanket._pAuthId", p_auth_id, 0x80, 0x40, true, 0xd83da8c03666ab2e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SBlanket._lAuthzSvc", l_authz_svc, 0xc0, 0x20, true, 0xedbbfb6b013601d8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rpc::security_qos_v5_w_t), "SBlanket._sQos", s_qos, 0x100, 0xc0, true, 0x204e2bcfbe304b43)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SBlanket._lCapabilities", l_capabilities, 0x2c0, 0x20, true, 0x60081515dd54360a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::schannel_cred_t), "SBlanket._sCred", s_cred, 0x300, 0x80, true, 0xf43e83e8abd4f2d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::cert_context_t*), "SBlanket._pCert", p_cert, 0x580, 0x40, true, 0x189ba32a87d122b5)
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
#endif