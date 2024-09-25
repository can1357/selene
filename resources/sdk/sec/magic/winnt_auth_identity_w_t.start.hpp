#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t*), "_SEC_WINNT_AUTH_IDENTITY_W.User", user, 0x0, 0x40, true, 0xdf4fbf867f7d2961)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_W.UserLength", user_length, 0x40, 0x20, true, 0xf69831edc7e0aaa7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t*), "_SEC_WINNT_AUTH_IDENTITY_W.Domain", domain, 0x80, 0x40, true, 0xeec34d880d0233ff)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_W.DomainLength", domain_length, 0xc0, 0x20, true, 0xf00c8ca1420130de)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t*), "_SEC_WINNT_AUTH_IDENTITY_W.Password", password, 0x100, 0x40, true, 0xda301d1c4c683f9a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_W.PasswordLength", password_length, 0x140, 0x20, true, 0xc5354d5a72ed14bb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_W.Flags", flags, 0x160, 0x20, true, 0x2c42a8df48a563e9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif