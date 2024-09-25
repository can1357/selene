#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_MSV1_0_NTLM3_RESPONSE.Response", response, 0x0, 0x80, true, 0xea5688cd9d3ddd89)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MSV1_0_NTLM3_RESPONSE.RespType", resp_type, 0x80, 0x8, true, 0x3eb9a050dbc30145)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MSV1_0_NTLM3_RESPONSE.HiRespType", hi_resp_type, 0x88, 0x8, true, 0x34902939e4f599bd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MSV1_0_NTLM3_RESPONSE.Flags", flags, 0x90, 0x10, true, 0x9244ee1e79f3e08e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_NTLM3_RESPONSE.MsgWord", msg_word, 0xa0, 0x20, true, 0xdc304789a7dc5b22)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MSV1_0_NTLM3_RESPONSE.TimeStamp", time_stamp, 0xc0, 0x40, true, 0x685b05ce2a54ca64)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_MSV1_0_NTLM3_RESPONSE.ChallengeFromClient", challenge_from_client, 0x100, 0x40, true, 0x15cd34449fc803e9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MSV1_0_NTLM3_RESPONSE.AvPairsOff", av_pairs_off, 0x140, 0x20, true, 0x96943dd51328863f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_MSV1_0_NTLM3_RESPONSE.Buffer", buffer, 0x160, 0x8, true, 0x2b63a6504820cefc)
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