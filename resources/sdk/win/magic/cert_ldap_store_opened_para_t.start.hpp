#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_LDAP_STORE_OPENED_PARA.pvLdapSessionHandle", pv_ldap_session_handle, 0x0, 0x40, true, 0xbd3ca7fd1ce3341)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_CERT_LDAP_STORE_OPENED_PARA.pwszLdapUrl", pwsz_ldap_url, 0x40, 0x40, true, 0xbd9633d6be9dddbb)
#else
#define _m00
#define _m01
#endif