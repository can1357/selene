#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_protocol_message_type_t), "_MSV1_0_GETCHALLENRESP_REQUEST_V1.MessageType", message_type, 0x0, 0x20, true, 0x534f7066338afbb4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_GETCHALLENRESP_REQUEST_V1.ParameterControl", parameter_control, 0x20, 0x20, true, 0xec1e883dd1c54f58)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_MSV1_0_GETCHALLENRESP_REQUEST_V1.LogonId", logon_id, 0x40, 0x40, true, 0x675132b07bcc85ef)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MSV1_0_GETCHALLENRESP_REQUEST_V1.Password", password, 0x80, 0x80, true, 0x9be870bf16ec677)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_MSV1_0_GETCHALLENRESP_REQUEST_V1.ChallengeToClient", challenge_to_client, 0x100, 0x40, true, 0x1952f4185b77eefa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif