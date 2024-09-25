#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_CredentialNameW.CredentialType", credential_type, 0x0, 0x20, true, 0xfd3d41a3f178c1b7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SecPkgContext_CredentialNameW.sCredentialName", s_credential_name, 0x40, 0x40, true, 0x217ee91d9c2c5bfc)
#else
#define _m00
#define _m01
#endif