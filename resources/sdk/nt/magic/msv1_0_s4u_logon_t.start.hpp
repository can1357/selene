#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_logon_submit_type_t), "_MSV1_0_S4U_LOGON.MessageType", message_type, 0x0, 0x20, true, 0xbdcb7d1a905f1cb3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_S4U_LOGON.Flags", flags, 0x20, 0x20, true, 0x110dd09cf891f4b8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_S4U_LOGON.UserPrincipalName", user_principal_name, 0x40, 0x80, true, 0xfbce6bd563c3e800)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_S4U_LOGON.DomainName", domain_name, 0xc0, 0x80, true, 0x9ce513c220ad1329)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif