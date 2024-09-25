#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SEC_WINNT_AUTH_IDENTITY_A.User", user, 0x0, 0x40, true, 0x40dc917afb178d29)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_A.UserLength", user_length, 0x40, 0x20, true, 0x7ca7d86e337e2555)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SEC_WINNT_AUTH_IDENTITY_A.Domain", domain, 0x80, 0x40, true, 0x7aa7e1f60250a1ac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_A.DomainLength", domain_length, 0xc0, 0x20, true, 0x75de7edab2a3fe78)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SEC_WINNT_AUTH_IDENTITY_A.Password", password, 0x100, 0x40, true, 0x2ffa22879e9e1465)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_A.PasswordLength", password_length, 0x140, 0x20, true, 0xe571a1f3387993ce)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_A.Flags", flags, 0x160, 0x20, true, 0xfee5b7fadbc0f069)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif