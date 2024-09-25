#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SECURITY_USER_DATA.UserName", user_name, 0x0, 0x80, true, 0xfb2cc02293f47554)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SECURITY_USER_DATA.LogonDomainName", logon_domain_name, 0x80, 0x80, true, 0xda7666040a2fe182)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SECURITY_USER_DATA.LogonServer", logon_server, 0x100, 0x80, true, 0xa1aa1b3cc064d41b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SECURITY_USER_DATA.pSid", p_sid, 0x180, 0x40, true, 0x5193f7a721acf17f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif