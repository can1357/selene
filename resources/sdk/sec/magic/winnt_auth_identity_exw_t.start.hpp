#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXW.Version", version, 0x0, 0x20, true, 0xfb91bf8ea443dbcc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXW.Length", length, 0x20, 0x20, true, 0xf14679e1391833fe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t*), "_SEC_WINNT_AUTH_IDENTITY_EXW.User", user, 0x40, 0x40, true, 0x9d9120a25563ffff)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXW.UserLength", user_length, 0x80, 0x20, true, 0xe2b910cc936a76c3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t*), "_SEC_WINNT_AUTH_IDENTITY_EXW.Domain", domain, 0xc0, 0x40, true, 0x84879bb5882e70b0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXW.DomainLength", domain_length, 0x100, 0x20, true, 0x86ff0a75768fa0c3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t*), "_SEC_WINNT_AUTH_IDENTITY_EXW.Password", password, 0x140, 0x40, true, 0x813a3e3538c2d0c5)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXW.PasswordLength", password_length, 0x180, 0x20, true, 0x9802378e3eb68f19)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXW.Flags", flags, 0x1a0, 0x20, true, 0xa6f537ba24fba106)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t*), "_SEC_WINNT_AUTH_IDENTITY_EXW.PackageList", package_list, 0x1c0, 0x40, true, 0x1ab5ff8da95eb25d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SEC_WINNT_AUTH_IDENTITY_EXW.PackageListLength", package_list_length, 0x200, 0x20, true, 0xa693336fe2f99eb9)
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