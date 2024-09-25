#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_protocol_message_type_t), "_MSV1_0_GETCHALLENRESP_REQUEST.MessageType", message_type, 0x0, 0x20, true, 0xb24e32141e17f7dc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_GETCHALLENRESP_REQUEST.ParameterControl", parameter_control, 0x20, 0x20, true, 0xe04d7a78ec09327d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_MSV1_0_GETCHALLENRESP_REQUEST.LogonId", logon_id, 0x40, 0x40, true, 0x7101910a1207e8cb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_GETCHALLENRESP_REQUEST.Password", password, 0x80, 0x80, true, 0x90bb78045a997503)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_MSV1_0_GETCHALLENRESP_REQUEST.ChallengeToClient", challenge_to_client, 0x100, 0x40, true, 0xb266937e3a3a9ca4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_GETCHALLENRESP_REQUEST.UserName", user_name, 0x140, 0x80, true, 0x32a905167af6452)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_GETCHALLENRESP_REQUEST.LogonDomainName", logon_domain_name, 0x1c0, 0x80, true, 0xc426a3c74cf3600a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_GETCHALLENRESP_REQUEST.ServerName", server_name, 0x240, 0x80, true, 0x7e6989a019b04ea0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif