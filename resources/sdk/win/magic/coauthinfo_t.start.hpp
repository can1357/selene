#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COAUTHINFO.dwAuthnSvc", dw_authn_svc, 0x0, 0x20, true, 0x944d2badd0acbae0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COAUTHINFO.dwAuthzSvc", dw_authz_svc, 0x20, 0x20, true, 0x5132b064bcf17416)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_COAUTHINFO.pwszServerPrincName", pwsz_server_princ_name, 0x40, 0x40, true, 0x68a403796648e3c3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COAUTHINFO.dwAuthnLevel", dw_authn_level, 0x80, 0x20, true, 0x4fc9f99f30a76314)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COAUTHINFO.dwImpersonationLevel", dw_impersonation_level, 0xa0, 0x20, true, 0xe6ddcacdc12a8b8a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coauthidentity_t*), "_COAUTHINFO.pAuthIdentityData", p_auth_identity_data, 0xc0, 0x40, true, 0xa6d07d581a217592)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COAUTHINFO.dwCapabilities", dw_capabilities, 0x100, 0x20, true, 0x29e2771a93dc71c5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif