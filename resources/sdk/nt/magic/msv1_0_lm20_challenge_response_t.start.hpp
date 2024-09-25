#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::msv1_0_protocol_message_type_t), "_MSV1_0_LM20_CHALLENGE_RESPONSE.MessageType", message_type, 0x0, 0x20, true, 0xb5b35fcf847995d7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_MSV1_0_LM20_CHALLENGE_RESPONSE.ChallengeToClient", challenge_to_client, 0x20, 0x40, true, 0x2727438cedaea175)
#else
#define _m00
#define _m01
#endif