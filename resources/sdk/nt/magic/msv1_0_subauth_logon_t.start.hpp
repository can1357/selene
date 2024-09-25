#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_logon_submit_type_t), "_MSV1_0_SUBAUTH_LOGON.MessageType", message_type, 0x0, 0x20, true, 0xde376786a9be8d17)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_SUBAUTH_LOGON.LogonDomainName", logon_domain_name, 0x40, 0x80, true, 0x823d87b8ae9a3872)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_SUBAUTH_LOGON.UserName", user_name, 0xc0, 0x80, true, 0xe796e1c417a351d5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_SUBAUTH_LOGON.Workstation", workstation, 0x140, 0x80, true, 0xd098a4d6fc59cda0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_MSV1_0_SUBAUTH_LOGON.ChallengeToClient", challenge_to_client, 0x1c0, 0x40, true, 0xcdb289e2d00ab31c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_MSV1_0_SUBAUTH_LOGON.AuthenticationInfo1", authentication_info1, 0x200, 0x80, true, 0xecab8762a6c0c9ac)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_MSV1_0_SUBAUTH_LOGON.AuthenticationInfo2", authentication_info2, 0x280, 0x80, true, 0xdce13de2c2655b16)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_SUBAUTH_LOGON.ParameterControl", parameter_control, 0x300, 0x20, true, 0x9fa61c833a7c760f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_SUBAUTH_LOGON.SubAuthPackageId", sub_auth_package_id, 0x320, 0x20, true, 0x536a043c1a64cd4)
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
#endif