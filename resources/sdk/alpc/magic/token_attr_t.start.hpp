#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_ALPC_TOKEN_ATTR.TokenId", token_id, 0x0, 0x40, true, 0xff539053537b30a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_ALPC_TOKEN_ATTR.AuthenticationId", authentication_id, 0x40, 0x40, true, 0x7d38cc74114caa9b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_ALPC_TOKEN_ATTR.ModifiedId", modified_id, 0x80, 0x40, true, 0x9c1f3a1b608dbee7)
#else
#define _m00
#define _m01
#define _m02
#endif