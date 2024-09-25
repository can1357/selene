#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_COAUTHIDENTITY.User", user, 0x0, 0x40, true, 0x1f778fc2da2f0aaf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COAUTHIDENTITY.UserLength", user_length, 0x40, 0x20, true, 0x3b7e915ec05d0368)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_COAUTHIDENTITY.Domain", domain, 0x80, 0x40, true, 0xab7615c194c4d93e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COAUTHIDENTITY.DomainLength", domain_length, 0xc0, 0x20, true, 0x4adc6ff2103374b0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_COAUTHIDENTITY.Password", password, 0x100, 0x40, true, 0x74677458f9a9b8d1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COAUTHIDENTITY.PasswordLength", password_length, 0x140, 0x20, true, 0xd0f65ad7205637da)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COAUTHIDENTITY.Flags", flags, 0x160, 0x20, true, 0x13cab43ad183d9d6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif