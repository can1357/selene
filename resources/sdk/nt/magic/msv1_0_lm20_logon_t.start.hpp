#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_logon_submit_type_t), "_MSV1_0_LM20_LOGON.MessageType", message_type, 0x0, 0x20, true, 0x3fec76817e319b8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_LM20_LOGON.LogonDomainName", logon_domain_name, 0x40, 0x80, true, 0x7d4fac068299a1c2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_LM20_LOGON.UserName", user_name, 0xc0, 0x80, true, 0x8870bab2fd6fbebc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_LM20_LOGON.Workstation", workstation, 0x140, 0x80, true, 0xdfac58b295004530)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_MSV1_0_LM20_LOGON.ChallengeToClient", challenge_to_client, 0x1c0, 0x40, true, 0xfc0b99b204b40c9f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_MSV1_0_LM20_LOGON.CaseSensitiveChallengeResponse", case_sensitive_challenge_response, 0x200, 0x80, true, 0xdfe4d47ae0a9dd7b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::ascii_view), "_MSV1_0_LM20_LOGON.CaseInsensitiveChallengeResponse", case_insensitive_challenge_response, 0x280, 0x80, true, 0x5582b334a43d4a0e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_LM20_LOGON.ParameterControl", parameter_control, 0x300, 0x20, true, 0xd59fa0ef94367769)
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