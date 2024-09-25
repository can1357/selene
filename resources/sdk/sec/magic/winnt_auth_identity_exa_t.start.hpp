#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXA.Version", version, 0x0, 0x20, true, 0xb4e092638dec1f35)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXA.Length", length, 0x20, 0x20, true, 0x814cb1535022e1f1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SEC_WINNT_AUTH_IDENTITY_EXA.User", user, 0x40, 0x40, true, 0xabbc043e44f7b6c7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXA.UserLength", user_length, 0x80, 0x20, true, 0x7b5d7a436e627a19)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SEC_WINNT_AUTH_IDENTITY_EXA.Domain", domain, 0xc0, 0x40, true, 0x4066a4e1a72b8cd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXA.DomainLength", domain_length, 0x100, 0x20, true, 0x6ce1de0b48d7eac6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SEC_WINNT_AUTH_IDENTITY_EXA.Password", password, 0x140, 0x40, true, 0x94595d53240f7d0b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXA.PasswordLength", password_length, 0x180, 0x20, true, 0xcb5c1dc0e73fbe60)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXA.Flags", flags, 0x1a0, 0x20, true, 0x6f0524a47c6004a7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_SEC_WINNT_AUTH_IDENTITY_EXA.PackageList", package_list, 0x1c0, 0x40, true, 0xdcc0ac36c80366d1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXA.PackageListLength", package_list_length, 0x200, 0x20, true, 0xecd951ef146beadd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif