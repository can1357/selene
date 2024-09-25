#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOLE_AUTHENTICATION_INFO.dwAuthnSvc", dw_authn_svc, 0x0, 0x20, true, 0x9a681f3f0d20d3c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOLE_AUTHENTICATION_INFO.dwAuthzSvc", dw_authz_svc, 0x20, 0x20, true, 0xca7823fc99fb5596)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSOLE_AUTHENTICATION_INFO.pAuthInfo", p_auth_info, 0x40, 0x40, true, 0x449decb7cfbd11e1)
#else
#define _m00
#define _m01
#define _m02
#endif