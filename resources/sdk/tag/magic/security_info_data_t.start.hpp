#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSecurityInfoData.dwAuthnFlags", dw_authn_flags, 0x0, 0x20, true, 0xb76a35c61da5e51e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coserverinfo_t*), "tagSecurityInfoData.pServerInfo", p_server_info, 0x40, 0x40, true, 0x3c6f0206c99a46dc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coauthidentity_t*), "tagSecurityInfoData.pAuthIdentityInfo", p_auth_identity_info, 0x80, 0x40, true, 0xa7af0e51c0e1e613)
#else
#define _m00
#define _m01
#define _m02
#endif