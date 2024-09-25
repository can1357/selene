#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_protocol_message_type_t), "_MSV1_0_GETCHALLENRESP_RESPONSE.MessageType", message_type, 0x0, 0x20, true, 0xf947eb70b83e4cd6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_MSV1_0_GETCHALLENRESP_RESPONSE.CaseSensitiveChallengeResponse", case_sensitive_challenge_response, 0x40, 0x80, true, 0x14f0c3ded04ab492)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_MSV1_0_GETCHALLENRESP_RESPONSE.CaseInsensitiveChallengeResponse", case_insensitive_challenge_response, 0xc0, 0x80, true, 0x8722fb1926d31367)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_GETCHALLENRESP_RESPONSE.UserName", user_name, 0x140, 0x80, true, 0x56f77d866c08e923)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_GETCHALLENRESP_RESPONSE.LogonDomainName", logon_domain_name, 0x1c0, 0x80, true, 0x19c06580817707af)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_MSV1_0_GETCHALLENRESP_RESPONSE.UserSessionKey", user_session_key, 0x240, 0x80, true, 0x39f780bab8b55e26)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_MSV1_0_GETCHALLENRESP_RESPONSE.LanmanSessionKey", lanman_session_key, 0x2c0, 0x40, true, 0x26d193aea336be4d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif