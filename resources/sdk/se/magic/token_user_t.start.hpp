#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::token_user_t), "_SE_TOKEN_USER.TokenUser", token_user, 0x0, 0x80, true, 0xa076e840a44309a2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_t), "_SE_TOKEN_USER.User", user, 0x0, 0x80, true, 0x487a0e82a6b33e9a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sid_t), "_SE_TOKEN_USER.Sid", sid, 0x80, 0x60, true, 0x3c3e09d5dc38956e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 68>), "_SE_TOKEN_USER.Buffer", buffer, 0x80, 0x20, true, 0xe1d220f8234a91ac)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif