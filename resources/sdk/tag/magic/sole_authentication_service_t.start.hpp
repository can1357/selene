#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOLE_AUTHENTICATION_SERVICE.dwAuthnSvc", dw_authn_svc, 0x0, 0x20, true, 0xf607232a5100cc5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSOLE_AUTHENTICATION_SERVICE.dwAuthzSvc", dw_authz_svc, 0x20, 0x20, true, 0xd5cd448f78212b6d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSOLE_AUTHENTICATION_SERVICE.pPrincipalName", p_principal_name, 0x40, 0x40, true, 0x7cf7d8c0632075ee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "tagSOLE_AUTHENTICATION_SERVICE.hr", hr, 0x80, 0x20, true, 0x955b13fb7fdeef20)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif