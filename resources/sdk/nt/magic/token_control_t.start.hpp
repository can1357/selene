#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN_CONTROL.TokenId", token_id, 0x0, 0x40, true, 0xcffe4c76e2e05b4c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN_CONTROL.AuthenticationId", authentication_id, 0x40, 0x40, true, 0x1c60fc82cf3b82cc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_TOKEN_CONTROL.ModifiedId", modified_id, 0x80, 0x40, true, 0x18c687c4737aa1c8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::token_source_t), "_TOKEN_CONTROL.TokenSource", token_source, 0xc0, 0x80, true, 0xe2d1ed552b47d8d3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif