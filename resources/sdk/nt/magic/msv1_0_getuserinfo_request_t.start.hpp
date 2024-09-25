#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_protocol_message_type_t), "_MSV1_0_GETUSERINFO_REQUEST.MessageType", message_type, 0x0, 0x20, true, 0xdcb17d6fb3645f45)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_MSV1_0_GETUSERINFO_REQUEST.LogonId", logon_id, 0x20, 0x40, true, 0x3c11cdec6488845d)
#else
#define _m00
#define _m01
#endif