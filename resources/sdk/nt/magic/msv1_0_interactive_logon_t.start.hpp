#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_logon_submit_type_t), "_MSV1_0_INTERACTIVE_LOGON.MessageType", message_type, 0x0, 0x20, true, 0x18c674f5377ef9bc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_INTERACTIVE_LOGON.LogonDomainName", logon_domain_name, 0x40, 0x80, true, 0x6140c7cde9bf7d0e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_INTERACTIVE_LOGON.UserName", user_name, 0xc0, 0x80, true, 0x10d0df5d00a14eac)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_INTERACTIVE_LOGON.Password", password, 0x140, 0x80, true, 0xe893b0ee0474b80e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif