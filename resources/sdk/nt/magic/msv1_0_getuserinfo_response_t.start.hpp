#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_protocol_message_type_t), "_MSV1_0_GETUSERINFO_RESPONSE.MessageType", message_type, 0x0, 0x20, true, 0x6f1015010e3953e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_MSV1_0_GETUSERINFO_RESPONSE.UserSid", user_sid, 0x40, 0x40, true, 0x25237e37d018de40)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_GETUSERINFO_RESPONSE.UserName", user_name, 0x80, 0x80, true, 0x96b0d73062de9252)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_GETUSERINFO_RESPONSE.LogonDomainName", logon_domain_name, 0x100, 0x80, true, 0xdb6a967a8d27aaa4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_GETUSERINFO_RESPONSE.LogonServer", logon_server, 0x180, 0x80, true, 0x8dd24694e09b2c74)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum sec::logon_type_t), "_MSV1_0_GETUSERINFO_RESPONSE.LogonType", logon_type, 0x200, 0x20, true, 0x53fab57aa4e0ac25)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif