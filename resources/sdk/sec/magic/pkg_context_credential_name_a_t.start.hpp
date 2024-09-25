#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgContext_CredentialNameA.CredentialType", credential_type, 0x0, 0x20, true, 0x733eed5316e83c02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgContext_CredentialNameA.sCredentialName", s_credential_name, 0x40, 0x40, true, 0x44aa86c58015137)
#else
#define _m00
#define _m01
#endif